#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C11B8
// Address: 0x1c11b8 - 0x1c1248
void sub_001C11B8_0x1c11b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C11B8_0x1c11b8");
#endif

    switch (ctx->pc) {
        case 0x1c11ccu: goto label_1c11cc;
        case 0x1c121cu: goto label_1c121c;
        default: break;
    }

    ctx->pc = 0x1c11b8u;

    // 0x1c11b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c11c4: 0xc071236  jal         func_1C48D8
    ctx->pc = 0x1C11C4u;
    SET_GPR_U32(ctx, 31, 0x1C11CCu);
    ctx->pc = 0x1C11C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11C4u;
            // 0x1c11c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11CCu; }
        if (ctx->pc != 0x1C11CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11CCu; }
        if (ctx->pc != 0x1C11CCu) { return; }
    }
    ctx->pc = 0x1C11CCu;
label_1c11cc:
    // 0x1c11cc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c11ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c11d0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c11d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c11d4: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c11d8: 0x24c6b928  addiu       $a2, $a2, -0x46D8
    ctx->pc = 0x1c11d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949160));
    // 0x1c11dc: 0x240501f7  addiu       $a1, $zero, 0x1F7
    ctx->pc = 0x1c11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
    // 0x1c11e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11e4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C11E4u;
    {
        const bool branch_taken_0x1c11e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11E4u;
            // 0x1c11e8: 0x2408ff9b  addiu       $t0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11e4) {
            ctx->pc = 0x1C1214u;
            goto label_1c1214;
        }
    }
    ctx->pc = 0x1C11ECu;
    // 0x1c11ec: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c11ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c11f0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C11F0u;
    {
        const bool branch_taken_0x1c11f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c11f0) {
            ctx->pc = 0x1C11F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11F0u;
            // 0x1c11f4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1228u;
            goto label_1c1228;
        }
    }
    ctx->pc = 0x1C11F8u;
    // 0x1c11f8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c11fc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c11fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c1200: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c1200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c1204: 0x24c6b928  addiu       $a2, $a2, -0x46D8
    ctx->pc = 0x1c1204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949160));
    // 0x1c1208: 0x240501fa  addiu       $a1, $zero, 0x1FA
    ctx->pc = 0x1c1208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    // 0x1c120c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c120cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1210: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c1210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c1214:
    // 0x1c1214: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C1214u;
    SET_GPR_U32(ctx, 31, 0x1C121Cu);
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C121Cu; }
        if (ctx->pc != 0x1C121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C121Cu; }
        if (ctx->pc != 0x1C121Cu) { return; }
    }
    ctx->pc = 0x1C121Cu;
label_1c121c:
    // 0x1c121c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C121Cu;
    {
        const bool branch_taken_0x1c121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C121Cu;
            // 0x1c1220: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c121c) {
            ctx->pc = 0x1C1234u;
            goto label_1c1234;
        }
    }
    ctx->pc = 0x1C1224u;
    // 0x1c1224: 0x0  nop
    ctx->pc = 0x1c1224u;
    // NOP
label_1c1228:
    // 0x1c1228: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1c1228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c122c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c1230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1234:
    // 0x1c1234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c123c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C123Cu;
            // 0x1c1240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1244u;
    // 0x1c1244: 0x0  nop
    ctx->pc = 0x1c1244u;
    // NOP
}
