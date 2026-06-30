#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180150
// Address: 0x180150 - 0x1801c8
void sub_00180150_0x180150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180150_0x180150");
#endif

    switch (ctx->pc) {
        case 0x180184u: goto label_180184;
        case 0x18019cu: goto label_18019c;
        case 0x1801a4u: goto label_1801a4;
        default: break;
    }

    ctx->pc = 0x180150u;

    // 0x180150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18015c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180160: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x180160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x180164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x180168: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x180168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18016c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x180170: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x180170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180174: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x180174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x180178: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x180178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18017c: 0xc06031a  jal         func_180C68
    ctx->pc = 0x18017Cu;
    SET_GPR_U32(ctx, 31, 0x180184u);
    ctx->pc = 0x180180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18017Cu;
            // 0x180180: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180184u; }
        if (ctx->pc != 0x180184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180184u; }
        if (ctx->pc != 0x180184u) { return; }
    }
    ctx->pc = 0x180184u;
label_180184:
    // 0x180184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18018c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18018cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180190: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x180190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180194: 0xc060072  jal         func_1801C8
    ctx->pc = 0x180194u;
    SET_GPR_U32(ctx, 31, 0x18019Cu);
    ctx->pc = 0x180198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180194u;
            // 0x180198: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1801C8u;
    if (runtime->hasFunction(0x1801C8u)) {
        auto targetFn = runtime->lookupFunction(0x1801C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18019Cu; }
        if (ctx->pc != 0x18019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001801C8_0x1801c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18019Cu; }
        if (ctx->pc != 0x18019Cu) { return; }
    }
    ctx->pc = 0x18019Cu;
label_18019c:
    // 0x18019c: 0xc06031c  jal         func_180C70
    ctx->pc = 0x18019Cu;
    SET_GPR_U32(ctx, 31, 0x1801A4u);
    ctx->pc = 0x1801A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18019Cu;
            // 0x1801a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1801A4u; }
        if (ctx->pc != 0x1801A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1801A4u; }
        if (ctx->pc != 0x1801A4u) { return; }
    }
    ctx->pc = 0x1801A4u;
label_1801a4:
    // 0x1801a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1801a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1801a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1801a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1801acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1801b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1801b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1801b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1801b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1801b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1801b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1801bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1801bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1801c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1801C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1801C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801C0u;
            // 0x1801c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1801C8u;
}
