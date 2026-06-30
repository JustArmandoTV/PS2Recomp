#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197968
// Address: 0x197968 - 0x197a40
void sub_00197968_0x197968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197968_0x197968");
#endif

    switch (ctx->pc) {
        case 0x1979b8u: goto label_1979b8;
        case 0x1979d4u: goto label_1979d4;
        case 0x1979e8u: goto label_1979e8;
        case 0x1979fcu: goto label_1979fc;
        default: break;
    }

    ctx->pc = 0x197968u;

    // 0x197968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19796c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x197970: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x197970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19797c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x197980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x197980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x197984: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x197984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x197988: 0x8c920028  lw          $s2, 0x28($a0)
    ctx->pc = 0x197988u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x19798c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x197990: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x197994: 0x8c940030  lw          $s4, 0x30($a0)
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x197998: 0x1e400005  bgtz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x197998u;
    {
        const bool branch_taken_0x197998 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x19799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197998u;
            // 0x19799c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197998) {
            ctx->pc = 0x1979B0u;
            goto label_1979b0;
        }
    }
    ctx->pc = 0x1979A0u;
    // 0x1979a0: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1979A0u;
    {
        const bool branch_taken_0x1979a0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1979a0) {
            ctx->pc = 0x1979B0u;
            goto label_1979b0;
        }
    }
    ctx->pc = 0x1979A8u;
    // 0x1979a8: 0x5280001b  beql        $s4, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1979A8u;
    {
        const bool branch_taken_0x1979a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979a8) {
            ctx->pc = 0x1979ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1979A8u;
            // 0x1979ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197A18u;
            goto label_197a18;
        }
    }
    ctx->pc = 0x1979B0u;
label_1979b0:
    // 0x1979b0: 0xc065e90  jal         func_197A40
    ctx->pc = 0x1979B0u;
    SET_GPR_U32(ctx, 31, 0x1979B8u);
    ctx->pc = 0x197A40u;
    if (runtime->hasFunction(0x197A40u)) {
        auto targetFn = runtime->lookupFunction(0x197A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979B8u; }
        if (ctx->pc != 0x1979B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197A40_0x197a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979B8u; }
        if (ctx->pc != 0x1979B8u) { return; }
    }
    ctx->pc = 0x1979B8u;
label_1979b8:
    // 0x1979b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1979bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1979BCu;
    {
        const bool branch_taken_0x1979bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979bc) {
            ctx->pc = 0x1979D4u;
            goto label_1979d4;
        }
    }
    ctx->pc = 0x1979C4u;
    // 0x1979c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1979c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1979c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1979c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979cc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1979CCu;
    SET_GPR_U32(ctx, 31, 0x1979D4u);
    ctx->pc = 0x1979D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979CCu;
            // 0x1979d0: 0x248485c0  addiu       $a0, $a0, -0x7A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979D4u; }
        if (ctx->pc != 0x1979D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979D4u; }
        if (ctx->pc != 0x1979D4u) { return; }
    }
    ctx->pc = 0x1979D4u;
label_1979d4:
    // 0x1979d4: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1979D4u;
    {
        const bool branch_taken_0x1979d4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1979D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979D4u;
            // 0x1979d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979d4) {
            ctx->pc = 0x197A18u;
            goto label_197a18;
        }
    }
    ctx->pc = 0x1979DCu;
    // 0x1979dc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1979dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979e0: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x1979e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x1979e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1979e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1979e8:
    // 0x1979e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1979E8u;
    {
        const bool branch_taken_0x1979e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1979ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979E8u;
            // 0x1979ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979e8) {
            ctx->pc = 0x1979FCu;
            goto label_1979fc;
        }
    }
    ctx->pc = 0x1979F0u;
    // 0x1979f0: 0x268485e8  addiu       $a0, $s4, -0x7A18
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936040));
    // 0x1979f4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1979F4u;
    SET_GPR_U32(ctx, 31, 0x1979FCu);
    ctx->pc = 0x1979F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979F4u;
            // 0x1979f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979FCu; }
        if (ctx->pc != 0x1979FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979FCu; }
        if (ctx->pc != 0x1979FCu) { return; }
    }
    ctx->pc = 0x1979FCu;
label_1979fc:
    // 0x1979fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1979fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x197a00: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x197a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x197a04: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x197A04u;
    {
        const bool branch_taken_0x197a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197a04) {
            ctx->pc = 0x197A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197A04u;
            // 0x197a08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1979E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1979e8;
        }
    }
    ctx->pc = 0x197A0Cu;
    // 0x197a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197A0Cu;
    {
        const bool branch_taken_0x197a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A0Cu;
            // 0x197a10: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a0c) {
            ctx->pc = 0x197A1Cu;
            goto label_197a1c;
        }
    }
    ctx->pc = 0x197A14u;
    // 0x197a14: 0x0  nop
    ctx->pc = 0x197a14u;
    // NOP
label_197a18:
    // 0x197a18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x197a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_197a1c:
    // 0x197a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197a28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x197a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197a2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x197a2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197a30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x197a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197a34: 0x3e00008  jr          $ra
    ctx->pc = 0x197A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A34u;
            // 0x197a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197A3Cu;
    // 0x197a3c: 0x0  nop
    ctx->pc = 0x197a3cu;
    // NOP
}
