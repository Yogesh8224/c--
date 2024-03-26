// TreeNode* temp = root;
//     int pred = -1;
//     int succ = -1;

//     while (temp != nullptr) {
//         if (temp->data == key) {
//             // Node with key found
//             if (temp->left != nullptr) {
//                 // Find predecessor in the left subtree
//                 TreeNode* predNode = temp->left;
//                 while (predNode->right != nullptr) {
//                     predNode = predNode->right;
//                 }
//                 pred = predNode->data;
//             }

//             if (temp->right != nullptr) {
//                 // Find successor in the right subtree
//                 TreeNode* succNode = temp->right;
//                 while (succNode->left != nullptr) {
//                     succNode = succNode->left;
//                 }
//                 succ = succNode->data;
//             }

//             break; // Break out of the loop since we found the key
//         } else if (temp->data > key) {
//             // Update successor and move to the left subtree
//             succ = temp->data;
//             temp = temp->left;
//         } else {
//             // Update predecessor and move to the right subtree
//             pred = temp->data;
//             temp = temp->right;
//         }
//     }

//     return make_pair(pred, succ);