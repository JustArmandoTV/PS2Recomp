#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001965B0
// Address: 0x1965b0 - 0x196668
void sub_001965B0_0x1965b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001965B0_0x1965b0");
#endif

    switch (ctx->pc) {
        case 0x1965e8u: goto label_1965e8;
        case 0x196640u: goto label_196640;
        default: break;
    }

    ctx->pc = 0x1965b0u;

    // 0x1965b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1965b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1965b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1965b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1965b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1965b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1965bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1965c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1965c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1965c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1965c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1965c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965cc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1965CCu;
    {
        const bool branch_taken_0x1965cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1965D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965CCu;
            // 0x1965d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965cc) {
            ctx->pc = 0x1965E0u;
            goto label_1965e0;
        }
    }
    ctx->pc = 0x1965D4u;
    // 0x1965d4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1965d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1965d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1965D8u;
    {
        const bool branch_taken_0x1965d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965D8u;
            // 0x1965dc: 0x2444fed8  addiu       $a0, $v0, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965d8) {
            ctx->pc = 0x196614u;
            goto label_196614;
        }
    }
    ctx->pc = 0x1965E0u;
label_1965e0:
    // 0x1965e0: 0xc06599a  jal         func_196668
    ctx->pc = 0x1965E0u;
    SET_GPR_U32(ctx, 31, 0x1965E8u);
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965E8u; }
        if (ctx->pc != 0x1965E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1965E8u; }
        if (ctx->pc != 0x1965E8u) { return; }
    }
    ctx->pc = 0x1965E8u;
label_1965e8:
    // 0x1965e8: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1965e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1965ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1965ECu;
    {
        const bool branch_taken_0x1965ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965ECu;
            // 0x1965f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965ec) {
            ctx->pc = 0x196610u;
            goto label_196610;
        }
    }
    ctx->pc = 0x1965F4u;
    // 0x1965f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1965f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1965f8: 0x34a50210  ori         $a1, $a1, 0x210
    ctx->pc = 0x1965f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
    // 0x1965fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1965fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x196604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196608: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x196608u;
    ctx->pc = 0x19660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196608u;
            // 0x19660c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196610u;
label_196610:
    // 0x196610: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x196610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_196614:
    // 0x196614: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x196614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x196618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19661c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196624: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x196624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19662c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196630: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x196630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x196634: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196638: 0x3e00008  jr          $ra
    ctx->pc = 0x196638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196638u;
            // 0x19663c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196640u;
label_196640:
    // 0x196640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196644: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x196644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19664c: 0xac4601d4  sw          $a2, 0x1D4($v0)
    ctx->pc = 0x19664cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 468), GPR_U32(ctx, 6));
    // 0x196650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196654: 0xac4501d0  sw          $a1, 0x1D0($v0)
    ctx->pc = 0x196654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 5));
    // 0x196658: 0xac4701d8  sw          $a3, 0x1D8($v0)
    ctx->pc = 0x196658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 7));
    // 0x19665c: 0x80659d2  j           func_196748
    ctx->pc = 0x19665Cu;
    ctx->pc = 0x196660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19665Cu;
            // 0x196660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196748u;
    {
        auto targetFn = runtime->lookupFunction(0x196748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196664u;
    // 0x196664: 0x0  nop
    ctx->pc = 0x196664u;
    // NOP
}
