#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034FC20
// Address: 0x34fc20 - 0x350210
void sub_0034FC20_0x34fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FC20_0x34fc20");
#endif

    switch (ctx->pc) {
        case 0x34fc20u: goto label_34fc20;
        case 0x34fc24u: goto label_34fc24;
        case 0x34fc28u: goto label_34fc28;
        case 0x34fc2cu: goto label_34fc2c;
        case 0x34fc30u: goto label_34fc30;
        case 0x34fc34u: goto label_34fc34;
        case 0x34fc38u: goto label_34fc38;
        case 0x34fc3cu: goto label_34fc3c;
        case 0x34fc40u: goto label_34fc40;
        case 0x34fc44u: goto label_34fc44;
        case 0x34fc48u: goto label_34fc48;
        case 0x34fc4cu: goto label_34fc4c;
        case 0x34fc50u: goto label_34fc50;
        case 0x34fc54u: goto label_34fc54;
        case 0x34fc58u: goto label_34fc58;
        case 0x34fc5cu: goto label_34fc5c;
        case 0x34fc60u: goto label_34fc60;
        case 0x34fc64u: goto label_34fc64;
        case 0x34fc68u: goto label_34fc68;
        case 0x34fc6cu: goto label_34fc6c;
        case 0x34fc70u: goto label_34fc70;
        case 0x34fc74u: goto label_34fc74;
        case 0x34fc78u: goto label_34fc78;
        case 0x34fc7cu: goto label_34fc7c;
        case 0x34fc80u: goto label_34fc80;
        case 0x34fc84u: goto label_34fc84;
        case 0x34fc88u: goto label_34fc88;
        case 0x34fc8cu: goto label_34fc8c;
        case 0x34fc90u: goto label_34fc90;
        case 0x34fc94u: goto label_34fc94;
        case 0x34fc98u: goto label_34fc98;
        case 0x34fc9cu: goto label_34fc9c;
        case 0x34fca0u: goto label_34fca0;
        case 0x34fca4u: goto label_34fca4;
        case 0x34fca8u: goto label_34fca8;
        case 0x34fcacu: goto label_34fcac;
        case 0x34fcb0u: goto label_34fcb0;
        case 0x34fcb4u: goto label_34fcb4;
        case 0x34fcb8u: goto label_34fcb8;
        case 0x34fcbcu: goto label_34fcbc;
        case 0x34fcc0u: goto label_34fcc0;
        case 0x34fcc4u: goto label_34fcc4;
        case 0x34fcc8u: goto label_34fcc8;
        case 0x34fcccu: goto label_34fccc;
        case 0x34fcd0u: goto label_34fcd0;
        case 0x34fcd4u: goto label_34fcd4;
        case 0x34fcd8u: goto label_34fcd8;
        case 0x34fcdcu: goto label_34fcdc;
        case 0x34fce0u: goto label_34fce0;
        case 0x34fce4u: goto label_34fce4;
        case 0x34fce8u: goto label_34fce8;
        case 0x34fcecu: goto label_34fcec;
        case 0x34fcf0u: goto label_34fcf0;
        case 0x34fcf4u: goto label_34fcf4;
        case 0x34fcf8u: goto label_34fcf8;
        case 0x34fcfcu: goto label_34fcfc;
        case 0x34fd00u: goto label_34fd00;
        case 0x34fd04u: goto label_34fd04;
        case 0x34fd08u: goto label_34fd08;
        case 0x34fd0cu: goto label_34fd0c;
        case 0x34fd10u: goto label_34fd10;
        case 0x34fd14u: goto label_34fd14;
        case 0x34fd18u: goto label_34fd18;
        case 0x34fd1cu: goto label_34fd1c;
        case 0x34fd20u: goto label_34fd20;
        case 0x34fd24u: goto label_34fd24;
        case 0x34fd28u: goto label_34fd28;
        case 0x34fd2cu: goto label_34fd2c;
        case 0x34fd30u: goto label_34fd30;
        case 0x34fd34u: goto label_34fd34;
        case 0x34fd38u: goto label_34fd38;
        case 0x34fd3cu: goto label_34fd3c;
        case 0x34fd40u: goto label_34fd40;
        case 0x34fd44u: goto label_34fd44;
        case 0x34fd48u: goto label_34fd48;
        case 0x34fd4cu: goto label_34fd4c;
        case 0x34fd50u: goto label_34fd50;
        case 0x34fd54u: goto label_34fd54;
        case 0x34fd58u: goto label_34fd58;
        case 0x34fd5cu: goto label_34fd5c;
        case 0x34fd60u: goto label_34fd60;
        case 0x34fd64u: goto label_34fd64;
        case 0x34fd68u: goto label_34fd68;
        case 0x34fd6cu: goto label_34fd6c;
        case 0x34fd70u: goto label_34fd70;
        case 0x34fd74u: goto label_34fd74;
        case 0x34fd78u: goto label_34fd78;
        case 0x34fd7cu: goto label_34fd7c;
        case 0x34fd80u: goto label_34fd80;
        case 0x34fd84u: goto label_34fd84;
        case 0x34fd88u: goto label_34fd88;
        case 0x34fd8cu: goto label_34fd8c;
        case 0x34fd90u: goto label_34fd90;
        case 0x34fd94u: goto label_34fd94;
        case 0x34fd98u: goto label_34fd98;
        case 0x34fd9cu: goto label_34fd9c;
        case 0x34fda0u: goto label_34fda0;
        case 0x34fda4u: goto label_34fda4;
        case 0x34fda8u: goto label_34fda8;
        case 0x34fdacu: goto label_34fdac;
        case 0x34fdb0u: goto label_34fdb0;
        case 0x34fdb4u: goto label_34fdb4;
        case 0x34fdb8u: goto label_34fdb8;
        case 0x34fdbcu: goto label_34fdbc;
        case 0x34fdc0u: goto label_34fdc0;
        case 0x34fdc4u: goto label_34fdc4;
        case 0x34fdc8u: goto label_34fdc8;
        case 0x34fdccu: goto label_34fdcc;
        case 0x34fdd0u: goto label_34fdd0;
        case 0x34fdd4u: goto label_34fdd4;
        case 0x34fdd8u: goto label_34fdd8;
        case 0x34fddcu: goto label_34fddc;
        case 0x34fde0u: goto label_34fde0;
        case 0x34fde4u: goto label_34fde4;
        case 0x34fde8u: goto label_34fde8;
        case 0x34fdecu: goto label_34fdec;
        case 0x34fdf0u: goto label_34fdf0;
        case 0x34fdf4u: goto label_34fdf4;
        case 0x34fdf8u: goto label_34fdf8;
        case 0x34fdfcu: goto label_34fdfc;
        case 0x34fe00u: goto label_34fe00;
        case 0x34fe04u: goto label_34fe04;
        case 0x34fe08u: goto label_34fe08;
        case 0x34fe0cu: goto label_34fe0c;
        case 0x34fe10u: goto label_34fe10;
        case 0x34fe14u: goto label_34fe14;
        case 0x34fe18u: goto label_34fe18;
        case 0x34fe1cu: goto label_34fe1c;
        case 0x34fe20u: goto label_34fe20;
        case 0x34fe24u: goto label_34fe24;
        case 0x34fe28u: goto label_34fe28;
        case 0x34fe2cu: goto label_34fe2c;
        case 0x34fe30u: goto label_34fe30;
        case 0x34fe34u: goto label_34fe34;
        case 0x34fe38u: goto label_34fe38;
        case 0x34fe3cu: goto label_34fe3c;
        case 0x34fe40u: goto label_34fe40;
        case 0x34fe44u: goto label_34fe44;
        case 0x34fe48u: goto label_34fe48;
        case 0x34fe4cu: goto label_34fe4c;
        case 0x34fe50u: goto label_34fe50;
        case 0x34fe54u: goto label_34fe54;
        case 0x34fe58u: goto label_34fe58;
        case 0x34fe5cu: goto label_34fe5c;
        case 0x34fe60u: goto label_34fe60;
        case 0x34fe64u: goto label_34fe64;
        case 0x34fe68u: goto label_34fe68;
        case 0x34fe6cu: goto label_34fe6c;
        case 0x34fe70u: goto label_34fe70;
        case 0x34fe74u: goto label_34fe74;
        case 0x34fe78u: goto label_34fe78;
        case 0x34fe7cu: goto label_34fe7c;
        case 0x34fe80u: goto label_34fe80;
        case 0x34fe84u: goto label_34fe84;
        case 0x34fe88u: goto label_34fe88;
        case 0x34fe8cu: goto label_34fe8c;
        case 0x34fe90u: goto label_34fe90;
        case 0x34fe94u: goto label_34fe94;
        case 0x34fe98u: goto label_34fe98;
        case 0x34fe9cu: goto label_34fe9c;
        case 0x34fea0u: goto label_34fea0;
        case 0x34fea4u: goto label_34fea4;
        case 0x34fea8u: goto label_34fea8;
        case 0x34feacu: goto label_34feac;
        case 0x34feb0u: goto label_34feb0;
        case 0x34feb4u: goto label_34feb4;
        case 0x34feb8u: goto label_34feb8;
        case 0x34febcu: goto label_34febc;
        case 0x34fec0u: goto label_34fec0;
        case 0x34fec4u: goto label_34fec4;
        case 0x34fec8u: goto label_34fec8;
        case 0x34feccu: goto label_34fecc;
        case 0x34fed0u: goto label_34fed0;
        case 0x34fed4u: goto label_34fed4;
        case 0x34fed8u: goto label_34fed8;
        case 0x34fedcu: goto label_34fedc;
        case 0x34fee0u: goto label_34fee0;
        case 0x34fee4u: goto label_34fee4;
        case 0x34fee8u: goto label_34fee8;
        case 0x34feecu: goto label_34feec;
        case 0x34fef0u: goto label_34fef0;
        case 0x34fef4u: goto label_34fef4;
        case 0x34fef8u: goto label_34fef8;
        case 0x34fefcu: goto label_34fefc;
        case 0x34ff00u: goto label_34ff00;
        case 0x34ff04u: goto label_34ff04;
        case 0x34ff08u: goto label_34ff08;
        case 0x34ff0cu: goto label_34ff0c;
        case 0x34ff10u: goto label_34ff10;
        case 0x34ff14u: goto label_34ff14;
        case 0x34ff18u: goto label_34ff18;
        case 0x34ff1cu: goto label_34ff1c;
        case 0x34ff20u: goto label_34ff20;
        case 0x34ff24u: goto label_34ff24;
        case 0x34ff28u: goto label_34ff28;
        case 0x34ff2cu: goto label_34ff2c;
        case 0x34ff30u: goto label_34ff30;
        case 0x34ff34u: goto label_34ff34;
        case 0x34ff38u: goto label_34ff38;
        case 0x34ff3cu: goto label_34ff3c;
        case 0x34ff40u: goto label_34ff40;
        case 0x34ff44u: goto label_34ff44;
        case 0x34ff48u: goto label_34ff48;
        case 0x34ff4cu: goto label_34ff4c;
        case 0x34ff50u: goto label_34ff50;
        case 0x34ff54u: goto label_34ff54;
        case 0x34ff58u: goto label_34ff58;
        case 0x34ff5cu: goto label_34ff5c;
        case 0x34ff60u: goto label_34ff60;
        case 0x34ff64u: goto label_34ff64;
        case 0x34ff68u: goto label_34ff68;
        case 0x34ff6cu: goto label_34ff6c;
        case 0x34ff70u: goto label_34ff70;
        case 0x34ff74u: goto label_34ff74;
        case 0x34ff78u: goto label_34ff78;
        case 0x34ff7cu: goto label_34ff7c;
        case 0x34ff80u: goto label_34ff80;
        case 0x34ff84u: goto label_34ff84;
        case 0x34ff88u: goto label_34ff88;
        case 0x34ff8cu: goto label_34ff8c;
        case 0x34ff90u: goto label_34ff90;
        case 0x34ff94u: goto label_34ff94;
        case 0x34ff98u: goto label_34ff98;
        case 0x34ff9cu: goto label_34ff9c;
        case 0x34ffa0u: goto label_34ffa0;
        case 0x34ffa4u: goto label_34ffa4;
        case 0x34ffa8u: goto label_34ffa8;
        case 0x34ffacu: goto label_34ffac;
        case 0x34ffb0u: goto label_34ffb0;
        case 0x34ffb4u: goto label_34ffb4;
        case 0x34ffb8u: goto label_34ffb8;
        case 0x34ffbcu: goto label_34ffbc;
        case 0x34ffc0u: goto label_34ffc0;
        case 0x34ffc4u: goto label_34ffc4;
        case 0x34ffc8u: goto label_34ffc8;
        case 0x34ffccu: goto label_34ffcc;
        case 0x34ffd0u: goto label_34ffd0;
        case 0x34ffd4u: goto label_34ffd4;
        case 0x34ffd8u: goto label_34ffd8;
        case 0x34ffdcu: goto label_34ffdc;
        case 0x34ffe0u: goto label_34ffe0;
        case 0x34ffe4u: goto label_34ffe4;
        case 0x34ffe8u: goto label_34ffe8;
        case 0x34ffecu: goto label_34ffec;
        case 0x34fff0u: goto label_34fff0;
        case 0x34fff4u: goto label_34fff4;
        case 0x34fff8u: goto label_34fff8;
        case 0x34fffcu: goto label_34fffc;
        case 0x350000u: goto label_350000;
        case 0x350004u: goto label_350004;
        case 0x350008u: goto label_350008;
        case 0x35000cu: goto label_35000c;
        case 0x350010u: goto label_350010;
        case 0x350014u: goto label_350014;
        case 0x350018u: goto label_350018;
        case 0x35001cu: goto label_35001c;
        case 0x350020u: goto label_350020;
        case 0x350024u: goto label_350024;
        case 0x350028u: goto label_350028;
        case 0x35002cu: goto label_35002c;
        case 0x350030u: goto label_350030;
        case 0x350034u: goto label_350034;
        case 0x350038u: goto label_350038;
        case 0x35003cu: goto label_35003c;
        case 0x350040u: goto label_350040;
        case 0x350044u: goto label_350044;
        case 0x350048u: goto label_350048;
        case 0x35004cu: goto label_35004c;
        case 0x350050u: goto label_350050;
        case 0x350054u: goto label_350054;
        case 0x350058u: goto label_350058;
        case 0x35005cu: goto label_35005c;
        case 0x350060u: goto label_350060;
        case 0x350064u: goto label_350064;
        case 0x350068u: goto label_350068;
        case 0x35006cu: goto label_35006c;
        case 0x350070u: goto label_350070;
        case 0x350074u: goto label_350074;
        case 0x350078u: goto label_350078;
        case 0x35007cu: goto label_35007c;
        case 0x350080u: goto label_350080;
        case 0x350084u: goto label_350084;
        case 0x350088u: goto label_350088;
        case 0x35008cu: goto label_35008c;
        case 0x350090u: goto label_350090;
        case 0x350094u: goto label_350094;
        case 0x350098u: goto label_350098;
        case 0x35009cu: goto label_35009c;
        case 0x3500a0u: goto label_3500a0;
        case 0x3500a4u: goto label_3500a4;
        case 0x3500a8u: goto label_3500a8;
        case 0x3500acu: goto label_3500ac;
        case 0x3500b0u: goto label_3500b0;
        case 0x3500b4u: goto label_3500b4;
        case 0x3500b8u: goto label_3500b8;
        case 0x3500bcu: goto label_3500bc;
        case 0x3500c0u: goto label_3500c0;
        case 0x3500c4u: goto label_3500c4;
        case 0x3500c8u: goto label_3500c8;
        case 0x3500ccu: goto label_3500cc;
        case 0x3500d0u: goto label_3500d0;
        case 0x3500d4u: goto label_3500d4;
        case 0x3500d8u: goto label_3500d8;
        case 0x3500dcu: goto label_3500dc;
        case 0x3500e0u: goto label_3500e0;
        case 0x3500e4u: goto label_3500e4;
        case 0x3500e8u: goto label_3500e8;
        case 0x3500ecu: goto label_3500ec;
        case 0x3500f0u: goto label_3500f0;
        case 0x3500f4u: goto label_3500f4;
        case 0x3500f8u: goto label_3500f8;
        case 0x3500fcu: goto label_3500fc;
        case 0x350100u: goto label_350100;
        case 0x350104u: goto label_350104;
        case 0x350108u: goto label_350108;
        case 0x35010cu: goto label_35010c;
        case 0x350110u: goto label_350110;
        case 0x350114u: goto label_350114;
        case 0x350118u: goto label_350118;
        case 0x35011cu: goto label_35011c;
        case 0x350120u: goto label_350120;
        case 0x350124u: goto label_350124;
        case 0x350128u: goto label_350128;
        case 0x35012cu: goto label_35012c;
        case 0x350130u: goto label_350130;
        case 0x350134u: goto label_350134;
        case 0x350138u: goto label_350138;
        case 0x35013cu: goto label_35013c;
        case 0x350140u: goto label_350140;
        case 0x350144u: goto label_350144;
        case 0x350148u: goto label_350148;
        case 0x35014cu: goto label_35014c;
        case 0x350150u: goto label_350150;
        case 0x350154u: goto label_350154;
        case 0x350158u: goto label_350158;
        case 0x35015cu: goto label_35015c;
        case 0x350160u: goto label_350160;
        case 0x350164u: goto label_350164;
        case 0x350168u: goto label_350168;
        case 0x35016cu: goto label_35016c;
        case 0x350170u: goto label_350170;
        case 0x350174u: goto label_350174;
        case 0x350178u: goto label_350178;
        case 0x35017cu: goto label_35017c;
        case 0x350180u: goto label_350180;
        case 0x350184u: goto label_350184;
        case 0x350188u: goto label_350188;
        case 0x35018cu: goto label_35018c;
        case 0x350190u: goto label_350190;
        case 0x350194u: goto label_350194;
        case 0x350198u: goto label_350198;
        case 0x35019cu: goto label_35019c;
        case 0x3501a0u: goto label_3501a0;
        case 0x3501a4u: goto label_3501a4;
        case 0x3501a8u: goto label_3501a8;
        case 0x3501acu: goto label_3501ac;
        case 0x3501b0u: goto label_3501b0;
        case 0x3501b4u: goto label_3501b4;
        case 0x3501b8u: goto label_3501b8;
        case 0x3501bcu: goto label_3501bc;
        case 0x3501c0u: goto label_3501c0;
        case 0x3501c4u: goto label_3501c4;
        case 0x3501c8u: goto label_3501c8;
        case 0x3501ccu: goto label_3501cc;
        case 0x3501d0u: goto label_3501d0;
        case 0x3501d4u: goto label_3501d4;
        case 0x3501d8u: goto label_3501d8;
        case 0x3501dcu: goto label_3501dc;
        case 0x3501e0u: goto label_3501e0;
        case 0x3501e4u: goto label_3501e4;
        case 0x3501e8u: goto label_3501e8;
        case 0x3501ecu: goto label_3501ec;
        case 0x3501f0u: goto label_3501f0;
        case 0x3501f4u: goto label_3501f4;
        case 0x3501f8u: goto label_3501f8;
        case 0x3501fcu: goto label_3501fc;
        case 0x350200u: goto label_350200;
        case 0x350204u: goto label_350204;
        case 0x350208u: goto label_350208;
        case 0x35020cu: goto label_35020c;
        default: break;
    }

    ctx->pc = 0x34fc20u;

