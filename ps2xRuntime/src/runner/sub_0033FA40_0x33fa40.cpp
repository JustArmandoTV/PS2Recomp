#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033FA40
// Address: 0x33fa40 - 0x340770
void sub_0033FA40_0x33fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FA40_0x33fa40");
#endif

    switch (ctx->pc) {
        case 0x3400a8u: goto label_3400a8;
        case 0x34024cu: goto label_34024c;
        case 0x340264u: goto label_340264;
        case 0x3402dcu: goto label_3402dc;
        case 0x34035cu: goto label_34035c;
        case 0x340540u: goto label_340540;
        case 0x34056cu: goto label_34056c;
        case 0x340594u: goto label_340594;
        case 0x3405d8u: goto label_3405d8;
        case 0x340604u: goto label_340604;
        case 0x340620u: goto label_340620;
        case 0x340654u: goto label_340654;
        case 0x3406a8u: goto label_3406a8;
        case 0x3406d4u: goto label_3406d4;
        default: break;
    }

    ctx->pc = 0x33fa40u;

    // 0x33fa40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33fa44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x33fa48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33fa4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x33fa50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33fa54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33fa58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33fa58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa5c: 0x90840859  lbu         $a0, 0x859($a0)
    ctx->pc = 0x33fa5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2137)));
    // 0x33fa60: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x33fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x33fa64: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x33fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
    // 0x33fa68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FA68u;
    {
        const bool branch_taken_0x33fa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA68u;
            // 0x33fa6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa68) {
            ctx->pc = 0x33FA78u;
            goto label_33fa78;
        }
    }
    ctx->pc = 0x33FA70u;
    // 0x33fa70: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x33FA70u;
    {
        const bool branch_taken_0x33fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA70u;
            // 0x33fa74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa70) {
            ctx->pc = 0x3401C8u;
            goto label_3401c8;
        }
    }
    ctx->pc = 0x33FA78u;
label_33fa78:
    // 0x33fa78: 0x92240d3a  lbu         $a0, 0xD3A($s1)
    ctx->pc = 0x33fa78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
    // 0x33fa7c: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x33FA7Cu;
    {
        const bool branch_taken_0x33fa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa7c) {
            ctx->pc = 0x33FA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA7Cu;
            // 0x33fa80: 0x92240ce4  lbu         $a0, 0xCE4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FB28u;
            goto label_33fb28;
        }
    }
    ctx->pc = 0x33FA84u;
    // 0x33fa84: 0x92250ce4  lbu         $a1, 0xCE4($s1)
    ctx->pc = 0x33fa84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3300)));
    // 0x33fa88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33fa8c: 0x14a40025  bne         $a1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x33FA8Cu;
    {
        const bool branch_taken_0x33fa8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33fa8c) {
            ctx->pc = 0x33FB24u;
            goto label_33fb24;
        }
    }
    ctx->pc = 0x33FA94u;
    // 0x33fa94: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fa98: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x33fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x33fa9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33fa9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33faa0: 0x0  nop
    ctx->pc = 0x33faa0u;
    // NOP
    // 0x33faa4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33faa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33faa8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33FAA8u;
    {
        const bool branch_taken_0x33faa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FAA8u;
            // 0x33faac: 0x26260838  addiu       $a2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33faa8) {
            ctx->pc = 0x33FAC0u;
            goto label_33fac0;
        }
    }
    ctx->pc = 0x33FAB0u;
    // 0x33fab0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fab4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33fab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33fab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FAB8u;
    {
        const bool branch_taken_0x33fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FAB8u;
            // 0x33fabc: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fab8) {
            ctx->pc = 0x33FADCu;
            goto label_33fadc;
        }
    }
    ctx->pc = 0x33FAC0u;
label_33fac0:
    // 0x33fac0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33fac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33fac4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x33fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x33fac8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33facc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33faccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33fad0: 0x0  nop
    ctx->pc = 0x33fad0u;
    // NOP
    // 0x33fad4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x33fad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x33fad8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33fadc:
    // 0x33fadc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x33fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33fae0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33fae4: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33fae8: 0x8e250d40  lw          $a1, 0xD40($s1)
    ctx->pc = 0x33fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
    // 0x33faec: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x33faecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33faf0: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x33faf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x33faf4: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x33faf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x33faf8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x33faf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33fafc: 0xe82023  subu        $a0, $a3, $t0
    ctx->pc = 0x33fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x33fb00: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x33fb00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fb04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x33fb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x33fb08: 0x8e240d3c  lw          $a0, 0xD3C($s1)
    ctx->pc = 0x33fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x33fb0c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x33fb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x33fb10: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x33fb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x33fb14: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x33fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x33fb18: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x33fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33fb1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33fb20: 0xae240d3c  sw          $a0, 0xD3C($s1)
    ctx->pc = 0x33fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3388), GPR_U32(ctx, 4));
label_33fb24:
    // 0x33fb24: 0x92240ce4  lbu         $a0, 0xCE4($s1)
    ctx->pc = 0x33fb24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3300)));
label_33fb28:
    // 0x33fb28: 0x2c810014  sltiu       $at, $a0, 0x14
    ctx->pc = 0x33fb28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x33fb2c: 0x502001a6  beql        $at, $zero, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x33FB2Cu;
    {
        const bool branch_taken_0x33fb2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb2c) {
            ctx->pc = 0x33FB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB2Cu;
            // 0x33fb30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3401C8u;
            goto label_3401c8;
        }
    }
    ctx->pc = 0x33FB34u;
    // 0x33fb34: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x33fb38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fb3c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33fb40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33fb44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33fb48: 0x800008  jr          $a0
    ctx->pc = 0x33FB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33FB50u: goto label_33fb50;
            case 0x33FC48u: goto label_33fc48;
            case 0x33FD40u: goto label_33fd40;
            case 0x33FD84u: goto label_33fd84;
            case 0x33FDC8u: goto label_33fdc8;
            case 0x33FE0Cu: goto label_33fe0c;
            case 0x33FEE0u: goto label_33fee0;
            case 0x33FF40u: goto label_33ff40;
            case 0x33FF84u: goto label_33ff84;
            case 0x33FFC8u: goto label_33ffc8;
            case 0x340018u: goto label_340018;
            case 0x3400A0u: goto label_3400a0;
            case 0x3400ECu: goto label_3400ec;
            case 0x34013Cu: goto label_34013c;
            case 0x340180u: goto label_340180;
            case 0x3401B0u: goto label_3401b0;
            case 0x3401C4u: goto label_3401c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33FB50u;
label_33fb50:
    // 0x33fb50: 0x8c630784  lw          $v1, 0x784($v1)
    ctx->pc = 0x33fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1924)));
    // 0x33fb54: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x33FB54u;
    {
        const bool branch_taken_0x33fb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb54) {
            ctx->pc = 0x33FB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB54u;
            // 0x33fb58: 0xc6210844  lwc1        $f1, 0x844($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FB90u;
            goto label_33fb90;
        }
    }
    ctx->pc = 0x33FB5Cu;
    // 0x33fb5c: 0x80440e3f  lb          $a0, 0xE3F($v0)
    ctx->pc = 0x33fb5cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3647)));
    // 0x33fb60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33fb64: 0x50830197  beql        $a0, $v1, . + 4 + (0x197 << 2)
    ctx->pc = 0x33FB64u;
    {
        const bool branch_taken_0x33fb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33fb64) {
            ctx->pc = 0x33FB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB64u;
            // 0x33fb68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FB6Cu;
    // 0x33fb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fb70: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FB70u;
    {
        const bool branch_taken_0x33fb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33fb70) {
            ctx->pc = 0x33FB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB70u;
            // 0x33fb74: 0x3863c  dsll32      $s0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FB88u;
            goto label_33fb88;
        }
    }
    ctx->pc = 0x33FB78u;
    // 0x33fb78: 0x50800192  beql        $a0, $zero, . + 4 + (0x192 << 2)
    ctx->pc = 0x33FB78u;
    {
        const bool branch_taken_0x33fb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb78) {
            ctx->pc = 0x33FB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB78u;
            // 0x33fb7c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FB80u;
    // 0x33fb80: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x33FB80u;
    {
        const bool branch_taken_0x33fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb80) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FB88u;
label_33fb88:
    // 0x33fb88: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x33FB88u;
    {
        const bool branch_taken_0x33fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FB88u;
            // 0x33fb8c: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb88) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FB90u;
label_33fb90:
    // 0x33fb90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33fb94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33fb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fb98: 0x0  nop
    ctx->pc = 0x33fb98u;
    // NOP
    // 0x33fb9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33fb9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33fba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33FBA0u;
    {
        const bool branch_taken_0x33fba0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FBA0u;
            // 0x33fba4: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fba0) {
            ctx->pc = 0x33FBB8u;
            goto label_33fbb8;
        }
    }
    ctx->pc = 0x33FBA8u;
    // 0x33fba8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fbac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33fbacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33fbb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FBB0u;
    {
        const bool branch_taken_0x33fbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FBB0u;
            // 0x33fbb4: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbb0) {
            ctx->pc = 0x33FBD4u;
            goto label_33fbd4;
        }
    }
    ctx->pc = 0x33FBB8u;
