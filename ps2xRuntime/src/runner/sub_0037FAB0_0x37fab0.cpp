#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037FAB0
// Address: 0x37fab0 - 0x37fcc0
void sub_0037FAB0_0x37fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FAB0_0x37fab0");
#endif

    switch (ctx->pc) {
        case 0x37fab0u: goto label_37fab0;
        case 0x37fab4u: goto label_37fab4;
        case 0x37fab8u: goto label_37fab8;
        case 0x37fabcu: goto label_37fabc;
        case 0x37fac0u: goto label_37fac0;
        case 0x37fac4u: goto label_37fac4;
        case 0x37fac8u: goto label_37fac8;
        case 0x37faccu: goto label_37facc;
        case 0x37fad0u: goto label_37fad0;
        case 0x37fad4u: goto label_37fad4;
        case 0x37fad8u: goto label_37fad8;
        case 0x37fadcu: goto label_37fadc;
        case 0x37fae0u: goto label_37fae0;
        case 0x37fae4u: goto label_37fae4;
        case 0x37fae8u: goto label_37fae8;
        case 0x37faecu: goto label_37faec;
        case 0x37faf0u: goto label_37faf0;
        case 0x37faf4u: goto label_37faf4;
        case 0x37faf8u: goto label_37faf8;
        case 0x37fafcu: goto label_37fafc;
        case 0x37fb00u: goto label_37fb00;
        case 0x37fb04u: goto label_37fb04;
        case 0x37fb08u: goto label_37fb08;
        case 0x37fb0cu: goto label_37fb0c;
        case 0x37fb10u: goto label_37fb10;
        case 0x37fb14u: goto label_37fb14;
        case 0x37fb18u: goto label_37fb18;
        case 0x37fb1cu: goto label_37fb1c;
        case 0x37fb20u: goto label_37fb20;
        case 0x37fb24u: goto label_37fb24;
        case 0x37fb28u: goto label_37fb28;
        case 0x37fb2cu: goto label_37fb2c;
        case 0x37fb30u: goto label_37fb30;
        case 0x37fb34u: goto label_37fb34;
        case 0x37fb38u: goto label_37fb38;
        case 0x37fb3cu: goto label_37fb3c;
        case 0x37fb40u: goto label_37fb40;
        case 0x37fb44u: goto label_37fb44;
        case 0x37fb48u: goto label_37fb48;
        case 0x37fb4cu: goto label_37fb4c;
        case 0x37fb50u: goto label_37fb50;
        case 0x37fb54u: goto label_37fb54;
        case 0x37fb58u: goto label_37fb58;
        case 0x37fb5cu: goto label_37fb5c;
        case 0x37fb60u: goto label_37fb60;
        case 0x37fb64u: goto label_37fb64;
        case 0x37fb68u: goto label_37fb68;
        case 0x37fb6cu: goto label_37fb6c;
        case 0x37fb70u: goto label_37fb70;
        case 0x37fb74u: goto label_37fb74;
        case 0x37fb78u: goto label_37fb78;
        case 0x37fb7cu: goto label_37fb7c;
        case 0x37fb80u: goto label_37fb80;
        case 0x37fb84u: goto label_37fb84;
        case 0x37fb88u: goto label_37fb88;
        case 0x37fb8cu: goto label_37fb8c;
        case 0x37fb90u: goto label_37fb90;
        case 0x37fb94u: goto label_37fb94;
        case 0x37fb98u: goto label_37fb98;
        case 0x37fb9cu: goto label_37fb9c;
        case 0x37fba0u: goto label_37fba0;
        case 0x37fba4u: goto label_37fba4;
        case 0x37fba8u: goto label_37fba8;
        case 0x37fbacu: goto label_37fbac;
        case 0x37fbb0u: goto label_37fbb0;
        case 0x37fbb4u: goto label_37fbb4;
        case 0x37fbb8u: goto label_37fbb8;
        case 0x37fbbcu: goto label_37fbbc;
        case 0x37fbc0u: goto label_37fbc0;
        case 0x37fbc4u: goto label_37fbc4;
        case 0x37fbc8u: goto label_37fbc8;
        case 0x37fbccu: goto label_37fbcc;
        case 0x37fbd0u: goto label_37fbd0;
        case 0x37fbd4u: goto label_37fbd4;
        case 0x37fbd8u: goto label_37fbd8;
        case 0x37fbdcu: goto label_37fbdc;
        case 0x37fbe0u: goto label_37fbe0;
        case 0x37fbe4u: goto label_37fbe4;
        case 0x37fbe8u: goto label_37fbe8;
        case 0x37fbecu: goto label_37fbec;
        case 0x37fbf0u: goto label_37fbf0;
        case 0x37fbf4u: goto label_37fbf4;
        case 0x37fbf8u: goto label_37fbf8;
        case 0x37fbfcu: goto label_37fbfc;
        case 0x37fc00u: goto label_37fc00;
        case 0x37fc04u: goto label_37fc04;
        case 0x37fc08u: goto label_37fc08;
        case 0x37fc0cu: goto label_37fc0c;
        case 0x37fc10u: goto label_37fc10;
        case 0x37fc14u: goto label_37fc14;
        case 0x37fc18u: goto label_37fc18;
        case 0x37fc1cu: goto label_37fc1c;
        case 0x37fc20u: goto label_37fc20;
        case 0x37fc24u: goto label_37fc24;
        case 0x37fc28u: goto label_37fc28;
        case 0x37fc2cu: goto label_37fc2c;
        case 0x37fc30u: goto label_37fc30;
        case 0x37fc34u: goto label_37fc34;
        case 0x37fc38u: goto label_37fc38;
        case 0x37fc3cu: goto label_37fc3c;
        case 0x37fc40u: goto label_37fc40;
        case 0x37fc44u: goto label_37fc44;
        case 0x37fc48u: goto label_37fc48;
        case 0x37fc4cu: goto label_37fc4c;
        case 0x37fc50u: goto label_37fc50;
        case 0x37fc54u: goto label_37fc54;
        case 0x37fc58u: goto label_37fc58;
        case 0x37fc5cu: goto label_37fc5c;
        case 0x37fc60u: goto label_37fc60;
        case 0x37fc64u: goto label_37fc64;
        case 0x37fc68u: goto label_37fc68;
        case 0x37fc6cu: goto label_37fc6c;
        case 0x37fc70u: goto label_37fc70;
        case 0x37fc74u: goto label_37fc74;
        case 0x37fc78u: goto label_37fc78;
        case 0x37fc7cu: goto label_37fc7c;
        case 0x37fc80u: goto label_37fc80;
        case 0x37fc84u: goto label_37fc84;
        case 0x37fc88u: goto label_37fc88;
        case 0x37fc8cu: goto label_37fc8c;
        case 0x37fc90u: goto label_37fc90;
        case 0x37fc94u: goto label_37fc94;
        case 0x37fc98u: goto label_37fc98;
        case 0x37fc9cu: goto label_37fc9c;
        case 0x37fca0u: goto label_37fca0;
        case 0x37fca4u: goto label_37fca4;
        case 0x37fca8u: goto label_37fca8;
        case 0x37fcacu: goto label_37fcac;
        case 0x37fcb0u: goto label_37fcb0;
        case 0x37fcb4u: goto label_37fcb4;
        case 0x37fcb8u: goto label_37fcb8;
        case 0x37fcbcu: goto label_37fcbc;
        default: break;
    }

    ctx->pc = 0x37fab0u;

