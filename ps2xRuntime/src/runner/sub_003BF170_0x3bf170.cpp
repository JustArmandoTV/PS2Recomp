#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF170
// Address: 0x3bf170 - 0x3bf320
void sub_003BF170_0x3bf170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF170_0x3bf170");
#endif

    switch (ctx->pc) {
        case 0x3bf228u: goto label_3bf228;
        case 0x3bf234u: goto label_3bf234;
        case 0x3bf23cu: goto label_3bf23c;
        case 0x3bf248u: goto label_3bf248;
        case 0x3bf278u: goto label_3bf278;
        case 0x3bf28cu: goto label_3bf28c;
        case 0x3bf2a8u: goto label_3bf2a8;
        case 0x3bf2b8u: goto label_3bf2b8;
        case 0x3bf2d0u: goto label_3bf2d0;
        case 0x3bf2ecu: goto label_3bf2ec;
        case 0x3bf2f4u: goto label_3bf2f4;
        case 0x3bf2fcu: goto label_3bf2fc;
        default: break;
    }

    ctx->pc = 0x3bf170u;

    // 0x3bf170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bf170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bf174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bf174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bf178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bf178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bf17c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bf17cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bf180: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bf180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf184: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x3bf184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3bf188: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF188u;
    {
        const bool branch_taken_0x3bf188 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF188u;
            // 0x3bf18c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf188) {
            ctx->pc = 0x3BF198u;
            goto label_3bf198;
        }
    }
    ctx->pc = 0x3BF190u;
    // 0x3bf190: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3BF190u;
    {
        const bool branch_taken_0x3bf190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF190u;
            // 0x3bf194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf190) {
            ctx->pc = 0x3BF300u;
            goto label_3bf300;
        }
    }
    ctx->pc = 0x3BF198u;
label_3bf198:
    // 0x3bf198: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x3bf198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x3bf19c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3bf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bf1a0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x3bf1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3bf1a4: 0x50a20019  beql        $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BF1A4u;
    {
        const bool branch_taken_0x3bf1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf1a4) {
            ctx->pc = 0x3BF1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF1A4u;
            // 0x3bf1a8: 0x8c83004c  lw          $v1, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF20Cu;
            goto label_3bf20c;
        }
    }
    ctx->pc = 0x3BF1ACu;
    // 0x3bf1ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bf1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bf1b0: 0x50a30053  beql        $a1, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x3BF1B0u;
    {
        const bool branch_taken_0x3bf1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bf1b0) {
            ctx->pc = 0x3BF1B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF1B0u;
            // 0x3bf1b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF300u;
            goto label_3bf300;
        }
    }
    ctx->pc = 0x3BF1B8u;
    // 0x3bf1b8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF1B8u;
    {
        const bool branch_taken_0x3bf1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf1b8) {
            ctx->pc = 0x3BF1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF1B8u;
            // 0x3bf1bc: 0x8c82004c  lw          $v0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF1C8u;
            goto label_3bf1c8;
        }
    }
    ctx->pc = 0x3BF1C0u;
    // 0x3bf1c0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3BF1C0u;
    {
        const bool branch_taken_0x3bf1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf1c0) {
            ctx->pc = 0x3BF2FCu;
            goto label_3bf2fc;
        }
    }
    ctx->pc = 0x3BF1C8u;
label_3bf1c8:
    // 0x3bf1c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BF1C8u;
    {
        const bool branch_taken_0x3bf1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bf1c8) {
            ctx->pc = 0x3BF1D8u;
            goto label_3bf1d8;
        }
    }
    ctx->pc = 0x3BF1D0u;
    // 0x3bf1d0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3BF1D0u;
    {
        const bool branch_taken_0x3bf1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF1D0u;
            // 0x3bf1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf1d0) {
            ctx->pc = 0x3BF300u;
            goto label_3bf300;
        }
    }
    ctx->pc = 0x3BF1D8u;