label_33fbb8:
    // 0x33fbb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33fbb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33fbbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33fbc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fbc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fbc4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33fbc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33fbc8: 0x0  nop
    ctx->pc = 0x33fbc8u;
    // NOP
    // 0x33fbcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fbd0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x33fbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33fbd4:
    // 0x33fbd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33fbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fbdc: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x33fbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33fbe0: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x33fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x33fbe4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33fbe8: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x33fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x33fbec: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33fbf0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33fbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33fbf4: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x33fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33fbf8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fbfc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33fc00: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33fc04: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x33fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x33fc08: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33fc0c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x33fc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33fc10: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FC10u;
    {
        const bool branch_taken_0x33fc10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fc10) {
            ctx->pc = 0x33FC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC10u;
            // 0x33fc14: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FC20u;
            goto label_33fc20;
        }
    }
    ctx->pc = 0x33FC18u;
    // 0x33fc18: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x33FC18u;
    {
        const bool branch_taken_0x33fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC18u;
            // 0x33fc1c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc18) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC20u;
label_33fc20:
    // 0x33fc20: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x33fc20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33fc24: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FC24u;
    {
        const bool branch_taken_0x33fc24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fc24) {
            ctx->pc = 0x33FC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC24u;
            // 0x33fc28: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FC34u;
            goto label_33fc34;
        }
    }
    ctx->pc = 0x33FC2Cu;
    // 0x33fc2c: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x33FC2Cu;
    {
        const bool branch_taken_0x33fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC2Cu;
            // 0x33fc30: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc2c) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC34u;
label_33fc34:
    // 0x33fc34: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x33fc34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33fc38: 0x14200162  bnez        $at, . + 4 + (0x162 << 2)
    ctx->pc = 0x33FC38u;
    {
        const bool branch_taken_0x33fc38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fc38) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC40u;
    // 0x33fc40: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x33FC40u;
    {
        const bool branch_taken_0x33fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC40u;
            // 0x33fc44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc40) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC48u;
label_33fc48:
    // 0x33fc48: 0x8c630784  lw          $v1, 0x784($v1)
    ctx->pc = 0x33fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1924)));
    // 0x33fc4c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x33FC4Cu;
    {
        const bool branch_taken_0x33fc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc4c) {
            ctx->pc = 0x33FC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC4Cu;
            // 0x33fc50: 0xc6210844  lwc1        $f1, 0x844($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FC88u;
            goto label_33fc88;
        }
    }
    ctx->pc = 0x33FC54u;
    // 0x33fc54: 0x80440e3f  lb          $a0, 0xE3F($v0)
    ctx->pc = 0x33fc54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3647)));
    // 0x33fc58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33fc5c: 0x50830159  beql        $a0, $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x33FC5Cu;
    {
        const bool branch_taken_0x33fc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33fc5c) {
            ctx->pc = 0x33FC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC5Cu;
            // 0x33fc60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC64u;
    // 0x33fc64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fc68: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FC68u;
    {
        const bool branch_taken_0x33fc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33fc68) {
            ctx->pc = 0x33FC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC68u;
            // 0x33fc6c: 0x3863c  dsll32      $s0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FC80u;
            goto label_33fc80;
        }
    }
    ctx->pc = 0x33FC70u;
    // 0x33fc70: 0x50800154  beql        $a0, $zero, . + 4 + (0x154 << 2)
    ctx->pc = 0x33FC70u;
    {
        const bool branch_taken_0x33fc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc70) {
            ctx->pc = 0x33FC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC70u;
            // 0x33fc74: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC78u;
    // 0x33fc78: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x33FC78u;
    {
        const bool branch_taken_0x33fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fc78) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC80u;
label_33fc80:
    // 0x33fc80: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x33FC80u;
    {
        const bool branch_taken_0x33fc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC80u;
            // 0x33fc84: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc80) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FC88u;
label_33fc88:
    // 0x33fc88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33fc8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33fc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc90: 0x0  nop
    ctx->pc = 0x33fc90u;
    // NOP
    // 0x33fc94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33fc94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33fc98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33FC98u;
    {
        const bool branch_taken_0x33fc98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FC98u;
            // 0x33fc9c: 0x26240838  addiu       $a0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc98) {
            ctx->pc = 0x33FCB0u;
            goto label_33fcb0;
        }
    }
    ctx->pc = 0x33FCA0u;
    // 0x33fca0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fca4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33fca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33fca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FCA8u;
    {
        const bool branch_taken_0x33fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FCA8u;
            // 0x33fcac: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fca8) {
            ctx->pc = 0x33FCCCu;
            goto label_33fccc;
        }
    }
    ctx->pc = 0x33FCB0u;