label_37fab0:
    // 0x37fab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37fab4:
    // 0x37fab4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_37fab8:
    // 0x37fab8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37fabc:
    // 0x37fabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37fabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37fac0:
    // 0x37fac0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37fac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37fac4:
    // 0x37fac4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37fac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37fac8:
    // 0x37fac8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37fac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37facc:
    // 0x37facc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37fad0:
    // 0x37fad0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37fad4:
    // 0x37fad4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37fad4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37fad8:
    // 0x37fad8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37fad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37fadc:
    // 0x37fadc: 0xc48300c0  lwc1        $f3, 0xC0($a0)
    ctx->pc = 0x37fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37fae0:
    // 0x37fae0: 0xc48200a8  lwc1        $f2, 0xA8($a0)
    ctx->pc = 0x37fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37fae4:
    // 0x37fae4: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x37fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37fae8:
    // 0x37fae8: 0xc49400c4  lwc1        $f20, 0xC4($a0)
    ctx->pc = 0x37fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37faec:
    // 0x37faec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37faecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37faf0:
    // 0x37faf0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_37faf4:
    if (ctx->pc == 0x37FAF4u) {
        ctx->pc = 0x37FAF4u;
            // 0x37faf4: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x37FAF8u;
        goto label_37faf8;
    }
    ctx->pc = 0x37FAF0u;
    {
        const bool branch_taken_0x37faf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37FAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FAF0u;
            // 0x37faf4: 0x46021d40  add.s       $f21, $f3, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37faf0) {
            ctx->pc = 0x37FB08u;
            goto label_37fb08;
        }
    }
    ctx->pc = 0x37FAF8u;