label_3bf1d8:
    // 0x3bf1d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bf1dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3bf1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3bf1e0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3bf1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3bf1e4: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x3bf1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3bf1e8: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3BF1E8u;
    {
        const bool branch_taken_0x3bf1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bf1e8) {
            ctx->pc = 0x3BF2FCu;
            goto label_3bf2fc;
        }
    }
    ctx->pc = 0x3BF1F0u;
    // 0x3bf1f0: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x3bf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bf1f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3bf1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3bf1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bf1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bf1fc: 0x0  nop
    ctx->pc = 0x3bf1fcu;
    // NOP
    // 0x3bf200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3bf200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3bf204: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3BF204u;
    {
        const bool branch_taken_0x3bf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF204u;
            // 0x3bf208: 0xe6000de4  swc1        $f0, 0xDE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf204) {
            ctx->pc = 0x3BF2FCu;
            goto label_3bf2fc;
        }
    }
    ctx->pc = 0x3BF20Cu;
label_3bf20c:
    // 0x3bf20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bf210: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BF210u;
    {
        const bool branch_taken_0x3bf210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bf210) {
            ctx->pc = 0x3BF2FCu;
            goto label_3bf2fc;
        }
    }
    ctx->pc = 0x3BF218u;
    // 0x3bf218: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x3bf218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3bf21c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bf21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bf220: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3BF220u;
    SET_GPR_U32(ctx, 31, 0x3BF228u);
    ctx->pc = 0x3BF224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF220u;
            // 0x3bf224: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF228u; }
        if (ctx->pc != 0x3BF228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF228u; }
        if (ctx->pc != 0x3BF228u) { return; }
    }
    ctx->pc = 0x3BF228u;
label_3bf228:
    // 0x3bf228: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bf228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bf22c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3BF22Cu;
    SET_GPR_U32(ctx, 31, 0x3BF234u);
    ctx->pc = 0x3BF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF22Cu;
            // 0x3bf230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF234u; }
        if (ctx->pc != 0x3BF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF234u; }
        if (ctx->pc != 0x3BF234u) { return; }
    }
    ctx->pc = 0x3BF234u;
label_3bf234:
    // 0x3bf234: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BF234u;
    SET_GPR_U32(ctx, 31, 0x3BF23Cu);
    ctx->pc = 0x3BF238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF234u;
            // 0x3bf238: 0x260407e0  addiu       $a0, $s0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF23Cu; }
        if (ctx->pc != 0x3BF23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF23Cu; }
        if (ctx->pc != 0x3BF23Cu) { return; }
    }
    ctx->pc = 0x3BF23Cu;
label_3bf23c:
    // 0x3bf23c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bf23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bf240: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3BF240u;
    SET_GPR_U32(ctx, 31, 0x3BF248u);
    ctx->pc = 0x3BF244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF240u;
            // 0x3bf244: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF248u; }
        if (ctx->pc != 0x3BF248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF248u; }
        if (ctx->pc != 0x3BF248u) { return; }
    }
    ctx->pc = 0x3BF248u;
label_3bf248:
    // 0x3bf248: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3bf248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3bf24c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3bf24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3bf250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bf250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bf254: 0x0  nop
    ctx->pc = 0x3bf254u;
    // NOP
    // 0x3bf258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bf258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bf25c: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x3BF25Cu;
    {
        const bool branch_taken_0x3bf25c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bf25c) {
            ctx->pc = 0x3BF2FCu;
            goto label_3bf2fc;
        }
    }
    ctx->pc = 0x3BF264u;
    // 0x3bf264: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3bf264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bf268: 0x260502e0  addiu       $a1, $s0, 0x2E0
    ctx->pc = 0x3bf268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x3bf26c: 0x26060820  addiu       $a2, $s0, 0x820
    ctx->pc = 0x3bf26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x3bf270: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x3BF270u;
    SET_GPR_U32(ctx, 31, 0x3BF278u);
    ctx->pc = 0x3BF274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF270u;
            // 0x3bf274: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (runtime->hasFunction(0x1D4BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF278u; }
        if (ctx->pc != 0x3BF278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4BF0_0x1d4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF278u; }
        if (ctx->pc != 0x3BF278u) { return; }
    }
    ctx->pc = 0x3BF278u;