label_33fcb0:
    // 0x33fcb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33fcb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33fcb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33fcb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fcb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fcbc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33fcbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33fcc0: 0x0  nop
    ctx->pc = 0x33fcc0u;
    // NOP
    // 0x33fcc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fcc8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x33fcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33fccc:
    // 0x33fccc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33fcd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fcd4: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x33fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33fcd8: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x33fcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x33fcdc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33fce0: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x33fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x33fce4: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33fce8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33fce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33fcec: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x33fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33fcf0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fcf4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33fcf8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33fcfc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x33fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x33fd00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33fd04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FD08u;
    {
        const bool branch_taken_0x33fd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd08) {
            ctx->pc = 0x33FD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD08u;
            // 0x33fd0c: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FD18u;
            goto label_33fd18;
        }
    }
    ctx->pc = 0x33FD10u;
    // 0x33fd10: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x33FD10u;
    {
        const bool branch_taken_0x33fd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD10u;
            // 0x33fd14: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd10) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD18u;
label_33fd18:
    // 0x33fd18: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FD1Cu;
    {
        const bool branch_taken_0x33fd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd1c) {
            ctx->pc = 0x33FD20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD1Cu;
            // 0x33fd20: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FD2Cu;
            goto label_33fd2c;
        }
    }
    ctx->pc = 0x33FD24u;
    // 0x33fd24: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x33FD24u;
    {
        const bool branch_taken_0x33fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD24u;
            // 0x33fd28: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd24) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD2Cu;
label_33fd2c:
    // 0x33fd2c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd30: 0x14400124  bnez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x33FD30u;
    {
        const bool branch_taken_0x33fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd30) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD38u;
    // 0x33fd38: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x33FD38u;
    {
        const bool branch_taken_0x33fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD38u;
            // 0x33fd3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd38) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD40u;
label_33fd40:
    // 0x33fd40: 0x8c430e00  lw          $v1, 0xE00($v0)
    ctx->pc = 0x33fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3584)));
    // 0x33fd44: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33fd48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd4c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FD4Cu;
    {
        const bool branch_taken_0x33fd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd4c) {
            ctx->pc = 0x33FD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD4Cu;
            // 0x33fd50: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FD5Cu;
            goto label_33fd5c;
        }
    }
    ctx->pc = 0x33FD54u;
    // 0x33fd54: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x33FD54u;
    {
        const bool branch_taken_0x33fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD54u;
            // 0x33fd58: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd54) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD5Cu;
label_33fd5c:
    // 0x33fd5c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd60: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FD60u;
    {
        const bool branch_taken_0x33fd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd60) {
            ctx->pc = 0x33FD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD60u;
            // 0x33fd64: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FD70u;
            goto label_33fd70;
        }
    }
    ctx->pc = 0x33FD68u;
    // 0x33fd68: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x33FD68u;
    {
        const bool branch_taken_0x33fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD68u;
            // 0x33fd6c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd68) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD70u;
label_33fd70:
    // 0x33fd70: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd74: 0x14400113  bnez        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x33FD74u;
    {
        const bool branch_taken_0x33fd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd74) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD7Cu;
    // 0x33fd7c: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x33FD7Cu;
    {
        const bool branch_taken_0x33fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD7Cu;
            // 0x33fd80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd7c) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FD84u;
label_33fd84:
    // 0x33fd84: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x33fd88: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33fd8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FD90u;
    {
        const bool branch_taken_0x33fd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd90) {
            ctx->pc = 0x33FD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD90u;
            // 0x33fd94: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FDA0u;
            goto label_33fda0;
        }
    }
    ctx->pc = 0x33FD98u;
    // 0x33fd98: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x33FD98u;
    {
        const bool branch_taken_0x33fd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FD98u;
            // 0x33fd9c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd98) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FDA0u;
label_33fda0:
    // 0x33fda0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fda0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fda4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FDA4u;
    {
        const bool branch_taken_0x33fda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fda4) {
            ctx->pc = 0x33FDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDA4u;
            // 0x33fda8: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FDB4u;
            goto label_33fdb4;
        }
    }
    ctx->pc = 0x33FDACu;
    // 0x33fdac: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x33FDACu;
    {
        const bool branch_taken_0x33fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDACu;
            // 0x33fdb0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdac) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FDB4u;
label_33fdb4:
    // 0x33fdb4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fdb8: 0x14400102  bnez        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x33FDB8u;
    {
        const bool branch_taken_0x33fdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdb8) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FDC0u;
    // 0x33fdc0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x33FDC0u;
    {
        const bool branch_taken_0x33fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDC0u;
            // 0x33fdc4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdc0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FDC8u;
label_33fdc8:
    // 0x33fdc8: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x33fdcc: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33fdd0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fdd4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FDD4u;
    {
        const bool branch_taken_0x33fdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdd4) {
            ctx->pc = 0x33FDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDD4u;
            // 0x33fdd8: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FDE4u;
            goto label_33fde4;
        }
    }
    ctx->pc = 0x33FDDCu;
    // 0x33fddc: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x33FDDCu;
    {
        const bool branch_taken_0x33fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDDCu;
            // 0x33fde0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fddc) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FDE4u;
label_33fde4:
    // 0x33fde4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fde4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fde8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FDE8u;
    {
        const bool branch_taken_0x33fde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fde8) {
            ctx->pc = 0x33FDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDE8u;
            // 0x33fdec: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FDF8u;
            goto label_33fdf8;
        }
    }
    ctx->pc = 0x33FDF0u;
    // 0x33fdf0: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x33FDF0u;
    {
        const bool branch_taken_0x33fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FDF0u;
            // 0x33fdf4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdf0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FDF8u;
label_33fdf8:
    // 0x33fdf8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33fdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fdfc: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x33FDFCu;
    {
        const bool branch_taken_0x33fdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdfc) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FE04u;
    // 0x33fe04: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x33FE04u;
    {
        const bool branch_taken_0x33fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE04u;
            // 0x33fe08: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe04) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FE0Cu;
label_33fe0c:
    // 0x33fe0c: 0x92230d3a  lbu         $v1, 0xD3A($s1)
    ctx->pc = 0x33fe0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
    // 0x33fe10: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x33FE10u;
    {
        const bool branch_taken_0x33fe10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE10u;
            // 0x33fe14: 0x8e220d3c  lw          $v0, 0xD3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe10) {
            ctx->pc = 0x33FEA0u;
            goto label_33fea0;
        }
    }
    ctx->pc = 0x33FE18u;
    // 0x33fe18: 0xc6210844  lwc1        $f1, 0x844($s1)
    ctx->pc = 0x33fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fe1c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x33fe20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fe20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fe24: 0x0  nop
    ctx->pc = 0x33fe24u;
    // NOP
    // 0x33fe28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33fe28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33fe2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33FE2Cu;
    {
        const bool branch_taken_0x33fe2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE2Cu;
            // 0x33fe30: 0x26250838  addiu       $a1, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe2c) {
            ctx->pc = 0x33FE44u;
            goto label_33fe44;
        }
    }
    ctx->pc = 0x33FE34u;
    // 0x33fe34: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fe34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fe38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33fe38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33fe3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FE3Cu;
    {
        const bool branch_taken_0x33fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FE3Cu;
            // 0x33fe40: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe3c) {
            ctx->pc = 0x33FE60u;
            goto label_33fe60;
        }
    }
    ctx->pc = 0x33FE44u;
label_33fe44:
    // 0x33fe44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33fe44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33fe48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33fe4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33fe4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33fe50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33fe50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33fe54: 0x0  nop
    ctx->pc = 0x33fe54u;
    // NOP
    // 0x33fe58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33fe58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33fe5c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x33fe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33fe60:
    // 0x33fe60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fe64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fe68: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x33fe68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33fe6c: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x33fe6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x33fe70: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x33fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33fe74: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x33fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x33fe78: 0x8e230d40  lw          $v1, 0xD40($s1)
    ctx->pc = 0x33fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
    // 0x33fe7c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x33fe7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fe80: 0xc72823  subu        $a1, $a2, $a3
    ctx->pc = 0x33fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33fe84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33fe88: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x33fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33fe8c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33fe90: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x33fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33fe94: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x33fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33fe98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x33fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33fe9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33fea0:
    // 0x33fea0: 0x8e230ce0  lw          $v1, 0xCE0($s1)
    ctx->pc = 0x33fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33fea4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x33fea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33fea8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FEA8u;
    {
        const bool branch_taken_0x33fea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fea8) {
            ctx->pc = 0x33FEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FEA8u;
            // 0x33feac: 0x8e230cdc  lw          $v1, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FEB8u;
            goto label_33feb8;
        }
    }
    ctx->pc = 0x33FEB0u;
    // 0x33feb0: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x33FEB0u;
    {
        const bool branch_taken_0x33feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FEB0u;
            // 0x33feb4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33feb0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FEB8u;
label_33feb8:
    // 0x33feb8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x33feb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33febc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FEBCu;
    {
        const bool branch_taken_0x33febc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33febc) {
            ctx->pc = 0x33FEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FEBCu;
            // 0x33fec0: 0x8e230cd8  lw          $v1, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FECCu;
            goto label_33fecc;
        }
    }
    ctx->pc = 0x33FEC4u;
    // 0x33fec4: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x33FEC4u;
    {
        const bool branch_taken_0x33fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FEC4u;
            // 0x33fec8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fec4) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FECCu;
label_33fecc:
    // 0x33fecc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x33feccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33fed0: 0x144000bc  bnez        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x33FED0u;
    {
        const bool branch_taken_0x33fed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fed0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FED8u;
    // 0x33fed8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x33FED8u;
    {
        const bool branch_taken_0x33fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FED8u;
            // 0x33fedc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fed8) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FEE0u;
label_33fee0:
    // 0x33fee0: 0x92220d3a  lbu         $v0, 0xD3A($s1)
    ctx->pc = 0x33fee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3386)));
    // 0x33fee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FEE4u;
    {
        const bool branch_taken_0x33fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FEE4u;
            // 0x33fee8: 0xc6210d3c  lwc1        $f1, 0xD3C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fee4) {
            ctx->pc = 0x33FEF4u;
            goto label_33fef4;
        }
    }
    ctx->pc = 0x33FEECu;
    // 0x33feec: 0xc6200d40  lwc1        $f0, 0xD40($s1)
    ctx->pc = 0x33feecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fef0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33fef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_33fef4:
    // 0x33fef4: 0xc6200ce0  lwc1        $f0, 0xCE0($s1)
    ctx->pc = 0x33fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33fef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33fefc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33fefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff00: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x33FF00u;
    {
        const bool branch_taken_0x33ff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ff00) {
            ctx->pc = 0x33FF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF00u;
            // 0x33ff04: 0xc6200cdc  lwc1        $f0, 0xCDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FF10u;
            goto label_33ff10;
        }
    }
    ctx->pc = 0x33FF08u;
    // 0x33ff08: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x33FF08u;
    {
        const bool branch_taken_0x33ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF08u;
            // 0x33ff0c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff08) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF10u;
label_33ff10:
    // 0x33ff10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ff10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ff14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ff14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff18: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x33FF18u;
    {
        const bool branch_taken_0x33ff18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ff18) {
            ctx->pc = 0x33FF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF18u;
            // 0x33ff1c: 0xc6200cd8  lwc1        $f0, 0xCD8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FF28u;
            goto label_33ff28;
        }
    }
    ctx->pc = 0x33FF20u;
    // 0x33ff20: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x33FF20u;
    {
        const bool branch_taken_0x33ff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF20u;
            // 0x33ff24: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff20) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF28u;
label_33ff28:
    // 0x33ff28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ff28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ff2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ff2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ff30: 0x450100a4  bc1t        . + 4 + (0xA4 << 2)
    ctx->pc = 0x33FF30u;
    {
        const bool branch_taken_0x33ff30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ff30) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF38u;
    // 0x33ff38: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x33FF38u;
    {
        const bool branch_taken_0x33ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF38u;
            // 0x33ff3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff38) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF40u;
label_33ff40:
    // 0x33ff40: 0x8e230d40  lw          $v1, 0xD40($s1)
    ctx->pc = 0x33ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
    // 0x33ff44: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33ff48: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33ff48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ff4c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FF4Cu;
    {
        const bool branch_taken_0x33ff4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ff4c) {
            ctx->pc = 0x33FF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF4Cu;
            // 0x33ff50: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FF5Cu;
            goto label_33ff5c;
        }
    }
    ctx->pc = 0x33FF54u;
    // 0x33ff54: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x33FF54u;
    {
        const bool branch_taken_0x33ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF54u;
            // 0x33ff58: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff54) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF5Cu;
label_33ff5c:
    // 0x33ff5c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33ff5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ff60: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FF60u;
    {
        const bool branch_taken_0x33ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ff60) {
            ctx->pc = 0x33FF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF60u;
            // 0x33ff64: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FF68u;
    // 0x33ff68: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x33FF68u;
    {
        const bool branch_taken_0x33ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF68u;
            // 0x33ff6c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff68) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF70u;
label_33ff70:
    // 0x33ff70: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33ff70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ff74: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x33FF74u;
    {
        const bool branch_taken_0x33ff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ff74) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF7Cu;
    // 0x33ff7c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x33FF7Cu;
    {
        const bool branch_taken_0x33ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF7Cu;
            // 0x33ff80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff7c) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FF84u;
label_33ff84:
    // 0x33ff84: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x33ff88: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33ff8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33ff8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ff90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FF90u;
    {
        const bool branch_taken_0x33ff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ff90) {
            ctx->pc = 0x33FF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF90u;
            // 0x33ff94: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FFA0u;
            goto label_33ffa0;
        }
    }
    ctx->pc = 0x33FF98u;
    // 0x33ff98: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x33FF98u;
    {
        const bool branch_taken_0x33ff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FF98u;
            // 0x33ff9c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff98) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FFA0u;
label_33ffa0:
    // 0x33ffa0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33ffa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ffa4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FFA4u;
    {
        const bool branch_taken_0x33ffa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ffa4) {
            ctx->pc = 0x33FFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFA4u;
            // 0x33ffa8: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FFB4u;
            goto label_33ffb4;
        }
    }
    ctx->pc = 0x33FFACu;
    // 0x33ffac: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x33FFACu;
    {
        const bool branch_taken_0x33ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFACu;
            // 0x33ffb0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffac) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FFB4u;
label_33ffb4:
    // 0x33ffb4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33ffb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33ffb8: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x33FFB8u;
    {
        const bool branch_taken_0x33ffb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ffb8) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FFC0u;
    // 0x33ffc0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x33FFC0u;
    {
        const bool branch_taken_0x33ffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFC0u;
            // 0x33ffc4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffc0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FFC8u;
label_33ffc8:
    // 0x33ffc8: 0x8e220d20  lw          $v0, 0xD20($s1)
    ctx->pc = 0x33ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3360)));
    // 0x33ffcc: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x33FFCCu;
    {
        const bool branch_taken_0x33ffcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ffcc) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FFD4u;
    // 0x33ffd4: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x33ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x33ffd8: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x33ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x33ffdc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x33ffdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33ffe0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FFE0u;
    {
        const bool branch_taken_0x33ffe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ffe0) {
            ctx->pc = 0x33FFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFE0u;
            // 0x33ffe4: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FFF0u;
            goto label_33fff0;
        }
    }
    ctx->pc = 0x33FFE8u;
    // 0x33ffe8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x33FFE8u;
    {
        const bool branch_taken_0x33ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFE8u;
            // 0x33ffec: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ffe8) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x33FFF0u;
label_33fff0:
    // 0x33fff0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x33fff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33fff4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FFF4u;
    {
        const bool branch_taken_0x33fff4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fff4) {
            ctx->pc = 0x33FFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFF4u;
            // 0x33fff8: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340004u;
            goto label_340004;
        }
    }
    ctx->pc = 0x33FFFCu;
    // 0x33fffc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x33FFFCu;
    {
        const bool branch_taken_0x33fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FFFCu;
            // 0x340000: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fffc) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340004u;
label_340004:
    // 0x340004: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x340004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x340008: 0x1420006e  bnez        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x340008u;
    {
        const bool branch_taken_0x340008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x340008) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340010u;
    // 0x340010: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x340010u;
    {
        const bool branch_taken_0x340010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340010u;
            // 0x340014: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340010) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340018u;
label_340018:
    // 0x340018: 0xc4410a8c  lwc1        $f1, 0xA8C($v0)
    ctx->pc = 0x340018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34001c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34001cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340020: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x340020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x340024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340028: 0x0  nop
    ctx->pc = 0x340028u;
    // NOP
    // 0x34002c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34002cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340030: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x340030u;
    {
        const bool branch_taken_0x340030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340030) {
            ctx->pc = 0x340034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340030u;
            // 0x340034: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x340048u;
            goto label_340048;
        }
    }
    ctx->pc = 0x340038u;
    // 0x340038: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340038u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34003c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34003cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340040u;
    {
        const bool branch_taken_0x340040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340040u;
            // 0x340044: 0xae230d20  sw          $v1, 0xD20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340040) {
            ctx->pc = 0x340060u;
            goto label_340060;
        }
    }
    ctx->pc = 0x340048u;
label_340048:
    // 0x340048: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x340048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x34004c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34004cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340050: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x340050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340054: 0x0  nop
    ctx->pc = 0x340054u;
    // NOP
    // 0x340058: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34005c: 0xae230d20  sw          $v1, 0xD20($s1)
    ctx->pc = 0x34005cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 3));
