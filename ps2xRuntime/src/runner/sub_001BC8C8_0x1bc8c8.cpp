#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC8C8
// Address: 0x1bc8c8 - 0x1bc928
void sub_001BC8C8_0x1bc8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC8C8_0x1bc8c8");
#endif

    switch (ctx->pc) {
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc910u: goto label_1bc910;
        default: break;
    }

    ctx->pc = 0x1bc8c8u;

    // 0x1bc8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc8cc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1bc8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc8d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bc8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8d8: 0x2445b1e0  addiu       $a1, $v0, -0x4E20
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x1bc8dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc8e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc8e4: 0xc04b1c6  jal         func_12C718
    ctx->pc = 0x1BC8E4u;
    SET_GPR_U32(ctx, 31, 0x1BC8ECu);
    ctx->pc = 0x1BC8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8E4u;
            // 0x1bc8e8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C718u;
    if (runtime->hasFunction(0x12C718u)) {
        auto targetFn = runtime->lookupFunction(0x12C718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8ECu; }
        if (ctx->pc != 0x1BC8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C718_0x12c718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8ECu; }
        if (ctx->pc != 0x1BC8ECu) { return; }
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc8f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC8F4u;
    {
        const bool branch_taken_0x1bc8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8F4u;
            // 0x1bc8f8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8f4) {
            ctx->pc = 0x1BC914u;
            goto label_1bc914;
        }
    }
    ctx->pc = 0x1BC8FCu;
    // 0x1bc8fc: 0xc06f24a  jal         func_1BC928
    ctx->pc = 0x1BC8FCu;
    SET_GPR_U32(ctx, 31, 0x1BC904u);
    ctx->pc = 0x1BC928u;
    if (runtime->hasFunction(0x1BC928u)) {
        auto targetFn = runtime->lookupFunction(0x1BC928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC904u; }
        if (ctx->pc != 0x1BC904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC928_0x1bc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC904u; }
        if (ctx->pc != 0x1BC904u) { return; }
    }
    ctx->pc = 0x1BC904u;
label_1bc904:
    // 0x1bc904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc908: 0xc06f24a  jal         func_1BC928
    ctx->pc = 0x1BC908u;
    SET_GPR_U32(ctx, 31, 0x1BC910u);
    ctx->pc = 0x1BC90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC908u;
            // 0x1bc90c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC928u;
    if (runtime->hasFunction(0x1BC928u)) {
        auto targetFn = runtime->lookupFunction(0x1BC928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC910u; }
        if (ctx->pc != 0x1BC910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC928_0x1bc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC910u; }
        if (ctx->pc != 0x1BC910u) { return; }
    }
    ctx->pc = 0x1BC910u;
label_1bc910:
    // 0x1bc910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc914:
    // 0x1bc914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc91c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc920: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC920u;
            // 0x1bc924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC928u;
}
