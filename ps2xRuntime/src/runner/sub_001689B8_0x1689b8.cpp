#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001689B8
// Address: 0x1689b8 - 0x168a48
void sub_001689B8_0x1689b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001689B8_0x1689b8");
#endif

    switch (ctx->pc) {
        case 0x168a0cu: goto label_168a0c;
        case 0x168a20u: goto label_168a20;
        case 0x168a28u: goto label_168a28;
        default: break;
    }

    ctx->pc = 0x1689b8u;

    // 0x1689b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1689b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1689bc: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x1689bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x1689c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1689c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1689c4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1689c8: 0x25087c87  addiu       $t0, $t0, 0x7C87
    ctx->pc = 0x1689c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31879));
    // 0x1689cc: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x1689ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1689d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1689d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1689d4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1689d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1689d8: 0x805a318  j           func_168C60
    ctx->pc = 0x1689D8u;
    ctx->pc = 0x1689DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689D8u;
            // 0x1689dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168C60u;
    if (runtime->hasFunction(0x168C60u)) {
        auto targetFn = runtime->lookupFunction(0x168C60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168C60_0x168c60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1689E0u;
    // 0x1689e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1689e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1689e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1689e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1689e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1689e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1689ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1689f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1689f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1689f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1689f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1689f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1689fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168a00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168a04: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x168A04u;
    SET_GPR_U32(ctx, 31, 0x168A0Cu);
    ctx->pc = 0x168A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A04u;
            // 0x168a08: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A0Cu; }
        if (ctx->pc != 0x168A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A0Cu; }
        if (ctx->pc != 0x168A0Cu) { return; }
    }
    ctx->pc = 0x168A0Cu;
label_168a0c:
    // 0x168a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a18: 0xc05a292  jal         func_168A48
    ctx->pc = 0x168A18u;
    SET_GPR_U32(ctx, 31, 0x168A20u);
    ctx->pc = 0x168A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A18u;
            // 0x168a1c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168A48u;
    if (runtime->hasFunction(0x168A48u)) {
        auto targetFn = runtime->lookupFunction(0x168A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A20u; }
        if (ctx->pc != 0x168A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168A48_0x168a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A20u; }
        if (ctx->pc != 0x168A20u) { return; }
    }
    ctx->pc = 0x168A20u;
label_168a20:
    // 0x168a20: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168A20u;
    SET_GPR_U32(ctx, 31, 0x168A28u);
    ctx->pc = 0x168A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A20u;
            // 0x168a24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A28u; }
        if (ctx->pc != 0x168A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A28u; }
        if (ctx->pc != 0x168A28u) { return; }
    }
    ctx->pc = 0x168A28u;
label_168a28:
    // 0x168a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168a2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168a38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168a40: 0x3e00008  jr          $ra
    ctx->pc = 0x168A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A40u;
            // 0x168a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168A48u;
}
