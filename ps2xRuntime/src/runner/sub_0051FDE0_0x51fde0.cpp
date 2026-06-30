#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051FDE0
// Address: 0x51fde0 - 0x520240
void sub_0051FDE0_0x51fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051FDE0_0x51fde0");
#endif

    switch (ctx->pc) {
        case 0x51fde0u: goto label_51fde0;
        case 0x51fde4u: goto label_51fde4;
        case 0x51fde8u: goto label_51fde8;
        case 0x51fdecu: goto label_51fdec;
        case 0x51fdf0u: goto label_51fdf0;
        case 0x51fdf4u: goto label_51fdf4;
        case 0x51fdf8u: goto label_51fdf8;
        case 0x51fdfcu: goto label_51fdfc;
        case 0x51fe00u: goto label_51fe00;
        case 0x51fe04u: goto label_51fe04;
        case 0x51fe08u: goto label_51fe08;
        case 0x51fe0cu: goto label_51fe0c;
        case 0x51fe10u: goto label_51fe10;
        case 0x51fe14u: goto label_51fe14;
        case 0x51fe18u: goto label_51fe18;
        case 0x51fe1cu: goto label_51fe1c;
        case 0x51fe20u: goto label_51fe20;
        case 0x51fe24u: goto label_51fe24;
        case 0x51fe28u: goto label_51fe28;
        case 0x51fe2cu: goto label_51fe2c;
        case 0x51fe30u: goto label_51fe30;
        case 0x51fe34u: goto label_51fe34;
        case 0x51fe38u: goto label_51fe38;
        case 0x51fe3cu: goto label_51fe3c;
        case 0x51fe40u: goto label_51fe40;
        case 0x51fe44u: goto label_51fe44;
        case 0x51fe48u: goto label_51fe48;
        case 0x51fe4cu: goto label_51fe4c;
        case 0x51fe50u: goto label_51fe50;
        case 0x51fe54u: goto label_51fe54;
        case 0x51fe58u: goto label_51fe58;
        case 0x51fe5cu: goto label_51fe5c;
        case 0x51fe60u: goto label_51fe60;
        case 0x51fe64u: goto label_51fe64;
        case 0x51fe68u: goto label_51fe68;
        case 0x51fe6cu: goto label_51fe6c;
        case 0x51fe70u: goto label_51fe70;
        case 0x51fe74u: goto label_51fe74;
        case 0x51fe78u: goto label_51fe78;
        case 0x51fe7cu: goto label_51fe7c;
        case 0x51fe80u: goto label_51fe80;
        case 0x51fe84u: goto label_51fe84;
        case 0x51fe88u: goto label_51fe88;
        case 0x51fe8cu: goto label_51fe8c;
        case 0x51fe90u: goto label_51fe90;
        case 0x51fe94u: goto label_51fe94;
        case 0x51fe98u: goto label_51fe98;
        case 0x51fe9cu: goto label_51fe9c;
        case 0x51fea0u: goto label_51fea0;
        case 0x51fea4u: goto label_51fea4;
        case 0x51fea8u: goto label_51fea8;
        case 0x51feacu: goto label_51feac;
        case 0x51feb0u: goto label_51feb0;
        case 0x51feb4u: goto label_51feb4;
        case 0x51feb8u: goto label_51feb8;
        case 0x51febcu: goto label_51febc;
        case 0x51fec0u: goto label_51fec0;
        case 0x51fec4u: goto label_51fec4;
        case 0x51fec8u: goto label_51fec8;
        case 0x51feccu: goto label_51fecc;
        case 0x51fed0u: goto label_51fed0;
        case 0x51fed4u: goto label_51fed4;
        case 0x51fed8u: goto label_51fed8;
        case 0x51fedcu: goto label_51fedc;
        case 0x51fee0u: goto label_51fee0;
        case 0x51fee4u: goto label_51fee4;
        case 0x51fee8u: goto label_51fee8;
        case 0x51feecu: goto label_51feec;
        case 0x51fef0u: goto label_51fef0;
        case 0x51fef4u: goto label_51fef4;
        case 0x51fef8u: goto label_51fef8;
        case 0x51fefcu: goto label_51fefc;
        case 0x51ff00u: goto label_51ff00;
        case 0x51ff04u: goto label_51ff04;
        case 0x51ff08u: goto label_51ff08;
        case 0x51ff0cu: goto label_51ff0c;
        case 0x51ff10u: goto label_51ff10;
        case 0x51ff14u: goto label_51ff14;
        case 0x51ff18u: goto label_51ff18;
        case 0x51ff1cu: goto label_51ff1c;
        case 0x51ff20u: goto label_51ff20;
        case 0x51ff24u: goto label_51ff24;
        case 0x51ff28u: goto label_51ff28;
        case 0x51ff2cu: goto label_51ff2c;
        case 0x51ff30u: goto label_51ff30;
        case 0x51ff34u: goto label_51ff34;
        case 0x51ff38u: goto label_51ff38;
        case 0x51ff3cu: goto label_51ff3c;
        case 0x51ff40u: goto label_51ff40;
        case 0x51ff44u: goto label_51ff44;
        case 0x51ff48u: goto label_51ff48;
        case 0x51ff4cu: goto label_51ff4c;
        case 0x51ff50u: goto label_51ff50;
        case 0x51ff54u: goto label_51ff54;
        case 0x51ff58u: goto label_51ff58;
        case 0x51ff5cu: goto label_51ff5c;
        case 0x51ff60u: goto label_51ff60;
        case 0x51ff64u: goto label_51ff64;
        case 0x51ff68u: goto label_51ff68;
        case 0x51ff6cu: goto label_51ff6c;
        case 0x51ff70u: goto label_51ff70;
        case 0x51ff74u: goto label_51ff74;
        case 0x51ff78u: goto label_51ff78;
        case 0x51ff7cu: goto label_51ff7c;
        case 0x51ff80u: goto label_51ff80;
        case 0x51ff84u: goto label_51ff84;
        case 0x51ff88u: goto label_51ff88;
        case 0x51ff8cu: goto label_51ff8c;
        case 0x51ff90u: goto label_51ff90;
        case 0x51ff94u: goto label_51ff94;
        case 0x51ff98u: goto label_51ff98;
        case 0x51ff9cu: goto label_51ff9c;
        case 0x51ffa0u: goto label_51ffa0;
        case 0x51ffa4u: goto label_51ffa4;
        case 0x51ffa8u: goto label_51ffa8;
        case 0x51ffacu: goto label_51ffac;
        case 0x51ffb0u: goto label_51ffb0;
        case 0x51ffb4u: goto label_51ffb4;
        case 0x51ffb8u: goto label_51ffb8;
        case 0x51ffbcu: goto label_51ffbc;
        case 0x51ffc0u: goto label_51ffc0;
        case 0x51ffc4u: goto label_51ffc4;
        case 0x51ffc8u: goto label_51ffc8;
        case 0x51ffccu: goto label_51ffcc;
        case 0x51ffd0u: goto label_51ffd0;
        case 0x51ffd4u: goto label_51ffd4;
        case 0x51ffd8u: goto label_51ffd8;
        case 0x51ffdcu: goto label_51ffdc;
        case 0x51ffe0u: goto label_51ffe0;
        case 0x51ffe4u: goto label_51ffe4;
        case 0x51ffe8u: goto label_51ffe8;
        case 0x51ffecu: goto label_51ffec;
        case 0x51fff0u: goto label_51fff0;
        case 0x51fff4u: goto label_51fff4;
        case 0x51fff8u: goto label_51fff8;
        case 0x51fffcu: goto label_51fffc;
        case 0x520000u: goto label_520000;
        case 0x520004u: goto label_520004;
        case 0x520008u: goto label_520008;
        case 0x52000cu: goto label_52000c;
        case 0x520010u: goto label_520010;
        case 0x520014u: goto label_520014;
        case 0x520018u: goto label_520018;
        case 0x52001cu: goto label_52001c;
        case 0x520020u: goto label_520020;
        case 0x520024u: goto label_520024;
        case 0x520028u: goto label_520028;
        case 0x52002cu: goto label_52002c;
        case 0x520030u: goto label_520030;
        case 0x520034u: goto label_520034;
        case 0x520038u: goto label_520038;
        case 0x52003cu: goto label_52003c;
        case 0x520040u: goto label_520040;
        case 0x520044u: goto label_520044;
        case 0x520048u: goto label_520048;
        case 0x52004cu: goto label_52004c;
        case 0x520050u: goto label_520050;
        case 0x520054u: goto label_520054;
        case 0x520058u: goto label_520058;
        case 0x52005cu: goto label_52005c;
        case 0x520060u: goto label_520060;
        case 0x520064u: goto label_520064;
        case 0x520068u: goto label_520068;
        case 0x52006cu: goto label_52006c;
        case 0x520070u: goto label_520070;
        case 0x520074u: goto label_520074;
        case 0x520078u: goto label_520078;
        case 0x52007cu: goto label_52007c;
        case 0x520080u: goto label_520080;
        case 0x520084u: goto label_520084;
        case 0x520088u: goto label_520088;
        case 0x52008cu: goto label_52008c;
        case 0x520090u: goto label_520090;
        case 0x520094u: goto label_520094;
        case 0x520098u: goto label_520098;
        case 0x52009cu: goto label_52009c;
        case 0x5200a0u: goto label_5200a0;
        case 0x5200a4u: goto label_5200a4;
        case 0x5200a8u: goto label_5200a8;
        case 0x5200acu: goto label_5200ac;
        case 0x5200b0u: goto label_5200b0;
        case 0x5200b4u: goto label_5200b4;
        case 0x5200b8u: goto label_5200b8;
        case 0x5200bcu: goto label_5200bc;
        case 0x5200c0u: goto label_5200c0;
        case 0x5200c4u: goto label_5200c4;
        case 0x5200c8u: goto label_5200c8;
        case 0x5200ccu: goto label_5200cc;
        case 0x5200d0u: goto label_5200d0;
        case 0x5200d4u: goto label_5200d4;
        case 0x5200d8u: goto label_5200d8;
        case 0x5200dcu: goto label_5200dc;
        case 0x5200e0u: goto label_5200e0;
        case 0x5200e4u: goto label_5200e4;
        case 0x5200e8u: goto label_5200e8;
        case 0x5200ecu: goto label_5200ec;
        case 0x5200f0u: goto label_5200f0;
        case 0x5200f4u: goto label_5200f4;
        case 0x5200f8u: goto label_5200f8;
        case 0x5200fcu: goto label_5200fc;
        case 0x520100u: goto label_520100;
        case 0x520104u: goto label_520104;
        case 0x520108u: goto label_520108;
        case 0x52010cu: goto label_52010c;
        case 0x520110u: goto label_520110;
        case 0x520114u: goto label_520114;
        case 0x520118u: goto label_520118;
        case 0x52011cu: goto label_52011c;
        case 0x520120u: goto label_520120;
        case 0x520124u: goto label_520124;
        case 0x520128u: goto label_520128;
        case 0x52012cu: goto label_52012c;
        case 0x520130u: goto label_520130;
        case 0x520134u: goto label_520134;
        case 0x520138u: goto label_520138;
        case 0x52013cu: goto label_52013c;
        case 0x520140u: goto label_520140;
        case 0x520144u: goto label_520144;
        case 0x520148u: goto label_520148;
        case 0x52014cu: goto label_52014c;
        case 0x520150u: goto label_520150;
        case 0x520154u: goto label_520154;
        case 0x520158u: goto label_520158;
        case 0x52015cu: goto label_52015c;
        case 0x520160u: goto label_520160;
        case 0x520164u: goto label_520164;
        case 0x520168u: goto label_520168;
        case 0x52016cu: goto label_52016c;
        case 0x520170u: goto label_520170;
        case 0x520174u: goto label_520174;
        case 0x520178u: goto label_520178;
        case 0x52017cu: goto label_52017c;
        case 0x520180u: goto label_520180;
        case 0x520184u: goto label_520184;
        case 0x520188u: goto label_520188;
        case 0x52018cu: goto label_52018c;
        case 0x520190u: goto label_520190;
        case 0x520194u: goto label_520194;
        case 0x520198u: goto label_520198;
        case 0x52019cu: goto label_52019c;
        case 0x5201a0u: goto label_5201a0;
        case 0x5201a4u: goto label_5201a4;
        case 0x5201a8u: goto label_5201a8;
        case 0x5201acu: goto label_5201ac;
        case 0x5201b0u: goto label_5201b0;
        case 0x5201b4u: goto label_5201b4;
        case 0x5201b8u: goto label_5201b8;
        case 0x5201bcu: goto label_5201bc;
        case 0x5201c0u: goto label_5201c0;
        case 0x5201c4u: goto label_5201c4;
        case 0x5201c8u: goto label_5201c8;
        case 0x5201ccu: goto label_5201cc;
        case 0x5201d0u: goto label_5201d0;
        case 0x5201d4u: goto label_5201d4;
        case 0x5201d8u: goto label_5201d8;
        case 0x5201dcu: goto label_5201dc;
        case 0x5201e0u: goto label_5201e0;
        case 0x5201e4u: goto label_5201e4;
        case 0x5201e8u: goto label_5201e8;
        case 0x5201ecu: goto label_5201ec;
        case 0x5201f0u: goto label_5201f0;
        case 0x5201f4u: goto label_5201f4;
        case 0x5201f8u: goto label_5201f8;
        case 0x5201fcu: goto label_5201fc;
        case 0x520200u: goto label_520200;
        case 0x520204u: goto label_520204;
        case 0x520208u: goto label_520208;
        case 0x52020cu: goto label_52020c;
        case 0x520210u: goto label_520210;
        case 0x520214u: goto label_520214;
        case 0x520218u: goto label_520218;
        case 0x52021cu: goto label_52021c;
        case 0x520220u: goto label_520220;
        case 0x520224u: goto label_520224;
        case 0x520228u: goto label_520228;
        case 0x52022cu: goto label_52022c;
        case 0x520230u: goto label_520230;
        case 0x520234u: goto label_520234;
        case 0x520238u: goto label_520238;
        case 0x52023cu: goto label_52023c;
        default: break;
    }

    ctx->pc = 0x51fde0u;

