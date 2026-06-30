#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169FA0
// Address: 0x169fa0 - 0x16a010
void sub_00169FA0_0x169fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169FA0_0x169fa0");
#endif

    switch (ctx->pc) {
        case 0x169fa0u: goto label_169fa0;
        case 0x169fa4u: goto label_169fa4;
        case 0x169fa8u: goto label_169fa8;
        case 0x169facu: goto label_169fac;
        case 0x169fb0u: goto label_169fb0;
        case 0x169fb4u: goto label_169fb4;
        case 0x169fb8u: goto label_169fb8;
        case 0x169fbcu: goto label_169fbc;
        case 0x169fc0u: goto label_169fc0;
        case 0x169fc4u: goto label_169fc4;
        case 0x169fc8u: goto label_169fc8;
        case 0x169fccu: goto label_169fcc;
        case 0x169fd0u: goto label_169fd0;
        case 0x169fd4u: goto label_169fd4;
        case 0x169fd8u: goto label_169fd8;
        case 0x169fdcu: goto label_169fdc;
        case 0x169fe0u: goto label_169fe0;
        case 0x169fe4u: goto label_169fe4;
        case 0x169fe8u: goto label_169fe8;
        case 0x169fecu: goto label_169fec;
        case 0x169ff0u: goto label_169ff0;
        case 0x169ff4u: goto label_169ff4;
        case 0x169ff8u: goto label_169ff8;
        case 0x169ffcu: goto label_169ffc;
        case 0x16a000u: goto label_16a000;
        case 0x16a004u: goto label_16a004;
        case 0x16a008u: goto label_16a008;
        case 0x16a00cu: goto label_16a00c;
        default: break;
    }

    ctx->pc = 0x169fa0u;

label_169fa0:
    // 0x169fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169fa4:
    // 0x169fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_169fa8:
    // 0x169fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169fac:
    // 0x169fac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_169fb0:
    // 0x169fb0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x169fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169fb4:
    // 0x169fb4: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
label_169fb8:
    if (ctx->pc == 0x169FB8u) {
        ctx->pc = 0x169FB8u;
            // 0x169fb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x169FBCu;
        goto label_169fbc;
    }
    ctx->pc = 0x169FB4u;
    {
        const bool branch_taken_0x169fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fb4) {
            ctx->pc = 0x169FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169FB4u;
            // 0x169fb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A004u;
            goto label_16a004;
        }
    }
    ctx->pc = 0x169FBCu;
label_169fbc:
    // 0x169fbc: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_169fc0:
    // 0x169fc0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_169fc4:
    if (ctx->pc == 0x169FC4u) {
        ctx->pc = 0x169FC4u;
            // 0x169fc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x169FC8u;
        goto label_169fc8;
    }
    ctx->pc = 0x169FC0u;
    {
        const bool branch_taken_0x169fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169fc0) {
            ctx->pc = 0x169FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169FC0u;
            // 0x169fc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A004u;
            goto label_16a004;
        }
    }
    ctx->pc = 0x169FC8u;
label_169fc8:
    // 0x169fc8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_169fcc:
    // 0x169fcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169fd0:
    // 0x169fd0: 0x8c437ab0  lw          $v1, 0x7AB0($v0)
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31408)));
label_169fd4:
    // 0x169fd4: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_169fd8:
    if (ctx->pc == 0x169FD8u) {
        ctx->pc = 0x169FD8u;
            // 0x169fd8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x169FDCu;
        goto label_169fdc;
    }
    ctx->pc = 0x169FD4u;
    {
        const bool branch_taken_0x169fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x169fd4) {
            ctx->pc = 0x169FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169FD4u;
            // 0x169fd8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169FF0u;
            goto label_169ff0;
        }
    }
    ctx->pc = 0x169FDCu;
label_169fdc:
    // 0x169fdc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_169fe0:
    // 0x169fe0: 0xc059ff6  jal         func_167FD8
label_169fe4:
    if (ctx->pc == 0x169FE4u) {
        ctx->pc = 0x169FE4u;
            // 0x169fe4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x169FE8u;
        goto label_169fe8;
    }
    ctx->pc = 0x169FE0u;
    SET_GPR_U32(ctx, 31, 0x169FE8u);
    ctx->pc = 0x169FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FE0u;
            // 0x169fe4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167FD8u;
    if (runtime->hasFunction(0x167FD8u)) {
        auto targetFn = runtime->lookupFunction(0x167FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FE8u; }
        if (ctx->pc != 0x169FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167FD8_0x167fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FE8u; }
        if (ctx->pc != 0x169FE8u) { return; }
    }
    ctx->pc = 0x169FE8u;
label_169fe8:
    // 0x169fe8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x169fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169fec:
    // 0x169fec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_169ff0:
    // 0x169ff0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x169ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_169ff4:
    // 0x169ff4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_169ff8:
    // 0x169ff8: 0x40f809  jalr        $v0
label_169ffc:
    if (ctx->pc == 0x169FFCu) {
        ctx->pc = 0x169FFCu;
            // 0x169ffc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A000u;
        goto label_16a000;
    }
    ctx->pc = 0x169FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A000u);
        ctx->pc = 0x169FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169FF8u;
            // 0x169ffc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16A000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16A000u; }
            if (ctx->pc != 0x16A000u) { return; }
        }
        }
    }
    ctx->pc = 0x16A000u;
label_16a000:
    // 0x16a000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a004:
    // 0x16a004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a008:
    // 0x16a008: 0x3e00008  jr          $ra
label_16a00c:
    if (ctx->pc == 0x16A00Cu) {
        ctx->pc = 0x16A00Cu;
            // 0x16a00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16A010u;
        goto label_fallthrough_0x16a008;
    }
    ctx->pc = 0x16A008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A008u;
            // 0x16a00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16a008:
    ctx->pc = 0x16A010u;
}