label_3bf278:
    // 0x3bf278: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3bf278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bf27c: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x3bf27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x3bf280: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bf280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf284: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BF284u;
    SET_GPR_U32(ctx, 31, 0x3BF28Cu);
    ctx->pc = 0x3BF288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF284u;
            // 0x3bf288: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF28Cu; }
        if (ctx->pc != 0x3BF28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF28Cu; }
        if (ctx->pc != 0x3BF28Cu) { return; }
    }
    ctx->pc = 0x3BF28Cu;
label_3bf28c:
    // 0x3bf28c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3bf28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3bf290: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3bf290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3bf294: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf298: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3bf298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3bf29c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3bf29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3bf2a0: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BF2A0u;
    SET_GPR_U32(ctx, 31, 0x3BF2A8u);
    ctx->pc = 0x3BF2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF2A0u;
            // 0x3bf2a4: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2A8u; }
        if (ctx->pc != 0x3BF2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2A8u; }
        if (ctx->pc != 0x3BF2A8u) { return; }
    }
    ctx->pc = 0x3BF2A8u;
label_3bf2a8:
    // 0x3bf2a8: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3bf2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bf2ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3bf2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bf2b0: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x3BF2B0u;
    SET_GPR_U32(ctx, 31, 0x3BF2B8u);
    ctx->pc = 0x3BF2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF2B0u;
            // 0x3bf2b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2B8u; }
        if (ctx->pc != 0x3BF2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2B8u; }
        if (ctx->pc != 0x3BF2B8u) { return; }
    }
    ctx->pc = 0x3BF2B8u;
label_3bf2b8:
    // 0x3bf2b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3bf2b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3bf2bc: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3bf2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x3bf2c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bf2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bf2c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bf2c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3bf2c8: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BF2C8u;
    SET_GPR_U32(ctx, 31, 0x3BF2D0u);
    ctx->pc = 0x3BF2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF2C8u;
            // 0x3bf2cc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2D0u; }
        if (ctx->pc != 0x3BF2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2D0u; }
        if (ctx->pc != 0x3BF2D0u) { return; }
    }
    ctx->pc = 0x3BF2D0u;
label_3bf2d0:
    // 0x3bf2d0: 0x26020890  addiu       $v0, $s0, 0x890
    ctx->pc = 0x3bf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3bf2d4: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x3bf2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x3bf2d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3bf2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3bf2dc: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x3bf2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bf2e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3bf2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bf2e4: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BF2E4u;
    SET_GPR_U32(ctx, 31, 0x3BF2ECu);
    ctx->pc = 0x3BF2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF2E4u;
            // 0x3bf2e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2ECu; }
        if (ctx->pc != 0x3BF2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2ECu; }
        if (ctx->pc != 0x3BF2ECu) { return; }
    }
    ctx->pc = 0x3BF2ECu;
label_3bf2ec:
    // 0x3bf2ec: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BF2ECu;
    SET_GPR_U32(ctx, 31, 0x3BF2F4u);
    ctx->pc = 0x3BF2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF2ECu;
            // 0x3bf2f0: 0x260407e0  addiu       $a0, $s0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2F4u; }
        if (ctx->pc != 0x3BF2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2F4u; }
        if (ctx->pc != 0x3BF2F4u) { return; }
    }
    ctx->pc = 0x3BF2F4u;
label_3bf2f4:
    // 0x3bf2f4: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BF2F4u;
    SET_GPR_U32(ctx, 31, 0x3BF2FCu);
    ctx->pc = 0x3BF2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF2F4u;
            // 0x3bf2f8: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2FCu; }
        if (ctx->pc != 0x3BF2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF2FCu; }
        if (ctx->pc != 0x3BF2FCu) { return; }
    }
    ctx->pc = 0x3BF2FCu;
label_3bf2fc:
    // 0x3bf2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bf2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf300:
    // 0x3bf300: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bf300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf304: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bf304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bf308: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bf308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf30c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF30Cu;
            // 0x3bf310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF314u;
    // 0x3bf314: 0x0  nop
    ctx->pc = 0x3bf314u;
    // NOP
    // 0x3bf318: 0x0  nop
    ctx->pc = 0x3bf318u;
    // NOP
    // 0x3bf31c: 0x0  nop
    ctx->pc = 0x3bf31cu;
    // NOP
}