label_340060:
    // 0x340060: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x340060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x340064: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x340064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x340068: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x340068u;
    {
        const bool branch_taken_0x340068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340068) {
            ctx->pc = 0x34006Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340068u;
            // 0x34006c: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340078u;
            goto label_340078;
        }
    }
    ctx->pc = 0x340070u;
    // 0x340070: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x340070u;
    {
        const bool branch_taken_0x340070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340070u;
            // 0x340074: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340070) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340078u;
label_340078:
    // 0x340078: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x340078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34007c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34007Cu;
    {
        const bool branch_taken_0x34007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34007c) {
            ctx->pc = 0x340080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34007Cu;
            // 0x340080: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34008Cu;
            goto label_34008c;
        }
    }
    ctx->pc = 0x340084u;
    // 0x340084: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x340084u;
    {
        const bool branch_taken_0x340084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340084u;
            // 0x340088: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340084) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x34008Cu;
label_34008c:
    // 0x34008c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x34008cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x340090: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x340090u;
    {
        const bool branch_taken_0x340090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340090) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340098u;
    // 0x340098: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x340098u;
    {
        const bool branch_taken_0x340098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340098u;
            // 0x34009c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340098) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3400A0u;
label_3400a0:
    // 0x3400a0: 0xc0db60c  jal         func_36D830
    ctx->pc = 0x3400A0u;
    SET_GPR_U32(ctx, 31, 0x3400A8u);
    ctx->pc = 0x3400A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3400A0u;
            // 0x3400a4: 0x8e240cc8  lw          $a0, 0xCC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D830u;
    if (runtime->hasFunction(0x36D830u)) {
        auto targetFn = runtime->lookupFunction(0x36D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3400A8u; }
        if (ctx->pc != 0x3400A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D830_0x36d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3400A8u; }
        if (ctx->pc != 0x3400A8u) { return; }
    }
    ctx->pc = 0x3400A8u;
label_3400a8:
    // 0x3400a8: 0xae220d20  sw          $v0, 0xD20($s1)
    ctx->pc = 0x3400a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 2));
    // 0x3400ac: 0x8e230ce0  lw          $v1, 0xCE0($s1)
    ctx->pc = 0x3400acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x3400b0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3400b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3400b4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3400B4u;
    {
        const bool branch_taken_0x3400b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3400b4) {
            ctx->pc = 0x3400B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3400B4u;
            // 0x3400b8: 0x8e230cdc  lw          $v1, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3400C4u;
            goto label_3400c4;
        }
    }
    ctx->pc = 0x3400BCu;
    // 0x3400bc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3400BCu;
    {
        const bool branch_taken_0x3400bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3400C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3400BCu;
            // 0x3400c0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400bc) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3400C4u;
label_3400c4:
    // 0x3400c4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3400c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3400c8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3400C8u;
    {
        const bool branch_taken_0x3400c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3400c8) {
            ctx->pc = 0x3400CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3400C8u;
            // 0x3400cc: 0x8e230cd8  lw          $v1, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3400D8u;
            goto label_3400d8;
        }
    }
    ctx->pc = 0x3400D0u;
    // 0x3400d0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3400D0u;
    {
        const bool branch_taken_0x3400d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3400D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3400D0u;
            // 0x3400d4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400d0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3400D8u;
label_3400d8:
    // 0x3400d8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3400d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3400dc: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3400DCu;
    {
        const bool branch_taken_0x3400dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3400dc) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3400E4u;
    // 0x3400e4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3400E4u;
    {
        const bool branch_taken_0x3400e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3400E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3400E4u;
            // 0x3400e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400e4) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3400ECu;
label_3400ec:
    // 0x3400ec: 0xc4400a7c  lwc1        $f0, 0xA7C($v0)
    ctx->pc = 0x3400ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3400f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3400f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3400f4: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x3400f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x3400f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3400f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3400fc: 0x0  nop
    ctx->pc = 0x3400fcu;
    // NOP
    // 0x340100: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x340100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x340104: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x340104u;
    {
        const bool branch_taken_0x340104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340104) {
            ctx->pc = 0x340108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340104u;
            // 0x340108: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340114u;
            goto label_340114;
        }
    }
    ctx->pc = 0x34010Cu;
    // 0x34010c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x34010Cu;
    {
        const bool branch_taken_0x34010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34010Cu;
            // 0x340110: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34010c) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340114u;
label_340114:
    // 0x340114: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x340114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x340118: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x340118u;
    {
        const bool branch_taken_0x340118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340118) {
            ctx->pc = 0x34011Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340118u;
            // 0x34011c: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340128u;
            goto label_340128;
        }
    }
    ctx->pc = 0x340120u;
    // 0x340120: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x340120u;
    {
        const bool branch_taken_0x340120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340120u;
            // 0x340124: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340120) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340128u;
label_340128:
    // 0x340128: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x340128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34012c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34012Cu;
    {
        const bool branch_taken_0x34012c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34012c) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340134u;
    // 0x340134: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x340134u;
    {
        const bool branch_taken_0x340134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340134u;
            // 0x340138: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340134) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x34013Cu;
label_34013c:
    // 0x34013c: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x34013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x340140: 0x8e220ce0  lw          $v0, 0xCE0($s1)
    ctx->pc = 0x340140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x340144: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x340144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x340148: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x340148u;
    {
        const bool branch_taken_0x340148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340148) {
            ctx->pc = 0x34014Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340148u;
            // 0x34014c: 0x8e220cdc  lw          $v0, 0xCDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340158u;
            goto label_340158;
        }
    }
    ctx->pc = 0x340150u;
    // 0x340150: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x340150u;
    {
        const bool branch_taken_0x340150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340150u;
            // 0x340154: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340150) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340158u;
label_340158:
    // 0x340158: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x340158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34015c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34015Cu;
    {
        const bool branch_taken_0x34015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34015c) {
            ctx->pc = 0x340160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34015Cu;
            // 0x340160: 0x8e220cd8  lw          $v0, 0xCD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34016Cu;
            goto label_34016c;
        }
    }
    ctx->pc = 0x340164u;
    // 0x340164: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x340164u;
    {
        const bool branch_taken_0x340164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340164u;
            // 0x340168: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340164) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x34016Cu;
label_34016c:
    // 0x34016c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x34016cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x340170: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x340170u;
    {
        const bool branch_taken_0x340170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340170) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340178u;
    // 0x340178: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x340178u;
    {
        const bool branch_taken_0x340178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34017Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340178u;
            // 0x34017c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340178) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x340180u;
label_340180:
    // 0x340180: 0x8e240d40  lw          $a0, 0xD40($s1)
    ctx->pc = 0x340180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
    // 0x340184: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x340184u;
    {
        const bool branch_taken_0x340184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x340184) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x34018Cu;
    // 0x34018c: 0x8e230ce0  lw          $v1, 0xCE0($s1)
    ctx->pc = 0x34018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3296)));
    // 0x340190: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340198: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x340198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34019c: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x34019cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3401a0: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3401A0u;
    {
        const bool branch_taken_0x3401a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3401a0) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3401A8u;
    // 0x3401a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3401A8u;
    {
        const bool branch_taken_0x3401a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3401ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3401A8u;
            // 0x3401ac: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3401a8) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3401B0u;
label_3401b0:
    // 0x3401b0: 0x8e230d3c  lw          $v1, 0xD3C($s1)
    ctx->pc = 0x3401b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
    // 0x3401b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3401b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3401b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3401B8u;
    {
        const bool branch_taken_0x3401b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3401b8) {
            ctx->pc = 0x3401C4u;
            goto label_3401c4;
        }
    }
    ctx->pc = 0x3401C0u;
    // 0x3401c0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3401c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3401c4:
    // 0x3401c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3401c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3401c8:
    // 0x3401c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3401c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3401cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3401ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3401d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3401d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3401d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3401D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3401D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3401D4u;
            // 0x3401d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3401DCu;
    // 0x3401dc: 0x0  nop
    ctx->pc = 0x3401dcu;
    // NOP
    // 0x3401e0: 0x80cfdf8  j           func_33F7E0
    ctx->pc = 0x3401E0u;
    ctx->pc = 0x33F7E0u;
    {
        auto targetFn = runtime->lookupFunction(0x33F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3401E8u;
    // 0x3401e8: 0x0  nop
    ctx->pc = 0x3401e8u;
    // NOP
    // 0x3401ec: 0x0  nop
    ctx->pc = 0x3401ecu;
    // NOP
    // 0x3401f0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3401f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x3401f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3401f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3401f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3401f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3401fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3401fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x340200: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x340200u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x340204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x340208: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x340208u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34020c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x340210: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x340210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340214: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x340214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x340218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34021c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340224: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x340224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
    // 0x340228: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x340228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34022c: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x34022Cu;
    {
        const bool branch_taken_0x34022c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x340230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34022Cu;
            // 0x340230: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34022c) {
            ctx->pc = 0x34035Cu;
            goto label_34035c;
        }
    }
    ctx->pc = 0x340234u;
    // 0x340234: 0x92a30ce4  lbu         $v1, 0xCE4($s5)
    ctx->pc = 0x340234u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3300)));
    // 0x340238: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x340238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34023c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34023Cu;
    {
        const bool branch_taken_0x34023c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34023c) {
            ctx->pc = 0x340254u;
            goto label_340254;
        }
    }
    ctx->pc = 0x340244u;
    // 0x340244: 0xc0cc268  jal         func_3309A0
    ctx->pc = 0x340244u;
    SET_GPR_U32(ctx, 31, 0x34024Cu);
    ctx->pc = 0x3309A0u;
    if (runtime->hasFunction(0x3309A0u)) {
        auto targetFn = runtime->lookupFunction(0x3309A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34024Cu; }
        if (ctx->pc != 0x34024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003309A0_0x3309a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34024Cu; }
        if (ctx->pc != 0x34024Cu) { return; }
    }
    ctx->pc = 0x34024Cu;