label_51fde0:
    // 0x51fde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51fde4:
    // 0x51fde4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_51fde8:
    // 0x51fde8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51fdec:
    // 0x51fdec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51fdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51fdf0:
    // 0x51fdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51fdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51fdf4:
    // 0x51fdf4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_51fdf8:
    if (ctx->pc == 0x51FDF8u) {
        ctx->pc = 0x51FDF8u;
            // 0x51fdf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FDFCu;
        goto label_51fdfc;
    }
    ctx->pc = 0x51FDF4u;
    {
        const bool branch_taken_0x51fdf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FDF4u;
            // 0x51fdf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51fdf4) {
            ctx->pc = 0x51FF28u;
            goto label_51ff28;
        }
    }
    ctx->pc = 0x51FDFCu;
label_51fdfc:
    // 0x51fdfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51fe00:
    // 0x51fe00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51fe04:
    // 0x51fe04: 0x24635c70  addiu       $v1, $v1, 0x5C70
    ctx->pc = 0x51fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
label_51fe08:
    // 0x51fe08: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x51fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_51fe0c:
    // 0x51fe0c: 0x24425ca8  addiu       $v0, $v0, 0x5CA8
    ctx->pc = 0x51fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23720));
label_51fe10:
    // 0x51fe10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x51fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_51fe14:
    // 0x51fe14: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x51fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_51fe18:
    // 0x51fe18: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x51fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_51fe1c:
    // 0x51fe1c: 0xc0407c0  jal         func_101F00
