#import <UIKit/UIKit.h>

@interface ContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

// Empty view that holds the image and description
@property (weak, nonatomic) IBOutlet UIView *contentArea;

// White border for movie image (to give it a Polaroid look)
@property (weak, nonatomic) IBOutlet UIView *imageFrame;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (weak, nonatomic) IBOutlet UIWebView *descriptionWeb;

// Index of the movie (1 - 3)
@property (assign, nonatomic) NSUInteger movieIndex;

@end
