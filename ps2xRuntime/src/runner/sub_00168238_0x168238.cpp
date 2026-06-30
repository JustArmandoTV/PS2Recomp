#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168238
// Address: 0x168238 - 0x168290
void sub_00168238_0x168238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168238_0x168238");
#endif

    switch (ctx->pc) {
        case 0x16825cu: goto label_16825c;
        case 0x16826cu: goto label_16826c;
        case 0x168274u: goto label_168274;
        default: break;
    }

    ctx->pc = 0x168238u;

    // 0x168238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16823c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168248: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16824c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168250: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x168250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168254: 0xc05a144  jal         func_168510
    ctx->pc = 0x168254u;
    SET_GPR_U32(ctx, 31, 0x16825Cu);
    ctx->pc = 0x168258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168254u;
            // 0x168258: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168510u;
    if (runtime->hasFunction(0x168510u)) {
        auto targetFn = runtime->lookupFunction(0x168510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16825Cu; }
        if (ctx->pc != 0x16825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168510_0x168510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16825Cu; }
        if (ctx->pc != 0x16825Cu) { return; }
    }
    ctx->pc = 0x16825Cu;
label_16825c:
    // 0x16825c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168264: 0xc05a0a4  jal         func_168290
    ctx->pc = 0x168264u;
    SET_GPR_U32(ctx, 31, 0x16826Cu);
    ctx->pc = 0x168268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168264u;
            // 0x168268: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168290u;
    if (runtime->hasFunction(0x168290u)) {
        auto targetFn = runtime->lookupFunction(0x168290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16826Cu; }
        if (ctx->pc != 0x16826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168290_0x168290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16826Cu; }
        if (ctx->pc != 0x16826Cu) { return; }
    }
    ctx->pc = 0x16826Cu;
label_16826c:
    // 0x16826c: 0xc05a146  jal         func_168518
    ctx->pc = 0x16826Cu;
    SET_GPR_U32(ctx, 31, 0x168274u);
    ctx->pc = 0x168270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16826Cu;
            // 0x168270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168518u;
    if (runtime->hasFunction(0x168518u)) {
        auto targetFn = runtime->lookupFunction(0x168518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168274u; }
        if (ctx->pc != 0x168274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168518_0x168518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168274u; }
        if (ctx->pc != 0x168274u) { return; }
    }
    ctx->pc = 0x168274u;
label_168274:
    // 0x168274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16827c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16827cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168284: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x168284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168288: 0x3e00008  jr          $ra
    ctx->pc = 0x168288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168288u;
            // 0x16828c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168290u;
}