label_51fe20:
    if (ctx->pc == 0x51FE20u) {
        ctx->pc = 0x51FE20u;
            // 0x51fe20: 0x24a5ff40  addiu       $a1, $a1, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
        ctx->pc = 0x51FE24u;
        goto label_51fe24;
    }
    ctx->pc = 0x51FE1Cu;
    SET_GPR_U32(ctx, 31, 0x51FE24u);
    ctx->pc = 0x51FE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FE1Cu;
            // 0x51fe20: 0x24a5ff40  addiu       $a1, $a1, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE24u; }
        if (ctx->pc != 0x51FE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE24u; }
        if (ctx->pc != 0x51FE24u) { return; }
    }
    ctx->pc = 0x51FE24u;
label_51fe24:
    // 0x51fe24: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x51fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_51fe28:
    // 0x51fe28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_51fe2c:
    if (ctx->pc == 0x51FE2Cu) {
        ctx->pc = 0x51FE2Cu;
            // 0x51fe2c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x51FE30u;
        goto label_51fe30;
    }
    ctx->pc = 0x51FE28u;
    {
        const bool branch_taken_0x51fe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe28) {
            ctx->pc = 0x51FE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FE28u;
            // 0x51fe2c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FE3Cu;
            goto label_51fe3c;
        }
    }
    ctx->pc = 0x51FE30u;
label_51fe30:
    // 0x51fe30: 0xc07507c  jal         func_1D41F0
label_51fe34:
    if (ctx->pc == 0x51FE34u) {
        ctx->pc = 0x51FE34u;
            // 0x51fe34: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x51FE38u;
        goto label_51fe38;
    }
    ctx->pc = 0x51FE30u;
    SET_GPR_U32(ctx, 31, 0x51FE38u);
    ctx->pc = 0x51FE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FE30u;
            // 0x51fe34: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE38u; }
        if (ctx->pc != 0x51FE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE38u; }
        if (ctx->pc != 0x51FE38u) { return; }
    }
    ctx->pc = 0x51FE38u;
label_51fe38:
    // 0x51fe38: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x51fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_51fe3c:
    // 0x51fe3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_51fe40:
    if (ctx->pc == 0x51FE40u) {
        ctx->pc = 0x51FE40u;
            // 0x51fe40: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x51FE44u;
        goto label_51fe44;
    }
    ctx->pc = 0x51FE3Cu;
    {
        const bool branch_taken_0x51fe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe3c) {
            ctx->pc = 0x51FE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FE3Cu;
            // 0x51fe40: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FE6Cu;
            goto label_51fe6c;
        }
    }
    ctx->pc = 0x51FE44u;
label_51fe44:
    // 0x51fe44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_51fe48:
    if (ctx->pc == 0x51FE48u) {
        ctx->pc = 0x51FE4Cu;
        goto label_51fe4c;
    }
    ctx->pc = 0x51FE44u;
    {
        const bool branch_taken_0x51fe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe44) {
            ctx->pc = 0x51FE68u;
            goto label_51fe68;
        }
    }
    ctx->pc = 0x51FE4Cu;
label_51fe4c:
    // 0x51fe4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_51fe50:
    if (ctx->pc == 0x51FE50u) {
        ctx->pc = 0x51FE54u;
        goto label_51fe54;
    }
    ctx->pc = 0x51FE4Cu;
    {
        const bool branch_taken_0x51fe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe4c) {
            ctx->pc = 0x51FE68u;
            goto label_51fe68;
        }
    }
    ctx->pc = 0x51FE54u;
label_51fe54:
    // 0x51fe54: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x51fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_51fe58:
    // 0x51fe58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_51fe5c:
    if (ctx->pc == 0x51FE5Cu) {
        ctx->pc = 0x51FE60u;
        goto label_51fe60;
    }
    ctx->pc = 0x51FE58u;
    {
        const bool branch_taken_0x51fe58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe58) {
            ctx->pc = 0x51FE68u;
            goto label_51fe68;
        }
    }
    ctx->pc = 0x51FE60u;
label_51fe60:
    // 0x51fe60: 0xc0400a8  jal         func_1002A0
label_51fe64:
    if (ctx->pc == 0x51FE64u) {
        ctx->pc = 0x51FE68u;
        goto label_51fe68;
    }
    ctx->pc = 0x51FE60u;
    SET_GPR_U32(ctx, 31, 0x51FE68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE68u; }
        if (ctx->pc != 0x51FE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE68u; }
        if (ctx->pc != 0x51FE68u) { return; }
    }
    ctx->pc = 0x51FE68u;
label_51fe68:
    // 0x51fe68: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x51fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_51fe6c:
    // 0x51fe6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_51fe70:
    if (ctx->pc == 0x51FE70u) {
        ctx->pc = 0x51FE70u;
            // 0x51fe70: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x51FE74u;
        goto label_51fe74;
    }
    ctx->pc = 0x51FE6Cu;
    {
        const bool branch_taken_0x51fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe6c) {
            ctx->pc = 0x51FE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FE6Cu;
            // 0x51fe70: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FE9Cu;
            goto label_51fe9c;
        }
    }
    ctx->pc = 0x51FE74u;