label_34fc20:
    // 0x34fc20: 0x804cbd8  j           func_132F60
label_34fc24:
    if (ctx->pc == 0x34FC24u) {
        ctx->pc = 0x34FC24u;
            // 0x34fc24: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x34FC28u;
        goto label_34fc28;
    }
    ctx->pc = 0x34FC20u;
    ctx->pc = 0x34FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC20u;
            // 0x34fc24: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00132F60_0x132f60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34FC28u;
label_34fc28:
    // 0x34fc28: 0x0  nop
    ctx->pc = 0x34fc28u;
    // NOP
label_34fc2c:
    // 0x34fc2c: 0x0  nop
    ctx->pc = 0x34fc2cu;
    // NOP
label_34fc30:
    // 0x34fc30: 0x3e00008  jr          $ra
label_34fc34:
    if (ctx->pc == 0x34FC34u) {
        ctx->pc = 0x34FC34u;
            // 0x34fc34: 0x24022eea  addiu       $v0, $zero, 0x2EEA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12010));
        ctx->pc = 0x34FC38u;
        goto label_34fc38;
    }
    ctx->pc = 0x34FC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC30u;
            // 0x34fc34: 0x24022eea  addiu       $v0, $zero, 0x2EEA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FC38u;
label_34fc38:
    // 0x34fc38: 0x0  nop
    ctx->pc = 0x34fc38u;
    // NOP
