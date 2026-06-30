#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE250
// Address: 0x1be250 - 0x1be2c8
void sub_001BE250_0x1be250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE250_0x1be250");
#endif

    switch (ctx->pc) {
        case 0x1be28cu: goto label_1be28c;
        case 0x1be2a4u: goto label_1be2a4;
        default: break;
    }

    ctx->pc = 0x1be250u;

    // 0x1be250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be25c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be260: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1be260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be264: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be268: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1be268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be26c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be270: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1be270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be274: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1be274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be278: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x1be278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be27c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1be27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be280: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be284: 0xc06f57c  jal         func_1BD5F0
    ctx->pc = 0x1BE284u;
    SET_GPR_U32(ctx, 31, 0x1BE28Cu);
    ctx->pc = 0x1BE288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE284u;
            // 0x1be288: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD5F0u;
    if (runtime->hasFunction(0x1BD5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE28Cu; }
        if (ctx->pc != 0x1BE28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD5F0_0x1bd5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE28Cu; }
        if (ctx->pc != 0x1BE28Cu) { return; }
    }
    ctx->pc = 0x1BE28Cu;
label_1be28c:
    // 0x1be28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be294: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1be294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be298: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1be298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be29c: 0xc06f8b2  jal         func_1BE2C8
    ctx->pc = 0x1BE29Cu;
    SET_GPR_U32(ctx, 31, 0x1BE2A4u);
    ctx->pc = 0x1BE2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE29Cu;
            // 0x1be2a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2C8u;
    if (runtime->hasFunction(0x1BE2C8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2A4u; }
        if (ctx->pc != 0x1BE2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE2C8_0x1be2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2A4u; }
        if (ctx->pc != 0x1BE2A4u) { return; }
    }
    ctx->pc = 0x1BE2A4u;
label_1be2a4:
    // 0x1be2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be2a8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1be2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1be2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be2b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be2b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be2b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be2b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be2bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2C0u;
            // 0x1be2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE2C8u;
}