label_51fe74:
    // 0x51fe74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_51fe78:
    if (ctx->pc == 0x51FE78u) {
        ctx->pc = 0x51FE7Cu;
        goto label_51fe7c;
    }
    ctx->pc = 0x51FE74u;
    {
        const bool branch_taken_0x51fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe74) {
            ctx->pc = 0x51FE98u;
            goto label_51fe98;
        }
    }
    ctx->pc = 0x51FE7Cu;
label_51fe7c:
    // 0x51fe7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_51fe80:
    if (ctx->pc == 0x51FE80u) {
        ctx->pc = 0x51FE84u;
        goto label_51fe84;
    }
    ctx->pc = 0x51FE7Cu;
    {
        const bool branch_taken_0x51fe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe7c) {
            ctx->pc = 0x51FE98u;
            goto label_51fe98;
        }
    }
    ctx->pc = 0x51FE84u;
label_51fe84:
    // 0x51fe84: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x51fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_51fe88:
    // 0x51fe88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_51fe8c:
    if (ctx->pc == 0x51FE8Cu) {
        ctx->pc = 0x51FE90u;
        goto label_51fe90;
    }
    ctx->pc = 0x51FE88u;
    {
        const bool branch_taken_0x51fe88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe88) {
            ctx->pc = 0x51FE98u;
            goto label_51fe98;
        }
    }
    ctx->pc = 0x51FE90u;
label_51fe90:
    // 0x51fe90: 0xc0400a8  jal         func_1002A0
label_51fe94:
    if (ctx->pc == 0x51FE94u) {
        ctx->pc = 0x51FE98u;
        goto label_51fe98;
    }
    ctx->pc = 0x51FE90u;
    SET_GPR_U32(ctx, 31, 0x51FE98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE98u; }
        if (ctx->pc != 0x51FE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FE98u; }
        if (ctx->pc != 0x51FE98u) { return; }
    }
    ctx->pc = 0x51FE98u;
label_51fe98:
    // 0x51fe98: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x51fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_51fe9c:
    // 0x51fe9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_51fea0:
    if (ctx->pc == 0x51FEA0u) {
        ctx->pc = 0x51FEA4u;
        goto label_51fea4;
    }
    ctx->pc = 0x51FE9Cu;
    {
        const bool branch_taken_0x51fe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fe9c) {
            ctx->pc = 0x51FEB8u;
            goto label_51feb8;
        }
    }
    ctx->pc = 0x51FEA4u;
label_51fea4:
    // 0x51fea4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51fea8:
    // 0x51fea8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x51fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_51feac:
    // 0x51feac: 0x24635c58  addiu       $v1, $v1, 0x5C58
    ctx->pc = 0x51feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23640));
label_51feb0:
    // 0x51feb0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x51feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_51feb4:
    // 0x51feb4: 0xac40ab40  sw          $zero, -0x54C0($v0)
    ctx->pc = 0x51feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945600), GPR_U32(ctx, 0));
label_51feb8:
    // 0x51feb8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_51febc:
    if (ctx->pc == 0x51FEBCu) {
        ctx->pc = 0x51FEBCu;
            // 0x51febc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x51FEC0u;
        goto label_51fec0;
    }
    ctx->pc = 0x51FEB8u;
    {
        const bool branch_taken_0x51feb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51feb8) {
            ctx->pc = 0x51FEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FEB8u;
            // 0x51febc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FF14u;
            goto label_51ff14;
        }
    }
    ctx->pc = 0x51FEC0u;
label_51fec0:
    // 0x51fec0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_51fec4:
    // 0x51fec4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x51fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_51fec8:
    // 0x51fec8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x51fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_51fecc:
    // 0x51fecc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x51feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_51fed0:
    // 0x51fed0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_51fed4:
    if (ctx->pc == 0x51FED4u) {
        ctx->pc = 0x51FED4u;
            // 0x51fed4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x51FED8u;
        goto label_51fed8;
    }
    ctx->pc = 0x51FED0u;
    {
        const bool branch_taken_0x51fed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fed0) {
            ctx->pc = 0x51FED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FED0u;
            // 0x51fed4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FEECu;
            goto label_51feec;
        }
    }
    ctx->pc = 0x51FED8u;
label_51fed8:
    // 0x51fed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51fed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51fedc:
    // 0x51fedc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51fedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51fee0:
    // 0x51fee0: 0x320f809  jalr        $t9
label_51fee4:
    if (ctx->pc == 0x51FEE4u) {
        ctx->pc = 0x51FEE4u;
            // 0x51fee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51FEE8u;
        goto label_51fee8;
    }
    ctx->pc = 0x51FEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51FEE8u);
        ctx->pc = 0x51FEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FEE0u;
            // 0x51fee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51FEE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51FEE8u; }
            if (ctx->pc != 0x51FEE8u) { return; }
        }
        }
    }
    ctx->pc = 0x51FEE8u;
label_51fee8:
    // 0x51fee8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x51fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_51feec:
    // 0x51feec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_51fef0:
    if (ctx->pc == 0x51FEF0u) {
        ctx->pc = 0x51FEF0u;
            // 0x51fef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FEF4u;
        goto label_51fef4;
    }
    ctx->pc = 0x51FEECu;
    {
        const bool branch_taken_0x51feec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51feec) {
            ctx->pc = 0x51FEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FEECu;
            // 0x51fef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FF08u;
            goto label_51ff08;
        }
    }
    ctx->pc = 0x51FEF4u;
label_51fef4:
    // 0x51fef4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51fef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51fef8:
    // 0x51fef8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51fef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51fefc:
    // 0x51fefc: 0x320f809  jalr        $t9
label_51ff00:
    if (ctx->pc == 0x51FF00u) {
        ctx->pc = 0x51FF00u;
            // 0x51ff00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51FF04u;
        goto label_51ff04;
    }
    ctx->pc = 0x51FEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51FF04u);
        ctx->pc = 0x51FF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FEFCu;
            // 0x51ff00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51FF04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51FF04u; }
            if (ctx->pc != 0x51FF04u) { return; }
        }
        }
    }
    ctx->pc = 0x51FF04u;
label_51ff04:
    // 0x51ff04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51ff08:
    // 0x51ff08: 0xc075bf8  jal         func_1D6FE0
label_51ff0c:
    if (ctx->pc == 0x51FF0Cu) {
        ctx->pc = 0x51FF0Cu;
            // 0x51ff0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FF10u;
        goto label_51ff10;
    }
    ctx->pc = 0x51FF08u;
    SET_GPR_U32(ctx, 31, 0x51FF10u);
    ctx->pc = 0x51FF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF08u;
            // 0x51ff0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FF10u; }
        if (ctx->pc != 0x51FF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FF10u; }
        if (ctx->pc != 0x51FF10u) { return; }
    }
    ctx->pc = 0x51FF10u;