label_34fc3c:
    // 0x34fc3c: 0x0  nop
    ctx->pc = 0x34fc3cu;
    // NOP
label_34fc40:
    // 0x34fc40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34fc44:
    // 0x34fc44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34fc48:
    // 0x34fc48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34fc4c:
    // 0x34fc4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34fc50:
    // 0x34fc50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x34fc50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34fc54:
    // 0x34fc54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34fc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34fc58:
    // 0x34fc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34fc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34fc5c:
    // 0x34fc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34fc60:
    // 0x34fc60: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x34fc60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_34fc64:
    // 0x34fc64: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_34fc68:
    if (ctx->pc == 0x34FC68u) {
        ctx->pc = 0x34FC68u;
            // 0x34fc68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FC6Cu;
        goto label_34fc6c;
    }
    ctx->pc = 0x34FC64u;
    {
        const bool branch_taken_0x34fc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC64u;
            // 0x34fc68: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc64) {
            ctx->pc = 0x34FCA8u;
            goto label_34fca8;
        }
    }
    ctx->pc = 0x34FC6Cu;
label_34fc6c:
    // 0x34fc6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34fc6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fc70:
    // 0x34fc70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34fc70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fc74:
    // 0x34fc74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34fc74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fc78:
    // 0x34fc78: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x34fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_34fc7c:
    // 0x34fc7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_34fc80:
    // 0x34fc80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34fc84:
    // 0x34fc84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34fc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34fc88:
    // 0x34fc88: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x34fc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_34fc8c:
    // 0x34fc8c: 0x320f809  jalr        $t9
label_34fc90:
    if (ctx->pc == 0x34FC90u) {
        ctx->pc = 0x34FC94u;
        goto label_34fc94;
    }
    ctx->pc = 0x34FC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34FC94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34FC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34FC94u; }
            if (ctx->pc != 0x34FC94u) { return; }
        }
        }
    }
    ctx->pc = 0x34FC94u;
label_34fc94:
    // 0x34fc94: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x34fc94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_34fc98:
    // 0x34fc98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34fc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_34fc9c:
    // 0x34fc9c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x34fc9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_34fca0:
    // 0x34fca0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_34fca4:
    if (ctx->pc == 0x34FCA4u) {
        ctx->pc = 0x34FCA4u;
            // 0x34fca4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x34FCA8u;
        goto label_34fca8;
    }
    ctx->pc = 0x34FCA0u;
    {
        const bool branch_taken_0x34fca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FCA0u;
            // 0x34fca4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fca0) {
            ctx->pc = 0x34FC78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34fc78;
        }
    }
    ctx->pc = 0x34FCA8u;
label_34fca8:
    // 0x34fca8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x34fca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34fcac:
    // 0x34fcac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34fcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34fcb0:
    // 0x34fcb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34fcb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34fcb4:
    // 0x34fcb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34fcb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34fcb8:
    // 0x34fcb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34fcb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34fcbc:
    // 0x34fcbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34fcbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34fcc0:
    // 0x34fcc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34fcc4:
    // 0x34fcc4: 0x3e00008  jr          $ra
label_34fcc8:
    if (ctx->pc == 0x34FCC8u) {
        ctx->pc = 0x34FCC8u;
            // 0x34fcc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x34FCCCu;
        goto label_34fccc;
    }
    ctx->pc = 0x34FCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FCC4u;
            // 0x34fcc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FCCCu;
label_34fccc:
    // 0x34fccc: 0x0  nop
    ctx->pc = 0x34fcccu;
    // NOP
