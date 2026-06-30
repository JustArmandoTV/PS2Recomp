#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00419FD0
// Address: 0x419fd0 - 0x41a0f0
void sub_00419FD0_0x419fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419FD0_0x419fd0");
#endif

    switch (ctx->pc) {
        case 0x419fd0u: goto label_419fd0;
        case 0x419fd4u: goto label_419fd4;
        case 0x419fd8u: goto label_419fd8;
        case 0x419fdcu: goto label_419fdc;
        case 0x419fe0u: goto label_419fe0;
        case 0x419fe4u: goto label_419fe4;
        case 0x419fe8u: goto label_419fe8;
        case 0x419fecu: goto label_419fec;
        case 0x419ff0u: goto label_419ff0;
        case 0x419ff4u: goto label_419ff4;
        case 0x419ff8u: goto label_419ff8;
        case 0x419ffcu: goto label_419ffc;
        case 0x41a000u: goto label_41a000;
        case 0x41a004u: goto label_41a004;
        case 0x41a008u: goto label_41a008;
        case 0x41a00cu: goto label_41a00c;
        case 0x41a010u: goto label_41a010;
        case 0x41a014u: goto label_41a014;
        case 0x41a018u: goto label_41a018;
        case 0x41a01cu: goto label_41a01c;
        case 0x41a020u: goto label_41a020;
        case 0x41a024u: goto label_41a024;
        case 0x41a028u: goto label_41a028;
        case 0x41a02cu: goto label_41a02c;
        case 0x41a030u: goto label_41a030;
        case 0x41a034u: goto label_41a034;
        case 0x41a038u: goto label_41a038;
        case 0x41a03cu: goto label_41a03c;
        case 0x41a040u: goto label_41a040;
        case 0x41a044u: goto label_41a044;
        case 0x41a048u: goto label_41a048;
        case 0x41a04cu: goto label_41a04c;
        case 0x41a050u: goto label_41a050;
        case 0x41a054u: goto label_41a054;
        case 0x41a058u: goto label_41a058;
        case 0x41a05cu: goto label_41a05c;
        case 0x41a060u: goto label_41a060;
        case 0x41a064u: goto label_41a064;
        case 0x41a068u: goto label_41a068;
        case 0x41a06cu: goto label_41a06c;
        case 0x41a070u: goto label_41a070;
        case 0x41a074u: goto label_41a074;
        case 0x41a078u: goto label_41a078;
        case 0x41a07cu: goto label_41a07c;
        case 0x41a080u: goto label_41a080;
        case 0x41a084u: goto label_41a084;
        case 0x41a088u: goto label_41a088;
        case 0x41a08cu: goto label_41a08c;
        case 0x41a090u: goto label_41a090;
        case 0x41a094u: goto label_41a094;
        case 0x41a098u: goto label_41a098;
        case 0x41a09cu: goto label_41a09c;
        case 0x41a0a0u: goto label_41a0a0;
        case 0x41a0a4u: goto label_41a0a4;
        case 0x41a0a8u: goto label_41a0a8;
        case 0x41a0acu: goto label_41a0ac;
        case 0x41a0b0u: goto label_41a0b0;
        case 0x41a0b4u: goto label_41a0b4;
        case 0x41a0b8u: goto label_41a0b8;
        case 0x41a0bcu: goto label_41a0bc;
        case 0x41a0c0u: goto label_41a0c0;
        case 0x41a0c4u: goto label_41a0c4;
        case 0x41a0c8u: goto label_41a0c8;
        case 0x41a0ccu: goto label_41a0cc;
        case 0x41a0d0u: goto label_41a0d0;
        case 0x41a0d4u: goto label_41a0d4;
        case 0x41a0d8u: goto label_41a0d8;
        case 0x41a0dcu: goto label_41a0dc;
        case 0x41a0e0u: goto label_41a0e0;
        case 0x41a0e4u: goto label_41a0e4;
        case 0x41a0e8u: goto label_41a0e8;
        case 0x41a0ecu: goto label_41a0ec;
        default: break;
    }

    ctx->pc = 0x419fd0u;

