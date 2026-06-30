#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001687B8
// Address: 0x1687b8 - 0x168820
void sub_001687B8_0x1687b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001687B8_0x1687b8");
#endif

    switch (ctx->pc) {
        case 0x1687e4u: goto label_1687e4;
        case 0x1687f8u: goto label_1687f8;
        case 0x168800u: goto label_168800;
        default: break;
    }

    ctx->pc = 0x1687b8u;

    // 0x1687b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1687bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1687bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1687c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1687c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1687c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1687c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1687c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1687ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1687d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1687d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1687d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1687d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1687d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1687dc: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x1687DCu;
    SET_GPR_U32(ctx, 31, 0x1687E4u);
    ctx->pc = 0x1687E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687DCu;
            // 0x1687e0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687E4u; }
        if (ctx->pc != 0x1687E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687E4u; }
        if (ctx->pc != 0x1687E4u) { return; }
    }
    ctx->pc = 0x1687E4u;
label_1687e4:
    // 0x1687e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1687e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1687e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1687ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687f0: 0xc05a208  jal         func_168820
    ctx->pc = 0x1687F0u;
    SET_GPR_U32(ctx, 31, 0x1687F8u);
    ctx->pc = 0x1687F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687F0u;
            // 0x1687f4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168820u;
    if (runtime->hasFunction(0x168820u)) {
        auto targetFn = runtime->lookupFunction(0x168820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687F8u; }
        if (ctx->pc != 0x1687F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168820_0x168820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687F8u; }
        if (ctx->pc != 0x1687F8u) { return; }
    }
    ctx->pc = 0x1687F8u;
label_1687f8:
    // 0x1687f8: 0xc05adca  jal         func_16B728
    ctx->pc = 0x1687F8u;
    SET_GPR_U32(ctx, 31, 0x168800u);
    ctx->pc = 0x1687FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687F8u;
            // 0x1687fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168800u; }
        if (ctx->pc != 0x168800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168800u; }
        if (ctx->pc != 0x168800u) { return; }
    }
    ctx->pc = 0x168800u;
label_168800:
    // 0x168800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16880c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16880cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168810: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168814: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168818: 0x3e00008  jr          $ra
    ctx->pc = 0x168818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16881Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168818u;
            // 0x16881c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168820u;
}