label_34fcd0:
    // 0x34fcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34fcd4:
    // 0x34fcd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34fcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34fcd8:
    // 0x34fcd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34fcdc:
    // 0x34fcdc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x34fcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_34fce0:
    // 0x34fce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34fce4:
    // 0x34fce4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x34fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_34fce8:
    // 0x34fce8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34fce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34fcec:
    // 0x34fcec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x34fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_34fcf0:
    // 0x34fcf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34fcf4:
    // 0x34fcf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34fcf8:
    // 0x34fcf8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x34fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_34fcfc:
    // 0x34fcfc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x34fcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34fd00:
    // 0x34fd00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x34fd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_34fd04:
    // 0x34fd04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x34fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_34fd08:
    // 0x34fd08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x34fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_34fd0c:
    // 0x34fd0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x34fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_34fd10:
    // 0x34fd10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x34fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_34fd14:
    // 0x34fd14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_34fd18:
    // 0x34fd18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x34fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_34fd1c:
    // 0x34fd1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x34fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_34fd20:
    // 0x34fd20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x34fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_34fd24:
    // 0x34fd24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34fd28:
    // 0x34fd28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x34fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34fd2c:
    // 0x34fd2c: 0xc0a997c  jal         func_2A65F0
label_34fd30:
    if (ctx->pc == 0x34FD30u) {
        ctx->pc = 0x34FD30u;
            // 0x34fd30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x34FD34u;
        goto label_34fd34;
    }
    ctx->pc = 0x34FD2Cu;
    SET_GPR_U32(ctx, 31, 0x34FD34u);
    ctx->pc = 0x34FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD2Cu;
            // 0x34fd30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD34u; }
        if (ctx->pc != 0x34FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD34u; }
        if (ctx->pc != 0x34FD34u) { return; }
    }
    ctx->pc = 0x34FD34u;
label_34fd34:
    // 0x34fd34: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x34fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_34fd38:
    // 0x34fd38: 0xc0d879c  jal         func_361E70
label_34fd3c:
    if (ctx->pc == 0x34FD3Cu) {
        ctx->pc = 0x34FD3Cu;
            // 0x34fd3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FD40u;
        goto label_34fd40;
    }
    ctx->pc = 0x34FD38u;
    SET_GPR_U32(ctx, 31, 0x34FD40u);
    ctx->pc = 0x34FD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD38u;
            // 0x34fd3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD40u; }
        if (ctx->pc != 0x34FD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD40u; }
        if (ctx->pc != 0x34FD40u) { return; }
    }
    ctx->pc = 0x34FD40u;
label_34fd40:
    // 0x34fd40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34fd44:
    // 0x34fd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34fd48:
    // 0x34fd48: 0x3e00008  jr          $ra
label_34fd4c:
    if (ctx->pc == 0x34FD4Cu) {
        ctx->pc = 0x34FD4Cu;
            // 0x34fd4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34FD50u;
        goto label_34fd50;
    }
    ctx->pc = 0x34FD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD48u;
            // 0x34fd4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FD50u;
label_34fd50:
    // 0x34fd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34fd54:
    // 0x34fd54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34fd58:
    // 0x34fd58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34fd5c:
    // 0x34fd5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x34fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_34fd60:
    // 0x34fd60: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_34fd64:
    if (ctx->pc == 0x34FD64u) {
        ctx->pc = 0x34FD64u;
            // 0x34fd64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FD68u;
        goto label_34fd68;
    }
    ctx->pc = 0x34FD60u;
    {
        const bool branch_taken_0x34fd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD60u;
            // 0x34fd64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd60) {
            ctx->pc = 0x34FE80u;
            goto label_34fe80;
        }
    }
    ctx->pc = 0x34FD68u;
label_34fd68:
    // 0x34fd68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34fd6c:
    // 0x34fd6c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x34fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_34fd70:
    // 0x34fd70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x34fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_34fd74:
    // 0x34fd74: 0xc075128  jal         func_1D44A0
label_34fd78:
    if (ctx->pc == 0x34FD78u) {
        ctx->pc = 0x34FD78u;
            // 0x34fd78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x34FD7Cu;
        goto label_34fd7c;
    }
    ctx->pc = 0x34FD74u;
    SET_GPR_U32(ctx, 31, 0x34FD7Cu);
    ctx->pc = 0x34FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD74u;
            // 0x34fd78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD7Cu; }
        if (ctx->pc != 0x34FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD7Cu; }
        if (ctx->pc != 0x34FD7Cu) { return; }
    }
    ctx->pc = 0x34FD7Cu;
label_34fd7c:
    // 0x34fd7c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x34fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_34fd80:
    // 0x34fd80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fd84:
    // 0x34fd84: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x34fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_34fd88:
    // 0x34fd88: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x34fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_34fd8c:
    // 0x34fd8c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x34fd8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34fd90:
    // 0x34fd90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_34fd94:
    if (ctx->pc == 0x34FD94u) {
        ctx->pc = 0x34FD94u;
            // 0x34fd94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x34FD98u;
        goto label_34fd98;
    }
    ctx->pc = 0x34FD90u;
    {
        const bool branch_taken_0x34fd90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD90u;
            // 0x34fd94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd90) {
            ctx->pc = 0x34FDA0u;
            goto label_34fda0;
        }
    }
    ctx->pc = 0x34FD98u;
label_34fd98:
    // 0x34fd98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fd9c:
    // 0x34fd9c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x34fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_34fda0:
    // 0x34fda0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34fda4:
    // 0x34fda4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fda8:
    // 0x34fda8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x34fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_34fdac:
    // 0x34fdac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_34fdb0:
    // 0x34fdb0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x34fdb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34fdb4:
    // 0x34fdb4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_34fdb8:
    if (ctx->pc == 0x34FDB8u) {
        ctx->pc = 0x34FDB8u;
            // 0x34fdb8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x34FDBCu;
        goto label_34fdbc;
    }
    ctx->pc = 0x34FDB4u;
    {
        const bool branch_taken_0x34fdb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fdb4) {
            ctx->pc = 0x34FDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FDB4u;
            // 0x34fdb8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FDC8u;
            goto label_34fdc8;
        }
    }
    ctx->pc = 0x34FDBCu;
label_34fdbc:
    // 0x34fdbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fdc0:
    // 0x34fdc0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x34fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_34fdc4:
    // 0x34fdc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34fdc8:
    // 0x34fdc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fdcc:
    // 0x34fdcc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x34fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_34fdd0:
    // 0x34fdd0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x34fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_34fdd4:
    // 0x34fdd4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x34fdd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34fdd8:
    // 0x34fdd8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_34fddc:
    if (ctx->pc == 0x34FDDCu) {
        ctx->pc = 0x34FDDCu;
            // 0x34fddc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x34FDE0u;
        goto label_34fde0;
    }
    ctx->pc = 0x34FDD8u;
    {
        const bool branch_taken_0x34fdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fdd8) {
            ctx->pc = 0x34FDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FDD8u;
            // 0x34fddc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FDECu;
            goto label_34fdec;
        }
    }
    ctx->pc = 0x34FDE0u;
label_34fde0:
    // 0x34fde0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fde4:
    // 0x34fde4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x34fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_34fde8:
    // 0x34fde8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x34fde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34fdec:
    // 0x34fdec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x34fdecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_34fdf0:
    // 0x34fdf0: 0x320f809  jalr        $t9
label_34fdf4:
    if (ctx->pc == 0x34FDF4u) {
        ctx->pc = 0x34FDF4u;
            // 0x34fdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FDF8u;
        goto label_34fdf8;
    }
    ctx->pc = 0x34FDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34FDF8u);
        ctx->pc = 0x34FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FDF0u;
            // 0x34fdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34FDF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34FDF8u; }
            if (ctx->pc != 0x34FDF8u) { return; }
        }
        }
    }
    ctx->pc = 0x34FDF8u;
label_34fdf8:
    // 0x34fdf8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x34fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_34fdfc:
    // 0x34fdfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe00:
    // 0x34fe00: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x34fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_34fe04:
    // 0x34fe04: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x34fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_34fe08:
    // 0x34fe08: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x34fe08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_34fe0c:
    // 0x34fe0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x34fe0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34fe10:
    // 0x34fe10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_34fe14:
    if (ctx->pc == 0x34FE14u) {
        ctx->pc = 0x34FE14u;
            // 0x34fe14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x34FE18u;
        goto label_34fe18;
    }
    ctx->pc = 0x34FE10u;
    {
        const bool branch_taken_0x34fe10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe10) {
            ctx->pc = 0x34FE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FE10u;
            // 0x34fe14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FE24u;
            goto label_34fe24;
        }
    }
    ctx->pc = 0x34FE18u;
