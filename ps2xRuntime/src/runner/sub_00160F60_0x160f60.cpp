#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160F60
// Address: 0x160f60 - 0x161180
void sub_00160F60_0x160f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160F60_0x160f60");
#endif

    switch (ctx->pc) {
        case 0x160f84u: goto label_160f84;
        case 0x161010u: goto label_161010;
        case 0x16105cu: goto label_16105c;
        case 0x1610d8u: goto label_1610d8;
        case 0x161124u: goto label_161124;
        default: break;
    }

    ctx->pc = 0x160f60u;

    // 0x160f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x160f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160f6c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x160f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x160f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x160f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x160f78: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x160f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x160f7c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x160F7Cu;
    {
        const bool branch_taken_0x160f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F7Cu;
            // 0x160f80: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f7c) {
            ctx->pc = 0x161128u;
            goto label_161128;
        }
    }
    ctx->pc = 0x160F84u;
label_160f84:
    // 0x160f84: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x160f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x160f88: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x160f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x160f8c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x160f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160f90: 0x14870035  bne         $a0, $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x160F90u;
    {
        const bool branch_taken_0x160f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x160f90) {
            ctx->pc = 0x161068u;
            goto label_161068;
        }
    }
    ctx->pc = 0x160F98u;
    // 0x160f98: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x160f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x160f9c: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x160F9Cu;
    {
        const bool branch_taken_0x160f9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f9c) {
            ctx->pc = 0x160FF8u;
            goto label_160ff8;
        }
    }
    ctx->pc = 0x160FA4u;
    // 0x160fa4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x160fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x160fa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160fac: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x160facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x160fb0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x160fb0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x160fb4: 0x14c50010  bne         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x160FB4u;
    {
        const bool branch_taken_0x160fb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x160fb4) {
            ctx->pc = 0x160FF8u;
            goto label_160ff8;
        }
    }
    ctx->pc = 0x160FBCu;
    // 0x160fbc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x160fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x160fc0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x160fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x160fc4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x160fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x160fc8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x160fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x160fcc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x160fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x160fd0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x160fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x160fd4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x160fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160fd8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x160fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x160fdc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x160fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x160fe0: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x160fe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x160fe4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x160fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160fe8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x160fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x160fec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x160FECu;
    {
        const bool branch_taken_0x160fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160FECu;
            // 0x160ff0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fec) {
            ctx->pc = 0x161128u;
            goto label_161128;
        }
    }
    ctx->pc = 0x160FF4u;
    // 0x160ff4: 0x0  nop
    ctx->pc = 0x160ff4u;
    // NOP
label_160ff8:
    // 0x160ff8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x160ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x160ffc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160FFCu;
    {
        const bool branch_taken_0x160ffc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x160ffc) {
            ctx->pc = 0x161010u;
            goto label_161010;
        }
    }
    ctx->pc = 0x161004u;
    // 0x161004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161008: 0xc058480  jal         func_161200
    ctx->pc = 0x161008u;
    SET_GPR_U32(ctx, 31, 0x161010u);
    ctx->pc = 0x16100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161008u;
            // 0x16100c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161200u;
    if (runtime->hasFunction(0x161200u)) {
        auto targetFn = runtime->lookupFunction(0x161200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161010u; }
        if (ctx->pc != 0x161010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161200_0x161200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161010u; }
        if (ctx->pc != 0x161010u) { return; }
    }
    ctx->pc = 0x161010u;
label_161010:
    // 0x161010: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161014: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x161014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x161018: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x161018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x16101c: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x16101cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161020: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x161020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x161024: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x161024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161028: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x161028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x16102c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161030: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x161030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161034: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x161038: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x161038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16103c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x161040: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x161040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x161044: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x161044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x161048: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x161048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16104c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161050: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x161054: 0xc058460  jal         func_161180
    ctx->pc = 0x161054u;
    SET_GPR_U32(ctx, 31, 0x16105Cu);
    ctx->pc = 0x161058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161054u;
            // 0x161058: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161180u;
    if (runtime->hasFunction(0x161180u)) {
        auto targetFn = runtime->lookupFunction(0x161180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16105Cu; }
        if (ctx->pc != 0x16105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161180_0x161180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16105Cu; }
        if (ctx->pc != 0x16105Cu) { return; }
    }
    ctx->pc = 0x16105Cu;