label_37faf8:
    // 0x37faf8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37faf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37fafc:
    // 0x37fafc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37fafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37fb00:
    // 0x37fb00: 0x10000008  b           . + 4 + (0x8 << 2)
label_37fb04:
    if (ctx->pc == 0x37FB04u) {
        ctx->pc = 0x37FB04u;
            // 0x37fb04: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x37FB08u;
        goto label_37fb08;
    }
    ctx->pc = 0x37FB00u;
    {
        const bool branch_taken_0x37fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FB00u;
            // 0x37fb04: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb00) {
            ctx->pc = 0x37FB24u;
            goto label_37fb24;
        }
    }
    ctx->pc = 0x37FB08u;
label_37fb08:
    // 0x37fb08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37fb08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37fb0c:
    // 0x37fb0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_37fb10:
    // 0x37fb10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37fb10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37fb14:
    // 0x37fb14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37fb14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37fb18:
    // 0x37fb18: 0x0  nop
    ctx->pc = 0x37fb18u;
    // NOP
label_37fb1c:
    // 0x37fb1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37fb20:
    // 0x37fb20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x37fb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_37fb24:
    // 0x37fb24: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37fb28:
    // 0x37fb28: 0x34432300  ori         $v1, $v0, 0x2300
    ctx->pc = 0x37fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
label_37fb2c:
    // 0x37fb2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37fb30:
    // 0x37fb30: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x37fb30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_37fb34:
    // 0x37fb34: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x37fb34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37fb38:
    // 0x37fb38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37fb3c:
    // 0x37fb3c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37fb40:
    // 0x37fb40: 0xc0506ac  jal         func_141AB0
label_37fb44:
    if (ctx->pc == 0x37FB44u) {
        ctx->pc = 0x37FB44u;
            // 0x37fb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FB48u;
        goto label_37fb48;
    }
    ctx->pc = 0x37FB40u;
    SET_GPR_U32(ctx, 31, 0x37FB48u);
    ctx->pc = 0x37FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FB40u;
            // 0x37fb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FB48u; }
        if (ctx->pc != 0x37FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FB48u; }
        if (ctx->pc != 0x37FB48u) { return; }
    }
    ctx->pc = 0x37FB48u;
label_37fb48:
    // 0x37fb48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fb4c:
    // 0x37fb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37fb50:
    // 0x37fb50: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37fb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37fb54:
    // 0x37fb54: 0x320f809  jalr        $t9