label_34fe18:
    // 0x34fe18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe1c:
    // 0x34fe1c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x34fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_34fe20:
    // 0x34fe20: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x34fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_34fe24:
    // 0x34fe24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe28:
    // 0x34fe28: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_34fe2c:
    // 0x34fe2c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x34fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_34fe30:
    // 0x34fe30: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x34fe30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_34fe34:
    // 0x34fe34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x34fe34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34fe38:
    // 0x34fe38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_34fe3c:
    if (ctx->pc == 0x34FE3Cu) {
        ctx->pc = 0x34FE40u;
        goto label_34fe40;
    }
    ctx->pc = 0x34FE38u;
    {
        const bool branch_taken_0x34fe38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe38) {
            ctx->pc = 0x34FE48u;
            goto label_34fe48;
        }
    }
    ctx->pc = 0x34FE40u;
label_34fe40:
    // 0x34fe40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe44:
    // 0x34fe44: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x34fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_34fe48:
    // 0x34fe48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe4c:
    // 0x34fe4c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x34fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_34fe50:
    // 0x34fe50: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x34fe50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34fe54:
    // 0x34fe54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_34fe58:
    if (ctx->pc == 0x34FE58u) {
        ctx->pc = 0x34FE5Cu;
        goto label_34fe5c;
    }
    ctx->pc = 0x34FE54u;
    {
        const bool branch_taken_0x34fe54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe54) {
            ctx->pc = 0x34FE64u;
            goto label_34fe64;
        }
    }
    ctx->pc = 0x34FE5Cu;
label_34fe5c:
    // 0x34fe5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe60:
    // 0x34fe60: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x34fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_34fe64:
    // 0x34fe64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe68:
    // 0x34fe68: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x34fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_34fe6c:
    // 0x34fe6c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x34fe6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34fe70:
    // 0x34fe70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_34fe74:
    if (ctx->pc == 0x34FE74u) {
        ctx->pc = 0x34FE74u;
            // 0x34fe74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x34FE78u;
        goto label_34fe78;
    }
    ctx->pc = 0x34FE70u;
    {
        const bool branch_taken_0x34fe70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe70) {
            ctx->pc = 0x34FE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FE70u;
            // 0x34fe74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FE84u;
            goto label_34fe84;
        }
    }
    ctx->pc = 0x34FE78u;
label_34fe78:
    // 0x34fe78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_34fe7c:
    // 0x34fe7c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x34fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_34fe80:
    // 0x34fe80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34fe84:
    // 0x34fe84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fe84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34fe88:
    // 0x34fe88: 0x3e00008  jr          $ra
label_34fe8c:
    if (ctx->pc == 0x34FE8Cu) {
        ctx->pc = 0x34FE8Cu;
            // 0x34fe8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x34FE90u;
        goto label_34fe90;
    }
    ctx->pc = 0x34FE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FE88u;
            // 0x34fe8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FE90u;
label_34fe90:
    // 0x34fe90: 0x80d3a00  j           func_34E800
label_34fe94:
    if (ctx->pc == 0x34FE94u) {
        ctx->pc = 0x34FE94u;
            // 0x34fe94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x34FE98u;
        goto label_34fe98;
    }
    ctx->pc = 0x34FE90u;
    ctx->pc = 0x34FE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FE90u;
            // 0x34fe94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E800u;
    {
        auto targetFn = runtime->lookupFunction(0x34E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34FE98u;
label_34fe98:
    // 0x34fe98: 0x0  nop
    ctx->pc = 0x34fe98u;
    // NOP
label_34fe9c:
    // 0x34fe9c: 0x0  nop
    ctx->pc = 0x34fe9cu;
    // NOP
label_34fea0:
    // 0x34fea0: 0x80d3858  j           func_34E160
label_34fea4:
    if (ctx->pc == 0x34FEA4u) {
        ctx->pc = 0x34FEA4u;
            // 0x34fea4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x34FEA8u;
        goto label_34fea8;
    }
    ctx->pc = 0x34FEA0u;
    ctx->pc = 0x34FEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FEA0u;
            // 0x34fea4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E160u;
    if (runtime->hasFunction(0x34E160u)) {
        auto targetFn = runtime->lookupFunction(0x34E160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0034E160_0x34e160(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34FEA8u;
label_34fea8:
    // 0x34fea8: 0x0  nop
    ctx->pc = 0x34fea8u;
    // NOP
label_34feac:
    // 0x34feac: 0x0  nop
    ctx->pc = 0x34feacu;
    // NOP
label_34feb0:
    // 0x34feb0: 0x80d38b0  j           func_34E2C0
label_34feb4:
    if (ctx->pc == 0x34FEB4u) {
        ctx->pc = 0x34FEB4u;
            // 0x34feb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x34FEB8u;
        goto label_34feb8;
    }
    ctx->pc = 0x34FEB0u;
    ctx->pc = 0x34FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FEB0u;
            // 0x34feb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E2C0u;
    {
        auto targetFn = runtime->lookupFunction(0x34E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34FEB8u;
label_34feb8:
    // 0x34feb8: 0x0  nop
    ctx->pc = 0x34feb8u;
    // NOP
label_34febc:
    // 0x34febc: 0x0  nop
    ctx->pc = 0x34febcu;
    // NOP
label_34fec0:
    // 0x34fec0: 0x80d3834  j           func_34E0D0
label_34fec4:
    if (ctx->pc == 0x34FEC4u) {
        ctx->pc = 0x34FEC4u;
            // 0x34fec4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x34FEC8u;
        goto label_34fec8;
    }
    ctx->pc = 0x34FEC0u;
    ctx->pc = 0x34FEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FEC0u;
            // 0x34fec4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E0D0u;
    {
        auto targetFn = runtime->lookupFunction(0x34E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34FEC8u;
label_34fec8:
    // 0x34fec8: 0x0  nop
    ctx->pc = 0x34fec8u;
    // NOP
label_34fecc:
    // 0x34fecc: 0x0  nop
    ctx->pc = 0x34feccu;
    // NOP
label_34fed0:
    // 0x34fed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34fed4:
    // 0x34fed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34fed8:
    // 0x34fed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34fedc:
    // 0x34fedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34fee0:
    // 0x34fee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34fee4:
    // 0x34fee4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_34fee8:
    if (ctx->pc == 0x34FEE8u) {
        ctx->pc = 0x34FEE8u;
            // 0x34fee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FEECu;
        goto label_34feec;
    }
    ctx->pc = 0x34FEE4u;
    {
        const bool branch_taken_0x34fee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FEE4u;
            // 0x34fee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fee4) {
            ctx->pc = 0x34FF40u;
            goto label_34ff40;
        }
    }
    ctx->pc = 0x34FEECu;
label_34feec:
    // 0x34feec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34feecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34fef0:
    // 0x34fef0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34fef4:
    // 0x34fef4: 0x24635c20  addiu       $v1, $v1, 0x5C20
    ctx->pc = 0x34fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23584));
label_34fef8:
    // 0x34fef8: 0x24425c58  addiu       $v0, $v0, 0x5C58
    ctx->pc = 0x34fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23640));
label_34fefc:
    // 0x34fefc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34ff00:
    // 0x34ff00: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_34ff04:
    if (ctx->pc == 0x34FF04u) {
        ctx->pc = 0x34FF04u;
            // 0x34ff04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x34FF08u;
        goto label_34ff08;
    }
    ctx->pc = 0x34FF00u;
    {
        const bool branch_taken_0x34ff00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF00u;
            // 0x34ff04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff00) {
            ctx->pc = 0x34FF28u;
            goto label_34ff28;
        }
    }
    ctx->pc = 0x34FF08u;
label_34ff08:
    // 0x34ff08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34ff0c:
    // 0x34ff0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34ff10:
    // 0x34ff10: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x34ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_34ff14:
    // 0x34ff14: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x34ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_34ff18:
    // 0x34ff18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34ff1c:
    // 0x34ff1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ff1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ff20:
    // 0x34ff20: 0xc0b31b0  jal         func_2CC6C0
label_34ff24:
    if (ctx->pc == 0x34FF24u) {
        ctx->pc = 0x34FF24u;
            // 0x34ff24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x34FF28u;
        goto label_34ff28;
    }
    ctx->pc = 0x34FF20u;
    SET_GPR_U32(ctx, 31, 0x34FF28u);
    ctx->pc = 0x34FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF20u;
            // 0x34ff24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC6C0u;
    if (runtime->hasFunction(0x2CC6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FF28u; }
        if (ctx->pc != 0x34FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC6C0_0x2cc6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FF28u; }
        if (ctx->pc != 0x34FF28u) { return; }
    }
    ctx->pc = 0x34FF28u;
label_34ff28:
    // 0x34ff28: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x34ff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_34ff2c:
    // 0x34ff2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34ff2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34ff30:
    // 0x34ff30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34ff34:
    if (ctx->pc == 0x34FF34u) {
        ctx->pc = 0x34FF34u;
            // 0x34ff34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FF38u;
        goto label_34ff38;
    }
    ctx->pc = 0x34FF30u;
    {
        const bool branch_taken_0x34ff30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34ff30) {
            ctx->pc = 0x34FF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF30u;
            // 0x34ff34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FF44u;
            goto label_34ff44;
        }
    }
    ctx->pc = 0x34FF38u;
label_34ff38:
    // 0x34ff38: 0xc0400a8  jal         func_1002A0
label_34ff3c:
    if (ctx->pc == 0x34FF3Cu) {
        ctx->pc = 0x34FF3Cu;
            // 0x34ff3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FF40u;
        goto label_34ff40;
    }
    ctx->pc = 0x34FF38u;
    SET_GPR_U32(ctx, 31, 0x34FF40u);
    ctx->pc = 0x34FF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF38u;
            // 0x34ff3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FF40u; }
        if (ctx->pc != 0x34FF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FF40u; }
        if (ctx->pc != 0x34FF40u) { return; }
    }
    ctx->pc = 0x34FF40u;
label_34ff40:
    // 0x34ff40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34ff40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ff44:
    // 0x34ff44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34ff48:
    // 0x34ff48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34ff48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34ff4c:
    // 0x34ff4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ff4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34ff50:
    // 0x34ff50: 0x3e00008  jr          $ra
label_34ff54:
    if (ctx->pc == 0x34FF54u) {
        ctx->pc = 0x34FF54u;
            // 0x34ff54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34FF58u;
        goto label_34ff58;
    }
    ctx->pc = 0x34FF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF50u;
            // 0x34ff54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FF58u;
label_34ff58:
    // 0x34ff58: 0x0  nop
    ctx->pc = 0x34ff58u;
    // NOP
label_34ff5c:
    // 0x34ff5c: 0x0  nop
    ctx->pc = 0x34ff5cu;
    // NOP
label_34ff60:
    // 0x34ff60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x34ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_34ff64:
    // 0x34ff64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34ff68:
    // 0x34ff68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x34ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_34ff6c:
    // 0x34ff6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_34ff70:
    // 0x34ff70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x34ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_34ff74:
    // 0x34ff74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_34ff78:
    // 0x34ff78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34ff7c:
    // 0x34ff7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34ff80:
    // 0x34ff80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34ff84:
    // 0x34ff84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34ff88:
    // 0x34ff88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34ff8c:
    // 0x34ff8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34ff90:
    // 0x34ff90: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x34ff90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_34ff94:
    // 0x34ff94: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_34ff98:
    if (ctx->pc == 0x34FF98u) {
        ctx->pc = 0x34FF98u;
            // 0x34ff98: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FF9Cu;
        goto label_34ff9c;
    }
    ctx->pc = 0x34FF94u;
    {
        const bool branch_taken_0x34ff94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF94u;
            // 0x34ff98: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff94) {
            ctx->pc = 0x34FFE4u;
            goto label_34ffe4;
        }
    }
    ctx->pc = 0x34FF9Cu;