label_51ff10:
    // 0x51ff10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x51ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_51ff14:
    // 0x51ff14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51ff14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_51ff18:
    // 0x51ff18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51ff1c:
    if (ctx->pc == 0x51FF1Cu) {
        ctx->pc = 0x51FF1Cu;
            // 0x51ff1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FF20u;
        goto label_51ff20;
    }
    ctx->pc = 0x51FF18u;
    {
        const bool branch_taken_0x51ff18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51ff18) {
            ctx->pc = 0x51FF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF18u;
            // 0x51ff1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FF2Cu;
            goto label_51ff2c;
        }
    }
    ctx->pc = 0x51FF20u;
label_51ff20:
    // 0x51ff20: 0xc0400a8  jal         func_1002A0
label_51ff24:
    if (ctx->pc == 0x51FF24u) {
        ctx->pc = 0x51FF24u;
            // 0x51ff24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FF28u;
        goto label_51ff28;
    }
    ctx->pc = 0x51FF20u;
    SET_GPR_U32(ctx, 31, 0x51FF28u);
    ctx->pc = 0x51FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF20u;
            // 0x51ff24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FF28u; }
        if (ctx->pc != 0x51FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FF28u; }
        if (ctx->pc != 0x51FF28u) { return; }
    }
    ctx->pc = 0x51FF28u;
label_51ff28:
    // 0x51ff28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x51ff28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51ff2c:
    // 0x51ff2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51ff2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_51ff30:
    // 0x51ff30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ff30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51ff34:
    // 0x51ff34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ff34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51ff38:
    // 0x51ff38: 0x3e00008  jr          $ra
label_51ff3c:
    if (ctx->pc == 0x51FF3Cu) {
        ctx->pc = 0x51FF3Cu;
            // 0x51ff3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51FF40u;
        goto label_51ff40;
    }
    ctx->pc = 0x51FF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF38u;
            // 0x51ff3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FF40u;
label_51ff40:
    // 0x51ff40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51ff44:
    // 0x51ff44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_51ff48:
    // 0x51ff48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51ff4c:
    // 0x51ff4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51ff50:
    // 0x51ff50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51ff50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51ff54:
    // 0x51ff54: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_51ff58:
    if (ctx->pc == 0x51FF58u) {
        ctx->pc = 0x51FF58u;
            // 0x51ff58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FF5Cu;
        goto label_51ff5c;
    }
    ctx->pc = 0x51FF54u;
    {
        const bool branch_taken_0x51ff54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF54u;
            // 0x51ff58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ff54) {
            ctx->pc = 0x51FFB0u;
            goto label_51ffb0;
        }
    }
    ctx->pc = 0x51FF5Cu;
label_51ff5c:
    // 0x51ff5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51ff60:
    // 0x51ff60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51ff64:
    // 0x51ff64: 0x24635d10  addiu       $v1, $v1, 0x5D10
    ctx->pc = 0x51ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23824));
label_51ff68:
    // 0x51ff68: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x51ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
label_51ff6c:
    // 0x51ff6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51ff70:
    // 0x51ff70: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_51ff74:
    if (ctx->pc == 0x51FF74u) {
        ctx->pc = 0x51FF74u;
            // 0x51ff74: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x51FF78u;
        goto label_51ff78;
    }
    ctx->pc = 0x51FF70u;
    {
        const bool branch_taken_0x51ff70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF70u;
            // 0x51ff74: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ff70) {
            ctx->pc = 0x51FF98u;
            goto label_51ff98;
        }
    }
    ctx->pc = 0x51FF78u;
label_51ff78:
    // 0x51ff78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51ff7c:
    // 0x51ff7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51ff80:
    // 0x51ff80: 0x24635bb0  addiu       $v1, $v1, 0x5BB0
    ctx->pc = 0x51ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23472));
label_51ff84:
    // 0x51ff84: 0x24425bf0  addiu       $v0, $v0, 0x5BF0
    ctx->pc = 0x51ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
label_51ff88:
    // 0x51ff88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51ff8c:
    // 0x51ff8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51ff8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51ff90:
    // 0x51ff90: 0xc0b1974  jal         func_2C65D0
label_51ff94:
    if (ctx->pc == 0x51FF94u) {
        ctx->pc = 0x51FF94u;
            // 0x51ff94: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x51FF98u;
        goto label_51ff98;
    }
    ctx->pc = 0x51FF90u;
    SET_GPR_U32(ctx, 31, 0x51FF98u);
    ctx->pc = 0x51FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FF90u;
            // 0x51ff94: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C65D0u;
    if (runtime->hasFunction(0x2C65D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C65D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FF98u; }
        if (ctx->pc != 0x51FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C65D0_0x2c65d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FF98u; }
        if (ctx->pc != 0x51FF98u) { return; }
    }
    ctx->pc = 0x51FF98u;
label_51ff98:
    // 0x51ff98: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x51ff98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_51ff9c:
    // 0x51ff9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51ff9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_51ffa0:
    // 0x51ffa0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51ffa4:
    if (ctx->pc == 0x51FFA4u) {
        ctx->pc = 0x51FFA4u;
            // 0x51ffa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FFA8u;
        goto label_51ffa8;
    }
    ctx->pc = 0x51FFA0u;
    {
        const bool branch_taken_0x51ffa0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51ffa0) {
            ctx->pc = 0x51FFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FFA0u;
            // 0x51ffa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FFB4u;
            goto label_51ffb4;
        }
    }
    ctx->pc = 0x51FFA8u;
label_51ffa8:
    // 0x51ffa8: 0xc0400a8  jal         func_1002A0
label_51ffac:
    if (ctx->pc == 0x51FFACu) {
        ctx->pc = 0x51FFACu;
            // 0x51ffac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FFB0u;
        goto label_51ffb0;
    }
    ctx->pc = 0x51FFA8u;
    SET_GPR_U32(ctx, 31, 0x51FFB0u);
    ctx->pc = 0x51FFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FFA8u;
            // 0x51ffac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FFB0u; }
        if (ctx->pc != 0x51FFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FFB0u; }
        if (ctx->pc != 0x51FFB0u) { return; }
    }
    ctx->pc = 0x51FFB0u;
label_51ffb0:
    // 0x51ffb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51ffb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51ffb4:
    // 0x51ffb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51ffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_51ffb8:
    // 0x51ffb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ffb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51ffbc:
    // 0x51ffbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ffbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51ffc0:
    // 0x51ffc0: 0x3e00008  jr          $ra
label_51ffc4:
    if (ctx->pc == 0x51FFC4u) {
        ctx->pc = 0x51FFC4u;
            // 0x51ffc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51FFC8u;
        goto label_51ffc8;
    }
    ctx->pc = 0x51FFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FFC0u;
            // 0x51ffc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FFC8u;
label_51ffc8:
    // 0x51ffc8: 0x0  nop
    ctx->pc = 0x51ffc8u;
    // NOP