label_34024c:
    // 0x34024c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x34024Cu;
    {
        const bool branch_taken_0x34024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34024Cu;
            // 0x340250: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34024c) {
            ctx->pc = 0x340360u;
            goto label_340360;
        }
    }
    ctx->pc = 0x340254u;
label_340254:
    // 0x340254: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
    // 0x340258: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x340258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x34025c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x34025cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
    // 0x340260: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x340260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_340264:
    // 0x340264: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x340264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x340268: 0x920211a1  lbu         $v0, 0x11A1($s0)
    ctx->pc = 0x340268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4513)));
    // 0x34026c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x34026Cu;
    {
        const bool branch_taken_0x34026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34026c) {
            ctx->pc = 0x340330u;
            goto label_340330;
        }
    }
    ctx->pc = 0x340274u;
    // 0x340274: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x340274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
    // 0x340278: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x340278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x34027c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34027Cu;
    {
        const bool branch_taken_0x34027c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34027c) {
            ctx->pc = 0x3402D0u;
            goto label_3402d0;
        }
    }
    ctx->pc = 0x340284u;
    // 0x340284: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x340284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
    // 0x340288: 0x8ea2078c  lw          $v0, 0x78C($s5)
    ctx->pc = 0x340288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1932)));
    // 0x34028c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x34028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x340290: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x340290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x340294: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x340294u;
    {
        const bool branch_taken_0x340294 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x340294) {
            ctx->pc = 0x3402D0u;
            goto label_3402d0;
        }
    }
    ctx->pc = 0x34029Cu;
    // 0x34029c: 0xa6540000  sh          $s4, 0x0($s2)
    ctx->pc = 0x34029cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x3402a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3402a4: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x3402a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
    // 0x3402a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3402a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3402ac: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x3402acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3402b0: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x3402b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3402b4: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x3402b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
    // 0x3402b8: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x3402b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3402bc: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x3402bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3402c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3402c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3402c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3402C4u;
    {
        const bool branch_taken_0x3402c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3402C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3402C4u;
            // 0x3402c8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3402c4) {
            ctx->pc = 0x340330u;
            goto label_340330;
        }
    }
    ctx->pc = 0x3402CCu;
    // 0x3402cc: 0x0  nop
    ctx->pc = 0x3402ccu;
    // NOP