label_34ff9c:
    // 0x34ff9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34ffa0:
    // 0x34ffa0: 0x50a3008e  beql        $a1, $v1, . + 4 + (0x8E << 2)
label_34ffa4:
    if (ctx->pc == 0x34FFA4u) {
        ctx->pc = 0x34FFA4u;
            // 0x34ffa4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x34FFA8u;
        goto label_34ffa8;
    }
    ctx->pc = 0x34FFA0u;
    {
        const bool branch_taken_0x34ffa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ffa0) {
            ctx->pc = 0x34FFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FFA0u;
            // 0x34ffa4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3501DCu;
            goto label_3501dc;
        }
    }
    ctx->pc = 0x34FFA8u;
label_34ffa8:
    // 0x34ffa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34ffac:
    // 0x34ffac: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_34ffb0:
    if (ctx->pc == 0x34FFB0u) {
        ctx->pc = 0x34FFB4u;
        goto label_34ffb4;
    }
    ctx->pc = 0x34FFACu;
    {
        const bool branch_taken_0x34ffac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ffac) {
            ctx->pc = 0x34FFBCu;
            goto label_34ffbc;
        }
    }
    ctx->pc = 0x34FFB4u;
label_34ffb4:
    // 0x34ffb4: 0x10000088  b           . + 4 + (0x88 << 2)
label_34ffb8:
    if (ctx->pc == 0x34FFB8u) {
        ctx->pc = 0x34FFBCu;
        goto label_34ffbc;
    }
    ctx->pc = 0x34FFB4u;
    {
        const bool branch_taken_0x34ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffb4) {
            ctx->pc = 0x3501D8u;
            goto label_3501d8;
        }
    }
    ctx->pc = 0x34FFBCu;
label_34ffbc:
    // 0x34ffbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ffc0:
    // 0x34ffc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34ffc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34ffc4:
    // 0x34ffc4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x34ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_34ffc8:
    // 0x34ffc8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x34ffc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_34ffcc:
    // 0x34ffcc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x34ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_34ffd0:
    // 0x34ffd0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_34ffd4:
    // 0x34ffd4: 0x320f809  jalr        $t9
label_34ffd8:
    if (ctx->pc == 0x34FFD8u) {
        ctx->pc = 0x34FFD8u;
            // 0x34ffd8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x34FFDCu;
        goto label_34ffdc;
    }
    ctx->pc = 0x34FFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34FFDCu);
        ctx->pc = 0x34FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FFD4u;
            // 0x34ffd8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34FFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34FFDCu; }
            if (ctx->pc != 0x34FFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x34FFDCu;
label_34ffdc:
    // 0x34ffdc: 0x1000007e  b           . + 4 + (0x7E << 2)
label_34ffe0:
    if (ctx->pc == 0x34FFE0u) {
        ctx->pc = 0x34FFE4u;
        goto label_34ffe4;
    }
    ctx->pc = 0x34FFDCu;
    {
        const bool branch_taken_0x34ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffdc) {
            ctx->pc = 0x3501D8u;
            goto label_3501d8;
        }
    }
    ctx->pc = 0x34FFE4u;
label_34ffe4:
    // 0x34ffe4: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x34ffe4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_34ffe8:
    // 0x34ffe8: 0x12e0007b  beqz        $s7, . + 4 + (0x7B << 2)
label_34ffec:
    if (ctx->pc == 0x34FFECu) {
        ctx->pc = 0x34FFF0u;
        goto label_34fff0;
    }
    ctx->pc = 0x34FFE8u;
    {
        const bool branch_taken_0x34ffe8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffe8) {
            ctx->pc = 0x3501D8u;
            goto label_3501d8;
        }
    }
    ctx->pc = 0x34FFF0u;
label_34fff0:
    // 0x34fff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34fff4:
    // 0x34fff4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x34fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_34fff8:
    // 0x34fff8: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x34fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_34fffc:
    // 0x34fffc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x34fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_350000:
    // 0x350000: 0x8c84d130  lw          $a0, -0x2ED0($a0)
    ctx->pc = 0x350000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_350004:
    // 0x350004: 0x26b10084  addiu       $s1, $s5, 0x84
    ctx->pc = 0x350004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_350008:
    // 0x350008: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x350008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_35000c:
    // 0x35000c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x35000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_350010:
    // 0x350010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350014:
    // 0x350014: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x350014u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_350018:
    // 0x350018: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x350018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_35001c:
    // 0x35001c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x35001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_350020:
    // 0x350020: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x350020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_350024:
    // 0x350024: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x350024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_350028:
    // 0x350028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x350028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35002c:
    // 0x35002c: 0x92a20090  lbu         $v0, 0x90($s5)
    ctx->pc = 0x35002cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_350030:
    // 0x350030: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x350030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_350034:
    // 0x350034: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_350038:
    if (ctx->pc == 0x350038u) {
        ctx->pc = 0x350038u;
            // 0x350038: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x35003Cu;
        goto label_35003c;
    }
    ctx->pc = 0x350034u;
    {
        const bool branch_taken_0x350034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350034u;
            // 0x350038: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350034) {
            ctx->pc = 0x350054u;
            goto label_350054;
        }
    }
    ctx->pc = 0x35003Cu;
