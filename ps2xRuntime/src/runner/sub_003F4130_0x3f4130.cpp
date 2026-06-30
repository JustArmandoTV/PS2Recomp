#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F4130
// Address: 0x3f4130 - 0x3f41a0
void sub_003F4130_0x3f4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4130_0x3f4130");
#endif

    switch (ctx->pc) {
        case 0x3f414cu: goto label_3f414c;
        case 0x3f416cu: goto label_3f416c;
        default: break;
    }

    ctx->pc = 0x3f4130u;

    // 0x3f4130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f4134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f4138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f413c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f4140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f4144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4148: 0x2a03000e  slti        $v1, $s0, 0xE
    ctx->pc = 0x3f4148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
label_3f414c:
    // 0x3f414c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F414Cu;
    {
        const bool branch_taken_0x3f414c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f414c) {
            ctx->pc = 0x3F4160u;
            goto label_3f4160;
        }
    }
    ctx->pc = 0x3F4154u;
    // 0x3f4154: 0x2a010014  slti        $at, $s0, 0x14
    ctx->pc = 0x3f4154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3f4158: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F4158u;
    {
        const bool branch_taken_0x3f4158 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4158) {
            ctx->pc = 0x3F4170u;
            goto label_3f4170;
        }
    }
    ctx->pc = 0x3F4160u;
label_3f4160:
    // 0x3f4160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4164: 0xc0fd080  jal         func_3F4200
    ctx->pc = 0x3F4164u;
    SET_GPR_U32(ctx, 31, 0x3F416Cu);
    ctx->pc = 0x3F4168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4164u;
            // 0x3f4168: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F416Cu; }
        if (ctx->pc != 0x3F416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F416Cu; }
        if (ctx->pc != 0x3F416Cu) { return; }
    }
    ctx->pc = 0x3F416Cu;
label_3f416c:
    // 0x3f416c: 0x0  nop
    ctx->pc = 0x3f416cu;
    // NOP
label_3f4170:
    // 0x3f4170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f4170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f4174: 0x2a030015  slti        $v1, $s0, 0x15
    ctx->pc = 0x3f4174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3f4178: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F4178u;
    {
        const bool branch_taken_0x3f4178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4178) {
            ctx->pc = 0x3F417Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4178u;
            // 0x3f417c: 0x2a03000e  slti        $v1, $s0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F414Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f414c;
        }
    }
    ctx->pc = 0x3F4180u;
    // 0x3f4180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f4180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f418c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F418Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F418Cu;
            // 0x3f4190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4194u;
    // 0x3f4194: 0x0  nop
    ctx->pc = 0x3f4194u;
    // NOP
    // 0x3f4198: 0x0  nop
    ctx->pc = 0x3f4198u;
    // NOP
    // 0x3f419c: 0x0  nop
    ctx->pc = 0x3f419cu;
    // NOP
}
