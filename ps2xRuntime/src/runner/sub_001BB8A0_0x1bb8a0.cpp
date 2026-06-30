#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB8A0
// Address: 0x1bb8a0 - 0x1bb978
void sub_001BB8A0_0x1bb8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB8A0_0x1bb8a0");
#endif

    switch (ctx->pc) {
        case 0x1bb8e0u: goto label_1bb8e0;
        case 0x1bb8f8u: goto label_1bb8f8;
        default: break;
    }

    ctx->pc = 0x1bb8a0u;

    // 0x1bb8a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1bb8a4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1bb8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1bb8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8ac: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1bb8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1bb8b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bb8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8b4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1bb8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1bb8b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bb8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8bc: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1bb8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1bb8c0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bb8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bb8c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1bb8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1bb8c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb8cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1bb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1bb8d0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1bb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1bb8d4: 0x90530019  lbu         $s3, 0x19($v0)
    ctx->pc = 0x1bb8d4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1bb8d8: 0xc06edf6  jal         func_1BB7D8
    ctx->pc = 0x1BB8D8u;
    SET_GPR_U32(ctx, 31, 0x1BB8E0u);
    ctx->pc = 0x1BB8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8D8u;
            // 0x1bb8dc: 0x90500018  lbu         $s0, 0x18($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7D8u;
    if (runtime->hasFunction(0x1BB7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8E0u; }
        if (ctx->pc != 0x1BB8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB7D8_0x1bb7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8E0u; }
        if (ctx->pc != 0x1BB8E0u) { return; }
    }
    ctx->pc = 0x1BB8E0u;
label_1bb8e0:
    // 0x1bb8e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bb8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bb8e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BB8E8u;
    {
        const bool branch_taken_0x1bb8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8E8u;
            // 0x1bb8ec: 0x27a60054  addiu       $a2, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8e8) {
            ctx->pc = 0x1BB958u;
            goto label_1bb958;
        }
    }
    ctx->pc = 0x1BB8F0u;
    // 0x1bb8f0: 0xc06eeb4  jal         func_1BBAD0
    ctx->pc = 0x1BB8F0u;
    SET_GPR_U32(ctx, 31, 0x1BB8F8u);
    ctx->pc = 0x1BBAD0u;
    if (runtime->hasFunction(0x1BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8F8u; }
        if (ctx->pc != 0x1BB8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBAD0_0x1bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8F8u; }
        if (ctx->pc != 0x1BB8F8u) { return; }
    }
    ctx->pc = 0x1BB8F8u;
label_1bb8f8:
    // 0x1bb8f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BB8F8u;
    {
        const bool branch_taken_0x1bb8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8F8u;
            // 0x1bb8fc: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8f8) {
            ctx->pc = 0x1BB958u;
            goto label_1bb958;
        }
    }
    ctx->pc = 0x1BB900u;
    // 0x1bb900: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bb904: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bb904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bb908: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1bb90c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1bb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bb910: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bb910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bb914: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bb914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bb918: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bb918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bb91c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bb920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bb924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bb928: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1bb928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1bb92c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bb930: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bb934: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1bb934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb938: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB938u;
    {
        const bool branch_taken_0x1bb938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb938) {
            ctx->pc = 0x1BB93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB938u;
            // 0x1bb93c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB950u;
            goto label_1bb950;
        }
    }
    ctx->pc = 0x1BB940u;
    // 0x1bb940: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1bb940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1bb944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB944u;
    {
        const bool branch_taken_0x1bb944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB944u;
            // 0x1bb948: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb944) {
            ctx->pc = 0x1BB954u;
            goto label_1bb954;
        }
    }
    ctx->pc = 0x1BB94Cu;
    // 0x1bb94c: 0x0  nop
    ctx->pc = 0x1bb94cu;
    // NOP
label_1bb950:
    // 0x1bb950: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1bb950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_1bb954:
    // 0x1bb954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb958:
    // 0x1bb958: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1bb958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb95c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1bb95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bb960: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1bb960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bb964: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1bb964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bb968: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bb968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bb96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB96Cu;
            // 0x1bb970: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB974u;
    // 0x1bb974: 0x0  nop
    ctx->pc = 0x1bb974u;
    // NOP
}