label_16105c:
    // 0x16105c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x16105Cu;
    {
        const bool branch_taken_0x16105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16105c) {
            ctx->pc = 0x161128u;
            goto label_161128;
        }
    }
    ctx->pc = 0x161064u;
    // 0x161064: 0x0  nop
    ctx->pc = 0x161064u;
    // NOP
label_161068:
    // 0x161068: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x161068u;
    {
        const bool branch_taken_0x161068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x161068) {
            ctx->pc = 0x1610C0u;
            goto label_1610c0;
        }
    }
    ctx->pc = 0x161070u;
    // 0x161070: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x161070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x161074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161078: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x161078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x16107c: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x16107cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x161080: 0x14c5000f  bne         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x161080u;
    {
        const bool branch_taken_0x161080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x161080) {
            ctx->pc = 0x1610C0u;
            goto label_1610c0;
        }
    }
    ctx->pc = 0x161088u;
    // 0x161088: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x161088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16108c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x16108cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x161090: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x161090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x161094: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x161098: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x161098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16109c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x16109cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1610a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1610a4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1610a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1610a8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1610ac: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1610b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1610b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1610b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1610b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1610b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1610B8u;
    {
        const bool branch_taken_0x1610b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1610BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1610B8u;
            // 0x1610bc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610b8) {
            ctx->pc = 0x161128u;
            goto label_161128;
        }
    }
    ctx->pc = 0x1610C0u;
label_1610c0:
    // 0x1610c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1610c4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1610C4u;
    {
        const bool branch_taken_0x1610c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1610c4) {
            ctx->pc = 0x1610D8u;
            goto label_1610d8;
        }
    }
    ctx->pc = 0x1610CCu;
    // 0x1610cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1610ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610d0: 0xc058460  jal         func_161180
    ctx->pc = 0x1610D0u;
    SET_GPR_U32(ctx, 31, 0x1610D8u);
    ctx->pc = 0x1610D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1610D0u;
            // 0x1610d4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161180u;
    if (runtime->hasFunction(0x161180u)) {
        auto targetFn = runtime->lookupFunction(0x161180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1610D8u; }
        if (ctx->pc != 0x1610D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161180_0x161180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1610D8u; }
        if (ctx->pc != 0x1610D8u) { return; }
    }
    ctx->pc = 0x1610D8u;
label_1610d8:
    // 0x1610d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1610d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1610dc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1610dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1610e0: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1610e4: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x1610e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1610e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1610e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1610ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1610ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1610f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1610f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1610f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1610f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1610f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1610f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1610fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1610fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x161100: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x161100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161104: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x161108: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x161108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x16110c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x16110cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x161110: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161114: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x161114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161118: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16111c: 0xc058480  jal         func_161200
    ctx->pc = 0x16111Cu;
    SET_GPR_U32(ctx, 31, 0x161124u);
    ctx->pc = 0x161120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16111Cu;
            // 0x161120: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161200u;
    if (runtime->hasFunction(0x161200u)) {
        auto targetFn = runtime->lookupFunction(0x161200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161124u; }
        if (ctx->pc != 0x161124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161200_0x161200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161124u; }
        if (ctx->pc != 0x161124u) { return; }
    }
    ctx->pc = 0x161124u;
label_161124:
    // 0x161124: 0x0  nop
    ctx->pc = 0x161124u;
    // NOP
label_161128:
    // 0x161128: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16112c: 0x1206000a  beq         $s0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x16112Cu;
    {
        const bool branch_taken_0x16112c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x16112c) {
            ctx->pc = 0x161158u;
            goto label_161158;
        }
    }
    ctx->pc = 0x161134u;
    // 0x161134: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161138: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x161138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x16113c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161140: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x161140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x161144: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x161148: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x161148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x16114c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x16114cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x161150: 0x50a3ff8c  beql        $a1, $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x161150u;
    {
        const bool branch_taken_0x161150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x161150) {
            ctx->pc = 0x161154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161150u;
            // 0x161154: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160f84;
        }
    }
    ctx->pc = 0x161158u;
label_161158:
    // 0x161158: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16115c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x16115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x161160: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x161160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x161164: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x161164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x161168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16116c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16116cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161170: 0x3e00008  jr          $ra
    ctx->pc = 0x161170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161170u;
            // 0x161174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161178u;
    // 0x161178: 0x0  nop
    ctx->pc = 0x161178u;
    // NOP
    // 0x16117c: 0x0  nop
    ctx->pc = 0x16117cu;
    // NOP
}