label_419fd0:
    // 0x419fd0: 0x8c8b0070  lw          $t3, 0x70($a0)
    ctx->pc = 0x419fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_419fd4:
    // 0x419fd4: 0x11600024  beqz        $t3, . + 4 + (0x24 << 2)
label_419fd8:
    if (ctx->pc == 0x419FD8u) {
        ctx->pc = 0x419FDCu;
        goto label_419fdc;
    }
    ctx->pc = 0x419FD4u;
    {
        const bool branch_taken_0x419fd4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x419fd4) {
            ctx->pc = 0x41A068u;
            goto label_41a068;
        }
    }
    ctx->pc = 0x419FDCu;
label_419fdc:
    // 0x419fdc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x419fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_419fe0:
    // 0x419fe0: 0x248a0090  addiu       $t2, $a0, 0x90
    ctx->pc = 0x419fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_419fe4:
    // 0x419fe4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x419fe4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419fe8:
    // 0x419fe8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x419fe8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419fec:
    // 0x419fec: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x419fecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_419ff0:
    // 0x419ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x419ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419ff4:
    // 0x419ff4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x419ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_419ff8:
    // 0x419ff8: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x419ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_419ffc:
    // 0x419ffc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x419ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41a000:
    // 0x41a000: 0xc5200030  lwc1        $f0, 0x30($t1)
    ctx->pc = 0x41a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41a004:
    // 0x41a004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x41a004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41a008:
    // 0x41a008: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41a00c:
    if (ctx->pc == 0x41A00Cu) {
        ctx->pc = 0x41A00Cu;
            // 0x41a00c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x41A010u;
        goto label_41a010;
    }
    ctx->pc = 0x41A008u;
    {
        const bool branch_taken_0x41a008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41a008) {
            ctx->pc = 0x41A00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A008u;
            // 0x41a00c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A020u;
            goto label_41a020;
        }
    }
    ctx->pc = 0x41A010u;
label_41a010:
    // 0x41a010: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41a010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41a014:
    // 0x41a014: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x41a014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_41a018:
    // 0x41a018: 0x10000006  b           . + 4 + (0x6 << 2)
label_41a01c:
    if (ctx->pc == 0x41A01Cu) {
        ctx->pc = 0x41A01Cu;
            // 0x41a01c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x41A020u;
        goto label_41a020;
    }
    ctx->pc = 0x41A018u;
    {
        const bool branch_taken_0x41a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A018u;
            // 0x41a01c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a018) {
            ctx->pc = 0x41A034u;
            goto label_41a034;
        }
    }
    ctx->pc = 0x41A020u;
label_41a020:
    // 0x41a020: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41a020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41a024:
    // 0x41a024: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x41a024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_41a028:
    // 0x41a028: 0x0  nop
    ctx->pc = 0x41a028u;
    // NOP
label_41a02c:
    // 0x41a02c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x41a02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_41a030:
    // 0x41a030: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x41a030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_41a034:
    // 0x41a034: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x41a034u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_41a038:
    // 0x41a038: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x41a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_41a03c:
    // 0x41a03c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x41a03cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_41a040:
    // 0x41a040: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x41a040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41a044:
    // 0x41a044: 0x1453821  addu        $a3, $t2, $a1
    ctx->pc = 0x41a044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_41a048:
    // 0x41a048: 0x1ab182b  sltu        $v1, $t5, $t3
    ctx->pc = 0x41a048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_41a04c:
    // 0x41a04c: 0x90e50010  lbu         $a1, 0x10($a3)
    ctx->pc = 0x41a04cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_41a050:
    // 0x41a050: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x41a050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_41a054:
    // 0x41a054: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x41a054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_41a058:
    // 0x41a058: 0xa0e60010  sb          $a2, 0x10($a3)
    ctx->pc = 0x41a058u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 6));