label_51ffcc:
    // 0x51ffcc: 0x0  nop
    ctx->pc = 0x51ffccu;
    // NOP
label_51ffd0:
    // 0x51ffd0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x51ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_51ffd4:
    // 0x51ffd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51ffd8:
    // 0x51ffd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x51ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_51ffdc:
    // 0x51ffdc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x51ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_51ffe0:
    // 0x51ffe0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x51ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_51ffe4:
    // 0x51ffe4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x51ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_51ffe8:
    // 0x51ffe8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x51ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_51ffec:
    // 0x51ffec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x51ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_51fff0:
    // 0x51fff0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x51fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_51fff4:
    // 0x51fff4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x51fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_51fff8:
    // 0x51fff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51fffc:
    // 0x51fffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_520000:
    // 0x520000: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x520000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_520004:
    // 0x520004: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x520004u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_520008:
    // 0x520008: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_52000c:
    if (ctx->pc == 0x52000Cu) {
        ctx->pc = 0x52000Cu;
            // 0x52000c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520010u;
        goto label_520010;
    }
    ctx->pc = 0x520008u;
    {
        const bool branch_taken_0x520008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520008u;
            // 0x52000c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520008) {
            ctx->pc = 0x520058u;
            goto label_520058;
        }
    }
    ctx->pc = 0x520010u;
label_520010:
    // 0x520010: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x520010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_520014:
    // 0x520014: 0x50a3007e  beql        $a1, $v1, . + 4 + (0x7E << 2)
label_520018:
    if (ctx->pc == 0x520018u) {
        ctx->pc = 0x520018u;
            // 0x520018: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x52001Cu;
        goto label_52001c;
    }
    ctx->pc = 0x520014u;
    {
        const bool branch_taken_0x520014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x520014) {
            ctx->pc = 0x520018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520014u;
            // 0x520018: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520210u;
            goto label_520210;
        }
    }
    ctx->pc = 0x52001Cu;
label_52001c:
    // 0x52001c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_520020:
    // 0x520020: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_520024:
    if (ctx->pc == 0x520024u) {
        ctx->pc = 0x520028u;
        goto label_520028;
    }
    ctx->pc = 0x520020u;
    {
        const bool branch_taken_0x520020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x520020) {
            ctx->pc = 0x520030u;
            goto label_520030;
        }
    }
    ctx->pc = 0x520028u;
label_520028:
    // 0x520028: 0x10000078  b           . + 4 + (0x78 << 2)
label_52002c:
    if (ctx->pc == 0x52002Cu) {
        ctx->pc = 0x520030u;
        goto label_520030;
    }
    ctx->pc = 0x520028u;
    {
        const bool branch_taken_0x520028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x520028) {
            ctx->pc = 0x52020Cu;
            goto label_52020c;
        }
    }
    ctx->pc = 0x520030u;
label_520030:
    // 0x520030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x520030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_520034:
    // 0x520034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x520034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520038:
    // 0x520038: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x520038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52003c:
    // 0x52003c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x52003cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_520040:
    // 0x520040: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x520040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_520044:
    // 0x520044: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x520044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_520048:
    // 0x520048: 0x320f809  jalr        $t9
label_52004c:
    if (ctx->pc == 0x52004Cu) {
        ctx->pc = 0x52004Cu;
            // 0x52004c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x520050u;
        goto label_520050;
    }
    ctx->pc = 0x520048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520050u);
        ctx->pc = 0x52004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520048u;
            // 0x52004c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x520050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520050u; }
            if (ctx->pc != 0x520050u) { return; }
        }
        }
    }
    ctx->pc = 0x520050u;
label_520050:
    // 0x520050: 0x1000006e  b           . + 4 + (0x6E << 2)
label_520054:
    if (ctx->pc == 0x520054u) {
        ctx->pc = 0x520058u;
        goto label_520058;
    }
    ctx->pc = 0x520050u;
    {
        const bool branch_taken_0x520050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x520050) {
            ctx->pc = 0x52020Cu;
            goto label_52020c;
        }
    }
    ctx->pc = 0x520058u;
label_520058:
    // 0x520058: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x520058u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_52005c:
    // 0x52005c: 0x12e0006b  beqz        $s7, . + 4 + (0x6B << 2)
label_520060:
    if (ctx->pc == 0x520060u) {
        ctx->pc = 0x520064u;
        goto label_520064;
    }
    ctx->pc = 0x52005Cu;
    {
        const bool branch_taken_0x52005c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x52005c) {
            ctx->pc = 0x52020Cu;
            goto label_52020c;
        }
    }
    ctx->pc = 0x520064u;
label_520064:
    // 0x520064: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x520064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_520068:
    // 0x520068: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x520068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52006c:
    // 0x52006c: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x52006cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_520070:
    // 0x520070: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x520070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_520074:
    // 0x520074: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x520074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_520078:
    // 0x520078: 0x26b10084  addiu       $s1, $s5, 0x84
    ctx->pc = 0x520078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_52007c:
    // 0x52007c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x52007cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520080:
    // 0x520080: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x520080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520084:
    // 0x520084: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x520084u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_520088:
    // 0x520088: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52008c:
    // 0x52008c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x52008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_520090:
    // 0x520090: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x520090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_520094:
    // 0x520094: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x520094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_520098:
    // 0x520098: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x520098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_52009c:
    // 0x52009c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x52009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_5200a0:
    // 0x5200a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5200a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5200a4:
    // 0x5200a4: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x5200a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_5200a8:
    // 0x5200a8: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x5200a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_5200ac:
    // 0x5200ac: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x5200acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_5200b0:
    // 0x5200b0: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x5200b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_5200b4:
    // 0x5200b4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x5200b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5200b8:
    // 0x5200b8: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x5200b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_5200bc:
    // 0x5200bc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x5200bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_5200c0:
    // 0x5200c0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x5200c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_5200c4:
    // 0x5200c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5200c8:
    // 0x5200c8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x5200c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5200cc:
    // 0x5200cc: 0xc0d639c  jal         func_358E70
label_5200d0:
    if (ctx->pc == 0x5200D0u) {
        ctx->pc = 0x5200D0u;
            // 0x5200d0: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x5200D4u;
        goto label_5200d4;
    }
    ctx->pc = 0x5200CCu;
    SET_GPR_U32(ctx, 31, 0x5200D4u);
    ctx->pc = 0x5200D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5200CCu;
            // 0x5200d0: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200D4u; }
        if (ctx->pc != 0x5200D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200D4u; }
        if (ctx->pc != 0x5200D4u) { return; }
    }
    ctx->pc = 0x5200D4u;
label_5200d4:
    // 0x5200d4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_5200d8:
    if (ctx->pc == 0x5200D8u) {
        ctx->pc = 0x5200DCu;
        goto label_5200dc;
    }
    ctx->pc = 0x5200D4u;
    {
        const bool branch_taken_0x5200d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5200d4) {
            ctx->pc = 0x5201B8u;
            goto label_5201b8;
        }
    }
    ctx->pc = 0x5200DCu;