label_35003c:
    // 0x35003c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350040:
    // 0x350040: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x350040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_350044:
    // 0x350044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x350044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_350048:
    // 0x350048: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x350048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35004c:
    // 0x35004c: 0x320f809  jalr        $t9
label_350050:
    if (ctx->pc == 0x350050u) {
        ctx->pc = 0x350054u;
        goto label_350054;
    }
    ctx->pc = 0x35004Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350054u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x350054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350054u; }
            if (ctx->pc != 0x350054u) { return; }
        }
        }
    }
    ctx->pc = 0x350054u;
label_350054:
    // 0x350054: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_350058:
    // 0x350058: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35005c:
    // 0x35005c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x35005cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_350060:
    // 0x350060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x350060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350064:
    // 0x350064: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x350064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_350068:
    // 0x350068: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x350068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35006c:
    // 0x35006c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x35006cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_350070:
    // 0x350070: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x350070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_350074:
    // 0x350074: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x350074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_350078:
    // 0x350078: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x350078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_35007c:
    // 0x35007c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x35007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_350080:
    // 0x350080: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x350080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_350084:
    // 0x350084: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x350084u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_350088:
    // 0x350088: 0xc0d410c  jal         func_350430
label_35008c:
    if (ctx->pc == 0x35008Cu) {
        ctx->pc = 0x35008Cu;
            // 0x35008c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350090u;
        goto label_350090;
    }
    ctx->pc = 0x350088u;
    SET_GPR_U32(ctx, 31, 0x350090u);
    ctx->pc = 0x35008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350088u;
            // 0x35008c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350090u; }
        if (ctx->pc != 0x350090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350090u; }
        if (ctx->pc != 0x350090u) { return; }
    }
    ctx->pc = 0x350090u;
label_350090:
    // 0x350090: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x350090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_350094:
    // 0x350094: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_350098:
    if (ctx->pc == 0x350098u) {
        ctx->pc = 0x35009Cu;
        goto label_35009c;
    }
    ctx->pc = 0x350094u;
    {
        const bool branch_taken_0x350094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350094) {
            ctx->pc = 0x350160u;
            goto label_350160;
        }
    }
    ctx->pc = 0x35009Cu;
label_35009c:
    // 0x35009c: 0xc0d1c14  jal         func_347050
label_3500a0:
    if (ctx->pc == 0x3500A0u) {
        ctx->pc = 0x3500A0u;
            // 0x3500a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3500A4u;
        goto label_3500a4;
    }
    ctx->pc = 0x35009Cu;
    SET_GPR_U32(ctx, 31, 0x3500A4u);
    ctx->pc = 0x3500A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35009Cu;
            // 0x3500a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500A4u; }
        if (ctx->pc != 0x3500A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500A4u; }
        if (ctx->pc != 0x3500A4u) { return; }
    }
    ctx->pc = 0x3500A4u;
label_3500a4:
    // 0x3500a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3500a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3500a8:
    // 0x3500a8: 0xc04f278  jal         func_13C9E0
label_3500ac:
    if (ctx->pc == 0x3500ACu) {
        ctx->pc = 0x3500ACu;
            // 0x3500ac: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3500B0u;
        goto label_3500b0;
    }
    ctx->pc = 0x3500A8u;
    SET_GPR_U32(ctx, 31, 0x3500B0u);
    ctx->pc = 0x3500ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500A8u;
            // 0x3500ac: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500B0u; }
        if (ctx->pc != 0x3500B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500B0u; }
        if (ctx->pc != 0x3500B0u) { return; }
    }
    ctx->pc = 0x3500B0u;
label_3500b0:
    // 0x3500b0: 0xc0d1c10  jal         func_347040
label_3500b4:
    if (ctx->pc == 0x3500B4u) {
        ctx->pc = 0x3500B4u;
            // 0x3500b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3500B8u;
        goto label_3500b8;
    }
    ctx->pc = 0x3500B0u;
    SET_GPR_U32(ctx, 31, 0x3500B8u);
    ctx->pc = 0x3500B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500B0u;
            // 0x3500b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500B8u; }
        if (ctx->pc != 0x3500B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500B8u; }
        if (ctx->pc != 0x3500B8u) { return; }
    }
    ctx->pc = 0x3500B8u;
label_3500b8:
    // 0x3500b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3500b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3500bc:
    // 0x3500bc: 0xc04ce80  jal         func_133A00
label_3500c0:
    if (ctx->pc == 0x3500C0u) {
        ctx->pc = 0x3500C0u;
            // 0x3500c0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3500C4u;
        goto label_3500c4;
    }
    ctx->pc = 0x3500BCu;
    SET_GPR_U32(ctx, 31, 0x3500C4u);
    ctx->pc = 0x3500C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500BCu;
            // 0x3500c0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500C4u; }
        if (ctx->pc != 0x3500C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500C4u; }
        if (ctx->pc != 0x3500C4u) { return; }
    }
    ctx->pc = 0x3500C4u;
label_3500c4:
    // 0x3500c4: 0xc0d4108  jal         func_350420
label_3500c8:
    if (ctx->pc == 0x3500C8u) {
        ctx->pc = 0x3500CCu;
        goto label_3500cc;
    }
    ctx->pc = 0x3500C4u;
    SET_GPR_U32(ctx, 31, 0x3500CCu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500CCu; }
        if (ctx->pc != 0x3500CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500CCu; }
        if (ctx->pc != 0x3500CCu) { return; }
    }
    ctx->pc = 0x3500CCu;
label_3500cc:
    // 0x3500cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3500ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3500d0:
    // 0x3500d0: 0xc0d4104  jal         func_350410
label_3500d4:
    if (ctx->pc == 0x3500D4u) {
        ctx->pc = 0x3500D4u;
            // 0x3500d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3500D8u;
        goto label_3500d8;
    }
    ctx->pc = 0x3500D0u;
    SET_GPR_U32(ctx, 31, 0x3500D8u);
    ctx->pc = 0x3500D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500D0u;
            // 0x3500d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500D8u; }
        if (ctx->pc != 0x3500D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500D8u; }
        if (ctx->pc != 0x3500D8u) { return; }
    }
    ctx->pc = 0x3500D8u;
label_3500d8:
    // 0x3500d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3500d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3500dc:
    // 0x3500dc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3500dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3500e0:
    // 0x3500e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3500e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3500e4:
    // 0x3500e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3500e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3500e8:
    // 0x3500e8: 0xc44c3fd8  lwc1        $f12, 0x3FD8($v0)
    ctx->pc = 0x3500e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3500ec:
    // 0x3500ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3500ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3500f0:
    // 0x3500f0: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x3500f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3500f4:
    // 0x3500f4: 0xc0d40ac  jal         func_3502B0
label_3500f8:
    if (ctx->pc == 0x3500F8u) {
        ctx->pc = 0x3500F8u;
            // 0x3500f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3500FCu;
        goto label_3500fc;
    }
    ctx->pc = 0x3500F4u;
    SET_GPR_U32(ctx, 31, 0x3500FCu);
    ctx->pc = 0x3500F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500F4u;
            // 0x3500f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500FCu; }
        if (ctx->pc != 0x3500FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500FCu; }
        if (ctx->pc != 0x3500FCu) { return; }
    }
    ctx->pc = 0x3500FCu;
label_3500fc:
    // 0x3500fc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3500fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_350100:
    // 0x350100: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_350104:
    if (ctx->pc == 0x350104u) {
        ctx->pc = 0x350104u;
            // 0x350104: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x350108u;
        goto label_350108;
    }
    ctx->pc = 0x350100u;
    {
        const bool branch_taken_0x350100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x350104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350100u;
            // 0x350104: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350100) {
            ctx->pc = 0x350160u;
            goto label_350160;
        }
    }
    ctx->pc = 0x350108u;
label_350108:
    // 0x350108: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x350108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35010c:
    // 0x35010c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x35010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_350110:
    // 0x350110: 0xc0d4084  jal         func_350210