label_41a05c:
    // 0x41a05c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x41a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_41a060:
    // 0x41a060: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_41a064:
    if (ctx->pc == 0x41A064u) {
        ctx->pc = 0x41A064u;
            // 0x41a064: 0xaca90008  sw          $t1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
        ctx->pc = 0x41A068u;
        goto label_41a068;
    }
    ctx->pc = 0x41A060u;
    {
        const bool branch_taken_0x41a060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A060u;
            // 0x41a064: 0xaca90008  sw          $t1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a060) {
            ctx->pc = 0x419FF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_419ff4;
        }
    }
    ctx->pc = 0x41A068u;
label_41a068:
    // 0x41a068: 0x3e00008  jr          $ra
label_41a06c:
    if (ctx->pc == 0x41A06Cu) {
        ctx->pc = 0x41A070u;
        goto label_41a070;
    }
    ctx->pc = 0x41A068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A070u;
label_41a070:
    // 0x41a070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41a074:
    // 0x41a074: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41a074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41a078:
    // 0x41a078: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41a078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41a07c:
    // 0x41a07c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41a080:
    // 0x41a080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41a084:
    // 0x41a084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41a088:
    // 0x41a088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41a08c:
    // 0x41a08c: 0xa0607320  sb          $zero, 0x7320($v1)
    ctx->pc = 0x41a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29472), (uint8_t)GPR_U32(ctx, 0));
label_41a090:
    // 0x41a090: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x41a090u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41a094:
    // 0x41a094: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_41a098:
    if (ctx->pc == 0x41A098u) {
        ctx->pc = 0x41A098u;
            // 0x41a098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41A09Cu;
        goto label_41a09c;
    }
    ctx->pc = 0x41A094u;
    {
        const bool branch_taken_0x41a094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A094u;
            // 0x41a098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a094) {
            ctx->pc = 0x41A0D0u;
            goto label_41a0d0;
        }
    }
    ctx->pc = 0x41A09Cu;
label_41a09c:
    // 0x41a09c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41a09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a0a0:
    // 0x41a0a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41a0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a0a4:
    // 0x41a0a4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x41a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_41a0a8:
    // 0x41a0a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41a0ac:
    // 0x41a0ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41a0b0:
    // 0x41a0b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41a0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41a0b4:
    // 0x41a0b4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x41a0b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_41a0b8:
    // 0x41a0b8: 0x320f809  jalr        $t9
label_41a0bc:
    if (ctx->pc == 0x41A0BCu) {
        ctx->pc = 0x41A0C0u;
        goto label_41a0c0;
    }
    ctx->pc = 0x41A0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41A0C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41A0C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41A0C0u; }
            if (ctx->pc != 0x41A0C0u) { return; }
        }
        }
    }
    ctx->pc = 0x41A0C0u;
label_41a0c0:
    // 0x41a0c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41a0c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41a0c4:
    // 0x41a0c4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x41a0c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_41a0c8:
    // 0x41a0c8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_41a0cc:
    if (ctx->pc == 0x41A0CCu) {
        ctx->pc = 0x41A0CCu;
            // 0x41a0cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x41A0D0u;
        goto label_41a0d0;
    }
    ctx->pc = 0x41A0C8u;
    {
        const bool branch_taken_0x41a0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A0C8u;
            // 0x41a0cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a0c8) {
            ctx->pc = 0x41A0A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41a0a4;
        }
    }
    ctx->pc = 0x41A0D0u;
label_41a0d0:
    // 0x41a0d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41a0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41a0d4:
    // 0x41a0d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41a0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a0d8:
    // 0x41a0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41a0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a0dc:
    // 0x41a0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a0e0:
    // 0x41a0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41a0e4:
    // 0x41a0e4: 0x3e00008  jr          $ra
label_41a0e8:
    if (ctx->pc == 0x41A0E8u) {
        ctx->pc = 0x41A0E8u;
            // 0x41a0e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41A0ECu;
        goto label_41a0ec;
    }
    ctx->pc = 0x41A0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A0E4u;
            // 0x41a0e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A0ECu;
label_41a0ec:
    // 0x41a0ec: 0x0  nop
    ctx->pc = 0x41a0ecu;
    // NOP
}
