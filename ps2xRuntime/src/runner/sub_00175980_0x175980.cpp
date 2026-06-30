#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175980
// Address: 0x175980 - 0x175a18
void sub_00175980_0x175980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175980_0x175980");
#endif

    switch (ctx->pc) {
        case 0x1759ecu: goto label_1759ec;
        default: break;
    }

    ctx->pc = 0x175980u;

    // 0x175980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175984: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x175984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x175988: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x175988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17598c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175990: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x175990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x175994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x175994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175998: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x175998u;
    {
        const bool branch_taken_0x175998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175998u;
            // 0x17599c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175998) {
            ctx->pc = 0x175A08u;
            goto label_175a08;
        }
    }
    ctx->pc = 0x1759A0u;
    // 0x1759a0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1759a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1759a4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1759a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1759a8: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x1759a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1759ac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1759b0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1759b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1759b4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1759b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1759b8: 0x54670014  bnel        $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1759B8u;
    {
        const bool branch_taken_0x1759b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1759b8) {
            ctx->pc = 0x1759BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1759B8u;
            // 0x1759bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175A0Cu;
            goto label_175a0c;
        }
    }
    ctx->pc = 0x1759C0u;
    // 0x1759c0: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x1759c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1759c4: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x1759c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1759c8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1759c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1759cc: 0x27a70012  addiu       $a3, $sp, 0x12
    ctx->pc = 0x1759ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x1759d0: 0x27a80013  addiu       $t0, $sp, 0x13
    ctx->pc = 0x1759d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19));
    // 0x1759d4: 0x27a90014  addiu       $t1, $sp, 0x14
    ctx->pc = 0x1759d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1759d8: 0x27aa0015  addiu       $t2, $sp, 0x15
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 21));
    // 0x1759dc: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1759e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1759e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1759e4: 0xc059a84  jal         func_166A10
    ctx->pc = 0x1759E4u;
    SET_GPR_U32(ctx, 31, 0x1759ECu);
    ctx->pc = 0x1759E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1759E4u;
            // 0x1759e8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166A10u;
    if (runtime->hasFunction(0x166A10u)) {
        auto targetFn = runtime->lookupFunction(0x166A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759ECu; }
        if (ctx->pc != 0x1759ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166A10_0x166a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759ECu; }
        if (ctx->pc != 0x1759ECu) { return; }
    }
    ctx->pc = 0x1759ECu;
label_1759ec:
    // 0x1759ec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1759ECu;
    {
        const bool branch_taken_0x1759ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1759F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759ECu;
            // 0x1759f0: 0x87a30010  lh          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759ec) {
            ctx->pc = 0x175A00u;
            goto label_175a00;
        }
    }
    ctx->pc = 0x1759F4u;
    // 0x1759f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1759F4u;
    {
        const bool branch_taken_0x1759f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1759F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759F4u;
            // 0x1759f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759f4) {
            ctx->pc = 0x175A08u;
            goto label_175a08;
        }
    }
    ctx->pc = 0x1759FCu;
    // 0x1759fc: 0x0  nop
    ctx->pc = 0x1759fcu;
    // NOP
label_175a00:
    // 0x175a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x175a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_175a08:
    // 0x175a08: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x175a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175a0c:
    // 0x175a0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x175a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x175a10: 0x3e00008  jr          $ra
    ctx->pc = 0x175A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A10u;
            // 0x175a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A18u;
}