label_3402d0:
    // 0x3402d0: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x3402d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
    // 0x3402d4: 0xc0ca680  jal         func_329A00
    ctx->pc = 0x3402D4u;
    SET_GPR_U32(ctx, 31, 0x3402DCu);
    ctx->pc = 0x3402D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3402D4u;
            // 0x3402d8: 0x27a5019c  addiu       $a1, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402DCu; }
        if (ctx->pc != 0x3402DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3402DCu; }
        if (ctx->pc != 0x3402DCu) { return; }
    }
    ctx->pc = 0x3402DCu;
label_3402dc:
    // 0x3402dc: 0xa6340000  sh          $s4, 0x0($s1)
    ctx->pc = 0x3402dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x3402e0: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x3402e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3402e4: 0x82040e3f  lb          $a0, 0xE3F($s0)
    ctx->pc = 0x3402e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
    // 0x3402e8: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x3402e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x3402ec: 0x93a5019d  lbu         $a1, 0x19D($sp)
    ctx->pc = 0x3402ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 413)));
    // 0x3402f0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3402f4: 0x97a6019e  lhu         $a2, 0x19E($sp)
    ctx->pc = 0x3402f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 414)));
    // 0x3402f8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x3402f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3402fc: 0x93a3019c  lbu         $v1, 0x19C($sp)
    ctx->pc = 0x3402fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x340300: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x340300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x340304: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x340304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x340308: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x340308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x34030c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x34030cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340310: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x340310u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x340314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340318: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34031c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x340320: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x340324: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x340324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x340328: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x340328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x34032c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34032cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_340330:
    // 0x340330: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x340330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
    // 0x340334: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x340334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x340338: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x340338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34033c: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x34033Cu;
    {
        const bool branch_taken_0x34033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34033Cu;
            // 0x340340: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34033c) {
            ctx->pc = 0x340264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_340264;
        }
    }
    ctx->pc = 0x340344u;
    // 0x340344: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x340344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340348: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x340348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34034c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x34034cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340350: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x340350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x340354: 0xc0cc2c8  jal         func_330B20
    ctx->pc = 0x340354u;
    SET_GPR_U32(ctx, 31, 0x34035Cu);
    ctx->pc = 0x340358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340354u;
            // 0x340358: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330B20u;
    if (runtime->hasFunction(0x330B20u)) {
        auto targetFn = runtime->lookupFunction(0x330B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34035Cu; }
        if (ctx->pc != 0x34035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330B20_0x330b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34035Cu; }
        if (ctx->pc != 0x34035Cu) { return; }
    }
    ctx->pc = 0x34035Cu;
label_34035c:
    // 0x34035c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x34035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_340360:
    // 0x340360: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x340360u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x340364: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x340364u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x340368: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x340368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34036c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34036cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34037c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34037cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340380: 0x3e00008  jr          $ra
    ctx->pc = 0x340380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340380u;
            // 0x340384: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340388u;
    // 0x340388: 0x0  nop
    ctx->pc = 0x340388u;
    // NOP
    // 0x34038c: 0x0  nop
    ctx->pc = 0x34038cu;
    // NOP
    // 0x340390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x340390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x340394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x340394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x340398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34039c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3403a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3403a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3403a4: 0x8c830d00  lw          $v1, 0xD00($a0)
    ctx->pc = 0x3403a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
    // 0x3403a8: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x3403A8u;
    {
        const bool branch_taken_0x3403a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3403ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3403A8u;
            // 0x3403ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403a8) {
            ctx->pc = 0x340654u;
            goto label_340654;
        }
    }
    ctx->pc = 0x3403B0u;
    // 0x3403b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3403b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3403b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3403b8: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x3403b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
    // 0x3403bc: 0x92420ce4  lbu         $v0, 0xCE4($s2)
    ctx->pc = 0x3403bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
    // 0x3403c0: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x3403c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x3403c4: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x3403C4u;
    {
        const bool branch_taken_0x3403c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3403C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3403C4u;
            // 0x3403c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403c4) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x3403CCu;
    // 0x3403cc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3403ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3403d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3403d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3403d4: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x3403d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3403d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3403d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3403dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3403dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3403e0: 0x400008  jr          $v0
    ctx->pc = 0x3403E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3403E8u: goto label_3403e8;
            case 0x340468u: goto label_340468;
            case 0x340470u: goto label_340470;
            case 0x34047Cu: goto label_34047c;
            case 0x340484u: goto label_340484;
            case 0x34048Cu: goto label_34048c;
            case 0x3404D4u: goto label_3404d4;
            case 0x3404DCu: goto label_3404dc;
            case 0x3404E4u: goto label_3404e4;
            case 0x3404ECu: goto label_3404ec;
            case 0x340538u: goto label_340538;
            case 0x340548u: goto label_340548;
            case 0x34055Cu: goto label_34055c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3403E8u;
label_3403e8:
    // 0x3403e8: 0xc6410844  lwc1        $f1, 0x844($s2)
    ctx->pc = 0x3403e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3403ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3403ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3403f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3403f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3403f4: 0x0  nop
    ctx->pc = 0x3403f4u;
    // NOP
    // 0x3403f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3403f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3403fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3403FCu;
    {
        const bool branch_taken_0x3403fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x340400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3403FCu;
            // 0x340400: 0x26440838  addiu       $a0, $s2, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3403fc) {
            ctx->pc = 0x340414u;
            goto label_340414;
        }
    }
    ctx->pc = 0x340404u;
    // 0x340404: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340408: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x340408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34040c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34040Cu;
    {
        const bool branch_taken_0x34040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34040Cu;
            // 0x340410: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34040c) {
            ctx->pc = 0x340430u;
            goto label_340430;
        }
    }
    ctx->pc = 0x340414u;
