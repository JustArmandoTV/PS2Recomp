#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B910
// Address: 0x51b910 - 0x51ba10
void sub_0051B910_0x51b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B910_0x51b910");
#endif

    switch (ctx->pc) {
        case 0x51b998u: goto label_51b998;
        case 0x51b9f0u: goto label_51b9f0;
        default: break;
    }

    ctx->pc = 0x51b910u;

    // 0x51b910: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b914: 0x24425a88  addiu       $v0, $v0, 0x5A88
    ctx->pc = 0x51b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23176));
    // 0x51b918: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51b918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51b91c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x51b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x51b920: 0xac44d120  sw          $a0, -0x2EE0($v0)
    ctx->pc = 0x51b920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955296), GPR_U32(ctx, 4));
    // 0x51b924: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b928: 0x24425a98  addiu       $v0, $v0, 0x5A98
    ctx->pc = 0x51b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23192));
    // 0x51b92c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51b930: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b934: 0x24425ab0  addiu       $v0, $v0, 0x5AB0
    ctx->pc = 0x51b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23216));
    // 0x51b938: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51b938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51b93c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b940: 0x24425abc  addiu       $v0, $v0, 0x5ABC
    ctx->pc = 0x51b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23228));
    // 0x51b944: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51b944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51b948: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51b948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x51b94c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51b94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b950: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x51b950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x51b954: 0x3e00008  jr          $ra
    ctx->pc = 0x51B954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B954u;
            // 0x51b958: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B95Cu;
    // 0x51b95c: 0x0  nop
    ctx->pc = 0x51b95cu;
    // NOP
    // 0x51b960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51b96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b970: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x51B970u;
    {
        const bool branch_taken_0x51b970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51b970) {
            ctx->pc = 0x51B974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51B970u;
            // 0x51b974: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51B99Cu;
            goto label_51b99c;
        }
    }
    ctx->pc = 0x51B978u;
    // 0x51b978: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51b97c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51b980: 0x24635a98  addiu       $v1, $v1, 0x5A98
    ctx->pc = 0x51b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23192));
    // 0x51b984: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51b984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51b988: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51B988u;
    {
        const bool branch_taken_0x51b988 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x51B98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B988u;
            // 0x51b98c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b988) {
            ctx->pc = 0x51B998u;
            goto label_51b998;
        }
    }
    ctx->pc = 0x51B990u;
    // 0x51b990: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51B990u;
    SET_GPR_U32(ctx, 31, 0x51B998u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B998u; }
        if (ctx->pc != 0x51B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B998u; }
        if (ctx->pc != 0x51B998u) { return; }
    }
    ctx->pc = 0x51B998u;
label_51b998:
    // 0x51b998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b99c:
    // 0x51b99c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x51B9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B9A4u;
            // 0x51b9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B9ACu;
    // 0x51b9ac: 0x0  nop
    ctx->pc = 0x51b9acu;
    // NOP
    // 0x51b9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b9b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51b9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b9c0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51B9C0u;
    {
        const bool branch_taken_0x51b9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51b9c0) {
            ctx->pc = 0x51B9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51B9C0u;
            // 0x51b9c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51B9F4u;
            goto label_51b9f4;
        }
    }
    ctx->pc = 0x51B9C8u;
    // 0x51b9c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b9cc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51b9d0: 0x24425a88  addiu       $v0, $v0, 0x5A88
    ctx->pc = 0x51b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23176));
    // 0x51b9d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51b9d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51b9d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51b9dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x51b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x51b9e0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51B9E0u;
    {
        const bool branch_taken_0x51b9e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B9E0u;
            // 0x51b9e4: 0xac40d120  sw          $zero, -0x2EE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b9e0) {
            ctx->pc = 0x51B9F0u;
            goto label_51b9f0;
        }
    }
    ctx->pc = 0x51B9E8u;
    // 0x51b9e8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51B9E8u;
    SET_GPR_U32(ctx, 31, 0x51B9F0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B9F0u; }
        if (ctx->pc != 0x51B9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B9F0u; }
        if (ctx->pc != 0x51B9F0u) { return; }
    }
    ctx->pc = 0x51B9F0u;
label_51b9f0:
    // 0x51b9f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b9f4:
    // 0x51b9f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x51B9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B9FCu;
            // 0x51ba00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BA04u;
    // 0x51ba04: 0x0  nop
    ctx->pc = 0x51ba04u;
    // NOP
    // 0x51ba08: 0x0  nop
    ctx->pc = 0x51ba08u;
    // NOP
    // 0x51ba0c: 0x0  nop
    ctx->pc = 0x51ba0cu;
    // NOP
}