label_5200dc:
    // 0x5200dc: 0xc0d1c14  jal         func_347050
label_5200e0:
    if (ctx->pc == 0x5200E0u) {
        ctx->pc = 0x5200E0u;
            // 0x5200e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5200E4u;
        goto label_5200e4;
    }
    ctx->pc = 0x5200DCu;
    SET_GPR_U32(ctx, 31, 0x5200E4u);
    ctx->pc = 0x5200E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5200DCu;
            // 0x5200e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200E4u; }
        if (ctx->pc != 0x5200E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200E4u; }
        if (ctx->pc != 0x5200E4u) { return; }
    }
    ctx->pc = 0x5200E4u;
label_5200e4:
    // 0x5200e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5200e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5200e8:
    // 0x5200e8: 0xc04f278  jal         func_13C9E0
label_5200ec:
    if (ctx->pc == 0x5200ECu) {
        ctx->pc = 0x5200ECu;
            // 0x5200ec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5200F0u;
        goto label_5200f0;
    }
    ctx->pc = 0x5200E8u;
    SET_GPR_U32(ctx, 31, 0x5200F0u);
    ctx->pc = 0x5200ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5200E8u;
            // 0x5200ec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200F0u; }
        if (ctx->pc != 0x5200F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200F0u; }
        if (ctx->pc != 0x5200F0u) { return; }
    }
    ctx->pc = 0x5200F0u;
label_5200f0:
    // 0x5200f0: 0xc0d1c10  jal         func_347040
label_5200f4:
    if (ctx->pc == 0x5200F4u) {
        ctx->pc = 0x5200F4u;
            // 0x5200f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5200F8u;
        goto label_5200f8;
    }
    ctx->pc = 0x5200F0u;
    SET_GPR_U32(ctx, 31, 0x5200F8u);
    ctx->pc = 0x5200F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5200F0u;
            // 0x5200f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200F8u; }
        if (ctx->pc != 0x5200F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5200F8u; }
        if (ctx->pc != 0x5200F8u) { return; }
    }
    ctx->pc = 0x5200F8u;
label_5200f8:
    // 0x5200f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5200f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5200fc:
    // 0x5200fc: 0xc04ce80  jal         func_133A00
label_520100:
    if (ctx->pc == 0x520100u) {
        ctx->pc = 0x520100u;
            // 0x520100: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x520104u;
        goto label_520104;
    }
    ctx->pc = 0x5200FCu;
    SET_GPR_U32(ctx, 31, 0x520104u);
    ctx->pc = 0x520100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5200FCu;
            // 0x520100: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520104u; }
        if (ctx->pc != 0x520104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520104u; }
        if (ctx->pc != 0x520104u) { return; }
    }
    ctx->pc = 0x520104u;
label_520104:
    // 0x520104: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x520104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_520108:
    // 0x520108: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x520108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_52010c:
    // 0x52010c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52010cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_520110:
    // 0x520110: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x520110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_520114:
    // 0x520114: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x520114u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_520118:
    // 0x520118: 0xc04ce50  jal         func_133940
label_52011c:
    if (ctx->pc == 0x52011Cu) {
        ctx->pc = 0x52011Cu;
            // 0x52011c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x520120u;
        goto label_520120;
    }
    ctx->pc = 0x520118u;
    SET_GPR_U32(ctx, 31, 0x520120u);
    ctx->pc = 0x52011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520118u;
            // 0x52011c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520120u; }
        if (ctx->pc != 0x520120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520120u; }
        if (ctx->pc != 0x520120u) { return; }
    }
    ctx->pc = 0x520120u;
label_520120:
    // 0x520120: 0xc0d4108  jal         func_350420
label_520124:
    if (ctx->pc == 0x520124u) {
        ctx->pc = 0x520128u;
        goto label_520128;
    }
    ctx->pc = 0x520120u;
    SET_GPR_U32(ctx, 31, 0x520128u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520128u; }
        if (ctx->pc != 0x520128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520128u; }
        if (ctx->pc != 0x520128u) { return; }
    }
    ctx->pc = 0x520128u;
label_520128:
    // 0x520128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x520128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52012c:
    // 0x52012c: 0xc0d4104  jal         func_350410
label_520130:
    if (ctx->pc == 0x520130u) {
        ctx->pc = 0x520130u;
            // 0x520130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520134u;
        goto label_520134;
    }
    ctx->pc = 0x52012Cu;
    SET_GPR_U32(ctx, 31, 0x520134u);
    ctx->pc = 0x520130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52012Cu;
            // 0x520130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520134u; }
        if (ctx->pc != 0x520134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520134u; }
        if (ctx->pc != 0x520134u) { return; }
    }
    ctx->pc = 0x520134u;
label_520134:
    // 0x520134: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x520134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_520138:
    // 0x520138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x520138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52013c:
    // 0x52013c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x52013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_520140:
    // 0x520140: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x520140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_520144:
    // 0x520144: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x520144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_520148:
    // 0x520148: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x520148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52014c:
    // 0x52014c: 0xc0d40ac  jal         func_3502B0
label_520150:
    if (ctx->pc == 0x520150u) {
        ctx->pc = 0x520150u;
            // 0x520150: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x520154u;
        goto label_520154;
    }
    ctx->pc = 0x52014Cu;
    SET_GPR_U32(ctx, 31, 0x520154u);
    ctx->pc = 0x520150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52014Cu;
            // 0x520150: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520154u; }
        if (ctx->pc != 0x520154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520154u; }
        if (ctx->pc != 0x520154u) { return; }
    }
    ctx->pc = 0x520154u;
label_520154:
    // 0x520154: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x520154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_520158:
    // 0x520158: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_52015c:
    if (ctx->pc == 0x52015Cu) {
        ctx->pc = 0x52015Cu;
            // 0x52015c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x520160u;
        goto label_520160;
    }
    ctx->pc = 0x520158u;
    {
        const bool branch_taken_0x520158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52015Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520158u;
            // 0x52015c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520158) {
            ctx->pc = 0x5201B8u;
            goto label_5201b8;
        }
    }
    ctx->pc = 0x520160u;
label_520160:
    // 0x520160: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x520160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_520164:
    // 0x520164: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x520164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_520168:
    // 0x520168: 0xc148090  jal         func_520240
label_52016c:
    if (ctx->pc == 0x52016Cu) {
        ctx->pc = 0x52016Cu;
            // 0x52016c: 0x27a60148  addiu       $a2, $sp, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
        ctx->pc = 0x520170u;
        goto label_520170;
    }
    ctx->pc = 0x520168u;
    SET_GPR_U32(ctx, 31, 0x520170u);
    ctx->pc = 0x52016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520168u;
            // 0x52016c: 0x27a60148  addiu       $a2, $sp, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520240u;
    if (runtime->hasFunction(0x520240u)) {
        auto targetFn = runtime->lookupFunction(0x520240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520170u; }
        if (ctx->pc != 0x520170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00520240_0x520240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520170u; }
        if (ctx->pc != 0x520170u) { return; }
    }
    ctx->pc = 0x520170u;