label_350114:
    if (ctx->pc == 0x350114u) {
        ctx->pc = 0x350114u;
            // 0x350114: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x350118u;
        goto label_350118;
    }
    ctx->pc = 0x350110u;
    SET_GPR_U32(ctx, 31, 0x350118u);
    ctx->pc = 0x350114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350110u;
            // 0x350114: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350210u;
    if (runtime->hasFunction(0x350210u)) {
        auto targetFn = runtime->lookupFunction(0x350210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350118u; }
        if (ctx->pc != 0x350118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350210_0x350210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350118u; }
        if (ctx->pc != 0x350118u) { return; }
    }
    ctx->pc = 0x350118u;
label_350118:
    // 0x350118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x350118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35011c:
    // 0x35011c: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x35011cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_350120:
    // 0x350120: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x350120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_350124:
    // 0x350124: 0xc04e4a4  jal         func_139290
label_350128:
    if (ctx->pc == 0x350128u) {
        ctx->pc = 0x350128u;
            // 0x350128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35012Cu;
        goto label_35012c;
    }
    ctx->pc = 0x350124u;
    SET_GPR_U32(ctx, 31, 0x35012Cu);
    ctx->pc = 0x350128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350124u;
            // 0x350128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35012Cu; }
        if (ctx->pc != 0x35012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35012Cu; }
        if (ctx->pc != 0x35012Cu) { return; }
    }
    ctx->pc = 0x35012Cu;
label_35012c:
    // 0x35012c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x35012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_350130:
    // 0x350130: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x350130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_350134:
    // 0x350134: 0xc04cd60  jal         func_133580
label_350138:
    if (ctx->pc == 0x350138u) {
        ctx->pc = 0x350138u;
            // 0x350138: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x35013Cu;
        goto label_35013c;
    }
    ctx->pc = 0x350134u;
    SET_GPR_U32(ctx, 31, 0x35013Cu);
    ctx->pc = 0x350138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350134u;
            // 0x350138: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35013Cu; }
        if (ctx->pc != 0x35013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35013Cu; }
        if (ctx->pc != 0x35013Cu) { return; }
    }
    ctx->pc = 0x35013Cu;
label_35013c:
    // 0x35013c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x35013cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_350140:
    // 0x350140: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x350140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_350144:
    // 0x350144: 0x320f809  jalr        $t9
label_350148:
    if (ctx->pc == 0x350148u) {
        ctx->pc = 0x350148u;
            // 0x350148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35014Cu;
        goto label_35014c;
    }
    ctx->pc = 0x350144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35014Cu);
        ctx->pc = 0x350148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350144u;
            // 0x350148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35014Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35014Cu; }
            if (ctx->pc != 0x35014Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35014Cu;
label_35014c:
    // 0x35014c: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x35014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_350150:
    // 0x350150: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350154:
    // 0x350154: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x350154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_350158:
    // 0x350158: 0xc054fd4  jal         func_153F50
label_35015c:
    if (ctx->pc == 0x35015Cu) {
        ctx->pc = 0x35015Cu;
            // 0x35015c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350160u;
        goto label_350160;
    }
    ctx->pc = 0x350158u;
    SET_GPR_U32(ctx, 31, 0x350160u);
    ctx->pc = 0x35015Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350158u;
            // 0x35015c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350160u; }
        if (ctx->pc != 0x350160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350160u; }
        if (ctx->pc != 0x350160u) { return; }
    }
    ctx->pc = 0x350160u;
label_350160:
    // 0x350160: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x350160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_350164:
    // 0x350164: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x350164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_350168:
    // 0x350168: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_35016c:
    if (ctx->pc == 0x35016Cu) {
        ctx->pc = 0x35016Cu;
            // 0x35016c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x350170u;
        goto label_350170;
    }
    ctx->pc = 0x350168u;
    {
        const bool branch_taken_0x350168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350168u;
            // 0x35016c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350168) {
            ctx->pc = 0x35006Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35006c;
        }
    }
    ctx->pc = 0x350170u;
label_350170:
    // 0x350170: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_350174:
    // 0x350174: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x350174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_350178:
    // 0x350178: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
label_35017c:
    if (ctx->pc == 0x35017Cu) {
        ctx->pc = 0x35017Cu;
            // 0x35017c: 0x92a30090  lbu         $v1, 0x90($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
        ctx->pc = 0x350180u;
        goto label_350180;
    }
    ctx->pc = 0x350178u;
    {
        const bool branch_taken_0x350178 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x350178) {
            ctx->pc = 0x35017Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350178u;
            // 0x35017c: 0x92a30090  lbu         $v1, 0x90($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3501B8u;
            goto label_3501b8;
        }
    }
    ctx->pc = 0x350180u;
label_350180:
    // 0x350180: 0xc04e738  jal         func_139CE0
label_350184:
    if (ctx->pc == 0x350184u) {
        ctx->pc = 0x350184u;
            // 0x350184: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x350188u;
        goto label_350188;
    }
    ctx->pc = 0x350180u;
    SET_GPR_U32(ctx, 31, 0x350188u);
    ctx->pc = 0x350184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350180u;
            // 0x350184: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350188u; }
        if (ctx->pc != 0x350188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350188u; }
        if (ctx->pc != 0x350188u) { return; }
    }
    ctx->pc = 0x350188u;
label_350188:
    // 0x350188: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35018c:
    // 0x35018c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x35018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350190:
    // 0x350190: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x350190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_350194:
    // 0x350194: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x350194u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_350198:
    // 0x350198: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x350198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_35019c:
    // 0x35019c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3501a0:
    // 0x3501a0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3501a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3501a4:
    // 0x3501a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3501a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3501a8:
    // 0x3501a8: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x3501a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_3501ac:
    // 0x3501ac: 0xc055ea8  jal         func_157AA0
label_3501b0:
    if (ctx->pc == 0x3501B0u) {
        ctx->pc = 0x3501B0u;
            // 0x3501b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3501B4u;
        goto label_3501b4;
    }
    ctx->pc = 0x3501ACu;
    SET_GPR_U32(ctx, 31, 0x3501B4u);
    ctx->pc = 0x3501B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3501ACu;
            // 0x3501b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501B4u; }
        if (ctx->pc != 0x3501B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501B4u; }
        if (ctx->pc != 0x3501B4u) { return; }
    }
    ctx->pc = 0x3501B4u;
label_3501b4:
    // 0x3501b4: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x3501b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_3501b8:
    // 0x3501b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3501bc:
    if (ctx->pc == 0x3501BCu) {
        ctx->pc = 0x3501C0u;
        goto label_3501c0;
    }
    ctx->pc = 0x3501B8u;
    {
        const bool branch_taken_0x3501b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3501b8) {
            ctx->pc = 0x3501D8u;
            goto label_3501d8;
        }
    }
    ctx->pc = 0x3501C0u;
label_3501c0:
    // 0x3501c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3501c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3501c4:
    // 0x3501c4: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3501c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3501c8:
    // 0x3501c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3501c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3501cc:
    // 0x3501cc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3501d0:
    // 0x3501d0: 0x320f809  jalr        $t9
label_3501d4:
    if (ctx->pc == 0x3501D4u) {
        ctx->pc = 0x3501D8u;
        goto label_3501d8;
    }
    ctx->pc = 0x3501D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3501D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3501D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3501D8u; }
            if (ctx->pc != 0x3501D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3501D8u;
label_3501d8:
    // 0x3501d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3501d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3501dc:
    // 0x3501dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3501dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3501e0:
    // 0x3501e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3501e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3501e4:
    // 0x3501e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3501e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3501e8:
    // 0x3501e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3501e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3501ec:
    // 0x3501ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3501ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3501f0:
    // 0x3501f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3501f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3501f4:
    // 0x3501f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3501f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3501f8:
    // 0x3501f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3501f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3501fc:
    // 0x3501fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3501fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_350200:
    // 0x350200: 0x3e00008  jr          $ra
label_350204:
    if (ctx->pc == 0x350204u) {
        ctx->pc = 0x350204u;
            // 0x350204: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x350208u;
        goto label_350208;
    }
    ctx->pc = 0x350200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350200u;
            // 0x350204: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350208u;
label_350208:
    // 0x350208: 0x0  nop
    ctx->pc = 0x350208u;
    // NOP
label_35020c:
    // 0x35020c: 0x0  nop
    ctx->pc = 0x35020cu;
    // NOP
}