label_340414:
    // 0x340414: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x340414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x340418: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x340418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x34041c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34041cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340420: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x340420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340424: 0x0  nop
    ctx->pc = 0x340424u;
    // NOP
    // 0x340428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34042c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34042cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_340430:
    // 0x340430: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x340430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x340434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340438: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x340438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34043c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x34043cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x340440: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x340440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x340444: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x340444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340448: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x340448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x34044c: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x34044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x340450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340454: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340458: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x340458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34045c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x340460: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x340460u;
    {
        const bool branch_taken_0x340460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340460u;
            // 0x340464: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340460) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x340468u;
label_340468:
    // 0x340468: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x340468u;
    {
        const bool branch_taken_0x340468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340468u;
            // 0x34046c: 0x8c910e00  lw          $s1, 0xE00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340468) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x340470u;
label_340470:
    // 0x340470: 0x8e510d3c  lw          $s1, 0xD3C($s2)
    ctx->pc = 0x340470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x340474: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x340474u;
    {
        const bool branch_taken_0x340474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340474u;
            // 0x340478: 0x26500d33  addiu       $s0, $s2, 0xD33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3379));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340474) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x34047Cu;
label_34047c:
    // 0x34047c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x34047Cu;
    {
        const bool branch_taken_0x34047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34047Cu;
            // 0x340480: 0x8e510d3c  lw          $s1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34047c) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x340484u;
label_340484:
    // 0x340484: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x340484u;
    {
        const bool branch_taken_0x340484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340484u;
            // 0x340488: 0x8e510d3c  lw          $s1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340484) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x34048Cu;
label_34048c:
    // 0x34048c: 0xc6410d3c  lwc1        $f1, 0xD3C($s2)
    ctx->pc = 0x34048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340490: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x340490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x340494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340498: 0x0  nop
    ctx->pc = 0x340498u;
    // NOP
    // 0x34049c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34049cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3404a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3404A0u;
    {
        const bool branch_taken_0x3404a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3404a0) {
            ctx->pc = 0x3404A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3404A0u;
            // 0x3404a4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3404B8u;
            goto label_3404b8;
        }
    }
    ctx->pc = 0x3404A8u;
    // 0x3404a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3404a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3404ac: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3404acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3404b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3404B0u;
    {
        const bool branch_taken_0x3404b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404b0) {
            ctx->pc = 0x3404CCu;
            goto label_3404cc;
        }
    }
    ctx->pc = 0x3404B8u;
label_3404b8:
    // 0x3404b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3404b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3404bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3404bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3404c0: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3404c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3404c4: 0x0  nop
    ctx->pc = 0x3404c4u;
    // NOP
    // 0x3404c8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3404c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_3404cc:
    // 0x3404cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3404CCu;
    {
        const bool branch_taken_0x3404cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3404CCu;
            // 0x3404d0: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404cc) {
            ctx->pc = 0x340564u;
            goto label_340564;
        }
    }
    ctx->pc = 0x3404D4u;
label_3404d4:
    // 0x3404d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3404D4u;
    {
        const bool branch_taken_0x3404d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3404D4u;
            // 0x3404d8: 0x8e510d40  lw          $s1, 0xD40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404d4) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x3404DCu;
label_3404dc:
    // 0x3404dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3404DCu;
    {
        const bool branch_taken_0x3404dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3404DCu;
            // 0x3404e0: 0x8e510d3c  lw          $s1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404dc) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x3404E4u;
label_3404e4:
    // 0x3404e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3404E4u;
    {
        const bool branch_taken_0x3404e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3404E4u;
            // 0x3404e8: 0x8e510d3c  lw          $s1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404e4) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x3404ECu;
label_3404ec:
    // 0x3404ec: 0xc4810a8c  lwc1        $f1, 0xA8C($a0)
    ctx->pc = 0x3404ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3404f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3404f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3404f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3404f8: 0x0  nop
    ctx->pc = 0x3404f8u;
    // NOP
    // 0x3404fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3404fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x340500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x340500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340504: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x340504u;
    {
        const bool branch_taken_0x340504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340504) {
            ctx->pc = 0x340508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340504u;
            // 0x340508: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34051Cu;
            goto label_34051c;
        }
    }
    ctx->pc = 0x34050Cu;
    // 0x34050c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34050cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340510: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x340510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x340514: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x340514u;
    {
        const bool branch_taken_0x340514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340514) {
            ctx->pc = 0x340530u;
            goto label_340530;
        }
    }
    ctx->pc = 0x34051Cu;
label_34051c:
    // 0x34051c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x34051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x340520: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340524: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x340524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x340528: 0x0  nop
    ctx->pc = 0x340528u;
    // NOP
    // 0x34052c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x34052cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_340530:
    // 0x340530: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x340530u;
    {
        const bool branch_taken_0x340530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340530) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x340538u;
label_340538:
    // 0x340538: 0xc0db60c  jal         func_36D830
    ctx->pc = 0x340538u;
    SET_GPR_U32(ctx, 31, 0x340540u);
    ctx->pc = 0x34053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340538u;
            // 0x34053c: 0x8e440cc8  lw          $a0, 0xCC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D830u;
    if (runtime->hasFunction(0x36D830u)) {
        auto targetFn = runtime->lookupFunction(0x36D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340540u; }
        if (ctx->pc != 0x340540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D830_0x36d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340540u; }
        if (ctx->pc != 0x340540u) { return; }
    }
    ctx->pc = 0x340540u;
label_340540:
    // 0x340540: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340540u;
    {
        const bool branch_taken_0x340540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340540u;
            // 0x340544: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340540) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x340548u;
label_340548:
    // 0x340548: 0xc4800a7c  lwc1        $f0, 0xA7C($a0)
    ctx->pc = 0x340548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34054c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34054cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340550: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x340550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x340554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x340554u;
    {
        const bool branch_taken_0x340554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340554) {
            ctx->pc = 0x340560u;
            goto label_340560;
        }
    }
    ctx->pc = 0x34055Cu;
label_34055c:
    // 0x34055c: 0x8e510d3c  lw          $s1, 0xD3C($s2)
    ctx->pc = 0x34055cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3388)));
label_340560:
    // 0x340560: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x340560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_340564:
    // 0x340564: 0xc040180  jal         func_100600
    ctx->pc = 0x340564u;
    SET_GPR_U32(ctx, 31, 0x34056Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34056Cu; }
        if (ctx->pc != 0x34056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34056Cu; }
        if (ctx->pc != 0x34056Cu) { return; }
    }
    ctx->pc = 0x34056Cu;
label_34056c:
    // 0x34056c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34056cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340570: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x340570u;
    {
        const bool branch_taken_0x340570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x340570) {
            ctx->pc = 0x340574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340570u;
            // 0x340574: 0xae440d00  sw          $a0, 0xD00($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34059Cu;
            goto label_34059c;
        }
    }
    ctx->pc = 0x340578u;
    // 0x340578: 0x92450ce4  lbu         $a1, 0xCE4($s2)
    ctx->pc = 0x340578u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
    // 0x34057c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x34057cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340580: 0x82480cc1  lb          $t0, 0xCC1($s2)
    ctx->pc = 0x340580u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3265)));
    // 0x340584: 0x8e470d44  lw          $a3, 0xD44($s2)
    ctx->pc = 0x340584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3396)));
    // 0x340588: 0x8e490d48  lw          $t1, 0xD48($s2)
    ctx->pc = 0x340588u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3400)));
    // 0x34058c: 0xc104288  jal         func_410A20
    ctx->pc = 0x34058Cu;
    SET_GPR_U32(ctx, 31, 0x340594u);
    ctx->pc = 0x340590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34058Cu;
            // 0x340590: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x410A20u;
    if (runtime->hasFunction(0x410A20u)) {
        auto targetFn = runtime->lookupFunction(0x410A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340594u; }
        if (ctx->pc != 0x340594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00410A20_0x410a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340594u; }
        if (ctx->pc != 0x340594u) { return; }
    }
    ctx->pc = 0x340594u;
label_340594:
    // 0x340594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340598: 0xae440d00  sw          $a0, 0xD00($s2)
    ctx->pc = 0x340598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 4));
label_34059c:
    // 0x34059c: 0x82440cc1  lb          $a0, 0xCC1($s2)
    ctx->pc = 0x34059cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3265)));
    // 0x3405a0: 0x8e430d48  lw          $v1, 0xD48($s2)
    ctx->pc = 0x3405a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3400)));
    // 0x3405a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3405a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3405a8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3405A8u;
    {
        const bool branch_taken_0x3405a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405a8) {
            ctx->pc = 0x34060Cu;
            goto label_34060c;
        }
    }
    ctx->pc = 0x3405B0u;
    // 0x3405b0: 0xae440d48  sw          $a0, 0xD48($s2)
    ctx->pc = 0x3405b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3400), GPR_U32(ctx, 4));
    // 0x3405b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3405b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3405b8: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x3405b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x3405bc: 0x8e430968  lw          $v1, 0x968($s2)
    ctx->pc = 0x3405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
    // 0x3405c0: 0x82470cc1  lb          $a3, 0xCC1($s2)
    ctx->pc = 0x3405c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3265)));
    // 0x3405c4: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3405c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
    // 0x3405c8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3405c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3405cc: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x3405ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3405d0: 0xc1204e4  jal         func_481390
    ctx->pc = 0x3405D0u;
    SET_GPR_U32(ctx, 31, 0x3405D8u);
    ctx->pc = 0x3405D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3405D0u;
            // 0x3405d4: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481390u;
    if (runtime->hasFunction(0x481390u)) {
        auto targetFn = runtime->lookupFunction(0x481390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3405D8u; }
        if (ctx->pc != 0x3405D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481390_0x481390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3405D8u; }
        if (ctx->pc != 0x3405D8u) { return; }
    }
    ctx->pc = 0x3405D8u;
