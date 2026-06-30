#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001179A0
// Address: 0x1179a0 - 0x117a50
void sub_001179A0_0x1179a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001179A0_0x1179a0");
#endif

    switch (ctx->pc) {
        case 0x117a10u: goto label_117a10;
        case 0x117a20u: goto label_117a20;
        case 0x117a30u: goto label_117a30;
        default: break;
    }

    ctx->pc = 0x1179a0u;

label_1179a0:
    // 0x1179a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1179a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1179a4: 0x2443fa48  addiu       $v1, $v0, -0x5B8
    ctx->pc = 0x1179a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x1179a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1179a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1179ac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1179ACu;
    {
        const bool branch_taken_0x1179ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1179ac) {
            ctx->pc = 0x1179C0u;
            goto label_1179c0;
        }
    }
    ctx->pc = 0x1179B4u;
    // 0x1179b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1179b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1179b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1179B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1179B8u;
            // 0x1179bc: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1179C0u;
label_1179c0:
    // 0x1179c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1179C0u;
    {
        const bool branch_taken_0x1179c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1179c0) {
            ctx->pc = 0x1179D0u;
            goto label_1179d0;
        }
    }
    ctx->pc = 0x1179C8u;
    // 0x1179c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1179c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1179cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1179ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1179d0:
    // 0x1179d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1179D0u;
    {
        const bool branch_taken_0x1179d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1179d0) {
            ctx->pc = 0x1179E8u;
            goto label_1179e8;
        }
    }
    ctx->pc = 0x1179D8u;
    // 0x1179d8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1179d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1179dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1179dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1179e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1179e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1179e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1179e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1179e8:
    // 0x1179e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1179E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1179E8u;
            // 0x1179ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1179F0u;
    // 0x1179f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1179f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1179f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1179f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1179f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1179f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1179fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1179fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117a08: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117A08u;
    SET_GPR_U32(ctx, 31, 0x117A10u);
    ctx->pc = 0x117A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117A08u;
            // 0x117a0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A10u; }
        if (ctx->pc != 0x117A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A10u; }
        if (ctx->pc != 0x117A10u) { return; }
    }
    ctx->pc = 0x117A10u;
label_117a10:
    // 0x117a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x117a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a18: 0xc045e68  jal         func_1179A0
    ctx->pc = 0x117A18u;
    SET_GPR_U32(ctx, 31, 0x117A20u);
    ctx->pc = 0x117A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117A18u;
            // 0x117a1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179A0u;
    goto label_1179a0;
    ctx->pc = 0x117A20u;
label_117a20:
    // 0x117a20: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x117A20u;
    {
        const bool branch_taken_0x117a20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A20u;
            // 0x117a24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a20) {
            ctx->pc = 0x117A30u;
            goto label_117a30;
        }
    }
    ctx->pc = 0x117A28u;
    // 0x117a28: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117A28u;
    SET_GPR_U32(ctx, 31, 0x117A30u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A30u; }
        if (ctx->pc != 0x117A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A30u; }
        if (ctx->pc != 0x117A30u) { return; }
    }
    ctx->pc = 0x117A30u;
label_117a30:
    // 0x117a30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a44: 0x3e00008  jr          $ra
    ctx->pc = 0x117A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A44u;
            // 0x117a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117A4Cu;
    // 0x117a4c: 0x0  nop
    ctx->pc = 0x117a4cu;
    // NOP
}