label_520170:
    // 0x520170: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x520170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_520174:
    // 0x520174: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x520174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_520178:
    // 0x520178: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x520178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_52017c:
    // 0x52017c: 0xc04e4a4  jal         func_139290
label_520180:
    if (ctx->pc == 0x520180u) {
        ctx->pc = 0x520180u;
            // 0x520180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520184u;
        goto label_520184;
    }
    ctx->pc = 0x52017Cu;
    SET_GPR_U32(ctx, 31, 0x520184u);
    ctx->pc = 0x520180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52017Cu;
            // 0x520180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520184u; }
        if (ctx->pc != 0x520184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520184u; }
        if (ctx->pc != 0x520184u) { return; }
    }
    ctx->pc = 0x520184u;
label_520184:
    // 0x520184: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x520184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_520188:
    // 0x520188: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x520188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_52018c:
    // 0x52018c: 0xc04cd60  jal         func_133580
label_520190:
    if (ctx->pc == 0x520190u) {
        ctx->pc = 0x520190u;
            // 0x520190: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x520194u;
        goto label_520194;
    }
    ctx->pc = 0x52018Cu;
    SET_GPR_U32(ctx, 31, 0x520194u);
    ctx->pc = 0x520190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52018Cu;
            // 0x520190: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520194u; }
        if (ctx->pc != 0x520194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520194u; }
        if (ctx->pc != 0x520194u) { return; }
    }
    ctx->pc = 0x520194u;
label_520194:
    // 0x520194: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x520194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_520198:
    // 0x520198: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x520198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_52019c:
    // 0x52019c: 0x320f809  jalr        $t9
label_5201a0:
    if (ctx->pc == 0x5201A0u) {
        ctx->pc = 0x5201A0u;
            // 0x5201a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5201A4u;
        goto label_5201a4;
    }
    ctx->pc = 0x52019Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5201A4u);
        ctx->pc = 0x5201A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52019Cu;
            // 0x5201a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5201A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5201A4u; }
            if (ctx->pc != 0x5201A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5201A4u;
label_5201a4:
    // 0x5201a4: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x5201a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_5201a8:
    // 0x5201a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x5201a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5201ac:
    // 0x5201ac: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x5201acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_5201b0:
    // 0x5201b0: 0xc054fd4  jal         func_153F50
label_5201b4:
    if (ctx->pc == 0x5201B4u) {
        ctx->pc = 0x5201B4u;
            // 0x5201b4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5201B8u;
        goto label_5201b8;
    }
    ctx->pc = 0x5201B0u;
    SET_GPR_U32(ctx, 31, 0x5201B8u);
    ctx->pc = 0x5201B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5201B0u;
            // 0x5201b4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5201B8u; }
        if (ctx->pc != 0x5201B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5201B8u; }
        if (ctx->pc != 0x5201B8u) { return; }
    }
    ctx->pc = 0x5201B8u;
label_5201b8:
    // 0x5201b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x5201b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_5201bc:
    // 0x5201bc: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x5201bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_5201c0:
    // 0x5201c0: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
label_5201c4:
    if (ctx->pc == 0x5201C4u) {
        ctx->pc = 0x5201C4u;
            // 0x5201c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5201C8u;
        goto label_5201c8;
    }
    ctx->pc = 0x5201C0u;
    {
        const bool branch_taken_0x5201c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5201C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5201C0u;
            // 0x5201c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5201c0) {
            ctx->pc = 0x5200B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5200b0;
        }
    }
    ctx->pc = 0x5201C8u;
label_5201c8:
    // 0x5201c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5201c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5201cc:
    // 0x5201cc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x5201ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5201d0:
    // 0x5201d0: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_5201d4:
    if (ctx->pc == 0x5201D4u) {
        ctx->pc = 0x5201D8u;
        goto label_5201d8;
    }
    ctx->pc = 0x5201D0u;
    {
        const bool branch_taken_0x5201d0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x5201d0) {
            ctx->pc = 0x52020Cu;
            goto label_52020c;
        }
    }
    ctx->pc = 0x5201D8u;
label_5201d8:
    // 0x5201d8: 0xc04e738  jal         func_139CE0
label_5201dc:
    if (ctx->pc == 0x5201DCu) {
        ctx->pc = 0x5201DCu;
            // 0x5201dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x5201E0u;
        goto label_5201e0;
    }
    ctx->pc = 0x5201D8u;
    SET_GPR_U32(ctx, 31, 0x5201E0u);
    ctx->pc = 0x5201DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5201D8u;
            // 0x5201dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5201E0u; }
        if (ctx->pc != 0x5201E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5201E0u; }
        if (ctx->pc != 0x5201E0u) { return; }
    }
    ctx->pc = 0x5201E0u;
label_5201e0:
    // 0x5201e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5201e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5201e4:
    // 0x5201e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x5201e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5201e8:
    // 0x5201e8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x5201e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_5201ec:
    // 0x5201ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5201ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5201f0:
    // 0x5201f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5201f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5201f4:
    // 0x5201f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5201f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5201f8:
    // 0x5201f8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x5201f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_5201fc:
    // 0x5201fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5201fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520200:
    // 0x520200: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x520200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_520204:
    // 0x520204: 0xc055d28  jal         func_1574A0
label_520208:
    if (ctx->pc == 0x520208u) {
        ctx->pc = 0x520208u;
            // 0x520208: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52020Cu;
        goto label_52020c;
    }
    ctx->pc = 0x520204u;
    SET_GPR_U32(ctx, 31, 0x52020Cu);
    ctx->pc = 0x520208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520204u;
            // 0x520208: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52020Cu; }
        if (ctx->pc != 0x52020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52020Cu; }
        if (ctx->pc != 0x52020Cu) { return; }
    }
    ctx->pc = 0x52020Cu;
label_52020c:
    // 0x52020c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x52020cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_520210:
    // 0x520210: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x520210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_520214:
    // 0x520214: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x520214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_520218:
    // 0x520218: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x520218u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_52021c:
    // 0x52021c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x52021cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_520220:
    // 0x520220: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x520220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_520224:
    // 0x520224: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x520224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_520228:
    // 0x520228: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x520228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52022c:
    // 0x52022c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x52022cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_520230:
    // 0x520230: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x520230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_520234:
    // 0x520234: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x520234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520238:
    // 0x520238: 0x3e00008  jr          $ra
label_52023c:
    if (ctx->pc == 0x52023Cu) {
        ctx->pc = 0x52023Cu;
            // 0x52023c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x520240u;
        goto label_fallthrough_0x520238;
    }
    ctx->pc = 0x520238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520238u;
            // 0x52023c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x520238:
    ctx->pc = 0x520240u;
}