label_37fb58:
    if (ctx->pc == 0x37FB58u) {
        ctx->pc = 0x37FB58u;
            // 0x37fb58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37FB5Cu;
        goto label_37fb5c;
    }
    ctx->pc = 0x37FB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FB5Cu);
        ctx->pc = 0x37FB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FB54u;
            // 0x37fb58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FB5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FB5Cu; }
            if (ctx->pc != 0x37FB5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37FB5Cu;
label_37fb5c:
    // 0x37fb5c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37fb60:
    // 0x37fb60: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x37fb60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_37fb64:
    // 0x37fb64: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37fb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37fb68:
    // 0x37fb68: 0x2610a1c0  addiu       $s0, $s0, -0x5E40
    ctx->pc = 0x37fb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
label_37fb6c:
    // 0x37fb6c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x37fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37fb70:
    // 0x37fb70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37fb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37fb74:
    // 0x37fb74: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37fb78:
    // 0x37fb78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37fb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37fb7c:
    // 0x37fb7c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37fb7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37fb80:
    // 0x37fb80: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37fb84:
    // 0x37fb84: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37fb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37fb88:
    // 0x37fb88: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x37fb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37fb8c:
    // 0x37fb8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37fb90:
    // 0x37fb90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37fb90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fb94:
    // 0x37fb94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37fb98:
    // 0x37fb98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37fb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37fb9c:
    // 0x37fb9c: 0x0  nop
    ctx->pc = 0x37fb9cu;
    // NOP
label_37fba0:
    // 0x37fba0: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37fba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37fba4:
    // 0x37fba4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37fba4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37fba8:
    // 0x37fba8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37fba8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37fbac:
    // 0x37fbac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37fbacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37fbb0:
    // 0x37fbb0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37fbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37fbb4:
    // 0x37fbb4: 0xc0bc284  jal         func_2F0A10
label_37fbb8:
    if (ctx->pc == 0x37FBB8u) {
        ctx->pc = 0x37FBB8u;
            // 0x37fbb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37FBBCu;
        goto label_37fbbc;
    }
    ctx->pc = 0x37FBB4u;
    SET_GPR_U32(ctx, 31, 0x37FBBCu);
    ctx->pc = 0x37FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FBB4u;
            // 0x37fbb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FBBCu; }
        if (ctx->pc != 0x37FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FBBCu; }
        if (ctx->pc != 0x37FBBCu) { return; }
    }
    ctx->pc = 0x37FBBCu;
label_37fbbc:
    // 0x37fbbc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x37fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37fbc0:
    // 0x37fbc0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fbc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fbc4:
    // 0x37fbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37fbc8:
    // 0x37fbc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37fbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37fbcc:
    // 0x37fbcc: 0x320f809  jalr        $t9
label_37fbd0:
    if (ctx->pc == 0x37FBD0u) {
        ctx->pc = 0x37FBD0u;
            // 0x37fbd0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37FBD4u;
        goto label_37fbd4;
    }
    ctx->pc = 0x37FBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FBD4u);
        ctx->pc = 0x37FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FBCCu;
            // 0x37fbd0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FBD4u; }
            if (ctx->pc != 0x37FBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x37FBD4u;
label_37fbd4:
    // 0x37fbd4: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x37fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_37fbd8:
    // 0x37fbd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_37fbdc:
    // 0x37fbdc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37fbe0:
    // 0x37fbe0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x37fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_37fbe4:
    // 0x37fbe4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37fbe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37fbe8:
    // 0x37fbe8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37fbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37fbec:
    // 0x37fbec: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x37fbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37fbf0:
    // 0x37fbf0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x37fbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37fbf4:
    // 0x37fbf4: 0xc156fdc  jal         func_55BF70
label_37fbf8:
    if (ctx->pc == 0x37FBF8u) {
        ctx->pc = 0x37FBF8u;
            // 0x37fbf8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37FBFCu;
        goto label_37fbfc;
    }
    ctx->pc = 0x37FBF4u;
    SET_GPR_U32(ctx, 31, 0x37FBFCu);
    ctx->pc = 0x37FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FBF4u;
            // 0x37fbf8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FBFCu; }
        if (ctx->pc != 0x37FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FBFCu; }
        if (ctx->pc != 0x37FBFCu) { return; }
    }
    ctx->pc = 0x37FBFCu;
label_37fbfc:
    // 0x37fbfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37fc00:
    // 0x37fc00: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x37fc00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_37fc04:
    // 0x37fc04: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37fc08:
    // 0x37fc08: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37fc08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_37fc0c:
    // 0x37fc0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37fc10:
    // 0x37fc10: 0xc0506ac  jal         func_141AB0
label_37fc14:
    if (ctx->pc == 0x37FC14u) {
        ctx->pc = 0x37FC14u;
            // 0x37fc14: 0x261057a0  addiu       $s0, $s0, 0x57A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22432));
        ctx->pc = 0x37FC18u;
        goto label_37fc18;
    }
    ctx->pc = 0x37FC10u;
    SET_GPR_U32(ctx, 31, 0x37FC18u);
    ctx->pc = 0x37FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FC10u;
            // 0x37fc14: 0x261057a0  addiu       $s0, $s0, 0x57A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FC18u; }
        if (ctx->pc != 0x37FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FC18u; }
        if (ctx->pc != 0x37FC18u) { return; }
    }
    ctx->pc = 0x37FC18u;