label_3405d8:
    // 0x3405d8: 0xae510d44  sw          $s1, 0xD44($s2)
    ctx->pc = 0x3405d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3396), GPR_U32(ctx, 17));
    // 0x3405dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3405e0: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x3405e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x3405e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3405e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405e8: 0x8e430968  lw          $v1, 0x968($s2)
    ctx->pc = 0x3405e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
    // 0x3405ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3405ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3405f0: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x3405f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
    // 0x3405f4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3405f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3405f8: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x3405f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3405fc: 0xc120520  jal         func_481480
    ctx->pc = 0x3405FCu;
    SET_GPR_U32(ctx, 31, 0x340604u);
    ctx->pc = 0x340600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3405FCu;
            // 0x340600: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481480u;
    if (runtime->hasFunction(0x481480u)) {
        auto targetFn = runtime->lookupFunction(0x481480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340604u; }
        if (ctx->pc != 0x340604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481480_0x481480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340604u; }
        if (ctx->pc != 0x340604u) { return; }
    }
    ctx->pc = 0x340604u;
label_340604:
    // 0x340604: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x340604u;
    {
        const bool branch_taken_0x340604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340604u;
            // 0x340608: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340604) {
            ctx->pc = 0x340658u;
            goto label_340658;
        }
    }
    ctx->pc = 0x34060Cu;
label_34060c:
    // 0x34060c: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34060Cu;
    {
        const bool branch_taken_0x34060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x34060c) {
            ctx->pc = 0x340654u;
            goto label_340654;
        }
    }
    ctx->pc = 0x340614u;
    // 0x340614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x340614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340618: 0xc0d03b4  jal         func_340ED0
    ctx->pc = 0x340618u;
    SET_GPR_U32(ctx, 31, 0x340620u);
    ctx->pc = 0x34061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340618u;
            // 0x34061c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340ED0u;
    if (runtime->hasFunction(0x340ED0u)) {
        auto targetFn = runtime->lookupFunction(0x340ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340620u; }
        if (ctx->pc != 0x340620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340ED0_0x340ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340620u; }
        if (ctx->pc != 0x340620u) { return; }
    }
    ctx->pc = 0x340620u;
label_340620:
    // 0x340620: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x340620u;
    {
        const bool branch_taken_0x340620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340620) {
            ctx->pc = 0x340654u;
            goto label_340654;
        }
    }
    ctx->pc = 0x340628u;
    // 0x340628: 0xae510d44  sw          $s1, 0xD44($s2)
    ctx->pc = 0x340628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3396), GPR_U32(ctx, 17));
    // 0x34062c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34062cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x340630: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x340630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x340634: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x340634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340638: 0x8e430968  lw          $v1, 0x968($s2)
    ctx->pc = 0x340638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
    // 0x34063c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x34063cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340640: 0x8e420cc4  lw          $v0, 0xCC4($s2)
    ctx->pc = 0x340640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
    // 0x340644: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x340644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x340648: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x340648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34064c: 0xc120520  jal         func_481480
    ctx->pc = 0x34064Cu;
    SET_GPR_U32(ctx, 31, 0x340654u);
    ctx->pc = 0x340650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34064Cu;
            // 0x340650: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481480u;
    if (runtime->hasFunction(0x481480u)) {
        auto targetFn = runtime->lookupFunction(0x481480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340654u; }
        if (ctx->pc != 0x340654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481480_0x481480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340654u; }
        if (ctx->pc != 0x340654u) { return; }
    }
    ctx->pc = 0x340654u;
label_340654:
    // 0x340654: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x340654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_340658:
    // 0x340658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34065c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34065cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340664: 0x3e00008  jr          $ra
    ctx->pc = 0x340664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340664u;
            // 0x340668: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34066Cu;
    // 0x34066c: 0x0  nop
    ctx->pc = 0x34066cu;
    // NOP
    // 0x340670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x340670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x340674: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x340674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x340678: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x340678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34067c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x340680: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x340680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x340684: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x340684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x340688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34068c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34068cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340694: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x340694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34069c: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x34069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3406a0: 0xc040180  jal         func_100600
    ctx->pc = 0x3406A0u;
    SET_GPR_U32(ctx, 31, 0x3406A8u);
    ctx->pc = 0x3406A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3406A0u;
            // 0x3406a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3406A8u; }
        if (ctx->pc != 0x3406A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3406A8u; }
        if (ctx->pc != 0x3406A8u) { return; }
    }
    ctx->pc = 0x3406A8u;
label_3406a8:
    // 0x3406a8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3406A8u;
    {
        const bool branch_taken_0x3406a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3406ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3406A8u;
            // 0x3406ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406a8) {
            ctx->pc = 0x340740u;
            goto label_340740;
        }
    }
    ctx->pc = 0x3406B0u;
    // 0x3406b0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3406b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3406b4: 0x8eb10d48  lw          $s1, 0xD48($s5)
    ctx->pc = 0x3406b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3400)));
    // 0x3406b8: 0x8eb00d44  lw          $s0, 0xD44($s5)
    ctx->pc = 0x3406b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3396)));
    // 0x3406bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3406bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406c0: 0x92b60ce4  lbu         $s6, 0xCE4($s5)
    ctx->pc = 0x3406c0u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3300)));
    // 0x3406c4: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x3406c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
    // 0x3406c8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3406c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3406cc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3406CCu;
    SET_GPR_U32(ctx, 31, 0x3406D4u);
    ctx->pc = 0x3406D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3406CCu;
            // 0x3406d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3406D4u; }
        if (ctx->pc != 0x3406D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3406D4u; }
        if (ctx->pc != 0x3406D4u) { return; }
    }
    ctx->pc = 0x3406D4u;
label_3406d4:
    // 0x3406d4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3406d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3406d8: 0x26a30ca8  addiu       $v1, $s5, 0xCA8
    ctx->pc = 0x3406d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3240));
    // 0x3406dc: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x3406dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x3406e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3406e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3406e4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3406e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x3406e8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3406e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3406ec: 0x24844be0  addiu       $a0, $a0, 0x4BE0
    ctx->pc = 0x3406ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19424));
    // 0x3406f0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3406f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x3406f4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3406f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x3406f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3406f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3406fc: 0xa2540058  sb          $s4, 0x58($s2)
    ctx->pc = 0x3406fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 20));
    // 0x340700: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x340700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x340704: 0xa2440059  sb          $a0, 0x59($s2)
    ctx->pc = 0x340704u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 4));
    // 0x340708: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x340708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x34070c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x34070cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x340710: 0x24845610  addiu       $a0, $a0, 0x5610
    ctx->pc = 0x340710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22032));
    // 0x340714: 0x90630081  lbu         $v1, 0x81($v1)
    ctx->pc = 0x340714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
    // 0x340718: 0xa243005a  sb          $v1, 0x5A($s2)
    ctx->pc = 0x340718u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x34071c: 0xa240005b  sb          $zero, 0x5B($s2)
    ctx->pc = 0x34071cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x340720: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x340720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x340724: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x340724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x340728: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x340728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x34072c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x34072cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x340730: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x340730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x340734: 0xae560064  sw          $s6, 0x64($s2)
    ctx->pc = 0x340734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 22));
    // 0x340738: 0xae500068  sw          $s0, 0x68($s2)
    ctx->pc = 0x340738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 16));
    // 0x34073c: 0xae51006c  sw          $s1, 0x6C($s2)
    ctx->pc = 0x34073cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 17));
label_340740:
    // 0x340740: 0xae53005c  sw          $s3, 0x5C($s2)
    ctx->pc = 0x340740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 19));
    // 0x340744: 0xae530060  sw          $s3, 0x60($s2)
    ctx->pc = 0x340744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 19));
    // 0x340748: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x340748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34074c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34074cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x340750: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x340750u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x340754: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x340754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340758: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x340758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34075c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34075cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340768: 0x3e00008  jr          $ra
    ctx->pc = 0x340768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340768u;
            // 0x34076c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340770u;
}