label_37fc18:
    // 0x37fc18: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fc18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fc1c:
    // 0x37fc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37fc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37fc20:
    // 0x37fc20: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37fc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37fc24:
    // 0x37fc24: 0x320f809  jalr        $t9
label_37fc28:
    if (ctx->pc == 0x37FC28u) {
        ctx->pc = 0x37FC28u;
            // 0x37fc28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37FC2Cu;
        goto label_37fc2c;
    }
    ctx->pc = 0x37FC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FC2Cu);
        ctx->pc = 0x37FC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FC24u;
            // 0x37fc28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FC2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FC2Cu; }
            if (ctx->pc != 0x37FC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37FC2Cu;
label_37fc2c:
    // 0x37fc2c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37fc30:
    // 0x37fc30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37fc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37fc34:
    // 0x37fc34: 0x84445730  lh          $a0, 0x5730($v0)
    ctx->pc = 0x37fc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37fc38:
    // 0x37fc38: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37fc3c:
    // 0x37fc3c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x37fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37fc40:
    // 0x37fc40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37fc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37fc44:
    // 0x37fc44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37fc44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37fc48:
    // 0x37fc48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37fc48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fc4c:
    // 0x37fc4c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37fc50:
    // 0x37fc50: 0x84435732  lh          $v1, 0x5732($v0)
    ctx->pc = 0x37fc50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37fc54:
    // 0x37fc54: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37fc54u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37fc58:
    // 0x37fc58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37fc5c:
    // 0x37fc5c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37fc5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37fc60:
    // 0x37fc60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37fc60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37fc64:
    // 0x37fc64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37fc68:
    // 0x37fc68: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37fc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37fc6c:
    // 0x37fc6c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37fc6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37fc70:
    // 0x37fc70: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37fc70u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37fc74:
    // 0x37fc74: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37fc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37fc78:
    // 0x37fc78: 0xc0bc284  jal         func_2F0A10
label_37fc7c:
    if (ctx->pc == 0x37FC7Cu) {
        ctx->pc = 0x37FC7Cu;
            // 0x37fc7c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37FC80u;
        goto label_37fc80;
    }
    ctx->pc = 0x37FC78u;
    SET_GPR_U32(ctx, 31, 0x37FC80u);
    ctx->pc = 0x37FC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37FC78u;
            // 0x37fc7c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FC80u; }
        if (ctx->pc != 0x37FC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37FC80u; }
        if (ctx->pc != 0x37FC80u) { return; }
    }
    ctx->pc = 0x37FC80u;
label_37fc80:
    // 0x37fc80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37fc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37fc84:
    // 0x37fc84: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37fc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37fc88:
    // 0x37fc88: 0x320f809  jalr        $t9
label_37fc8c:
    if (ctx->pc == 0x37FC8Cu) {
        ctx->pc = 0x37FC8Cu;
            // 0x37fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37FC90u;
        goto label_37fc90;
    }
    ctx->pc = 0x37FC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37FC90u);
        ctx->pc = 0x37FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FC88u;
            // 0x37fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37FC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37FC90u; }
            if (ctx->pc != 0x37FC90u) { return; }
        }
        }
    }
    ctx->pc = 0x37FC90u;
label_37fc90:
    // 0x37fc90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37fc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37fc94:
    // 0x37fc94: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37fc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37fc98:
    // 0x37fc98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37fc98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37fc9c:
    // 0x37fc9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37fca0:
    // 0x37fca0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37fca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37fca4:
    // 0x37fca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37fca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37fca8:
    // 0x37fca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37fca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37fcac:
    // 0x37fcac: 0x3e00008  jr          $ra
label_37fcb0:
    if (ctx->pc == 0x37FCB0u) {
        ctx->pc = 0x37FCB0u;
            // 0x37fcb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37FCB4u;
        goto label_37fcb4;
    }
    ctx->pc = 0x37FCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37FCACu;
            // 0x37fcb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37FCB4u;
label_37fcb4:
    // 0x37fcb4: 0x0  nop
    ctx->pc = 0x37fcb4u;
    // NOP
label_37fcb8:
    // 0x37fcb8: 0x0  nop
    ctx->pc = 0x37fcb8u;
    // NOP
label_37fcbc:
    // 0x37fcbc: 0x0  nop
    ctx->pc = 0x37fcbcu;
    // NOP
}
