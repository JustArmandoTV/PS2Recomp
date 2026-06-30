#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160930
// Address: 0x160930 - 0x1609c0
void sub_00160930_0x160930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160930_0x160930");
#endif

    switch (ctx->pc) {
        case 0x160964u: goto label_160964;
        case 0x1609a4u: goto label_1609a4;
        default: break;
    }

    ctx->pc = 0x160930u;

    // 0x160930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160934: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x160934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16093c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x16093cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x160940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160944: 0x24aa000c  addiu       $t2, $a1, 0xC
    ctx->pc = 0x160944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x160948: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x160948u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16094c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16094cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160950: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x160950u;
    {
        const bool branch_taken_0x160950 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x160954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160950u;
            // 0x160954: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160950) {
            ctx->pc = 0x160998u;
            goto label_160998;
        }
    }
    ctx->pc = 0x160958u;
    // 0x160958: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x160958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16095c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x16095cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160960: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x160960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_160964:
    // 0x160964: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x160964u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x160968: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x160968u;
    {
        const bool branch_taken_0x160968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160968u;
            // 0x16096c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160968) {
            ctx->pc = 0x160980u;
            goto label_160980;
        }
    }
    ctx->pc = 0x160970u;
    // 0x160970: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x160970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x160974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160974u;
    {
        const bool branch_taken_0x160974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160974u;
            // 0x160978: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160974) {
            ctx->pc = 0x160990u;
            goto label_160990;
        }
    }
    ctx->pc = 0x16097Cu;
    // 0x16097c: 0x0  nop
    ctx->pc = 0x16097cu;
    // NOP
label_160980:
    // 0x160980: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x160980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x160984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16098c: 0x0  nop
    ctx->pc = 0x16098cu;
    // NOP
label_160990:
    // 0x160990: 0x5520fff4  bnel        $t1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x160990u;
    {
        const bool branch_taken_0x160990 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x160990) {
            ctx->pc = 0x160994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160990u;
            // 0x160994: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160964u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160964;
        }
    }
    ctx->pc = 0x160998u;
label_160998:
    // 0x160998: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x160998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16099c: 0xc058394  jal         func_160E50
    ctx->pc = 0x16099Cu;
    SET_GPR_U32(ctx, 31, 0x1609A4u);
    ctx->pc = 0x1609A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16099Cu;
            // 0x1609a0: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160E50u;
    if (runtime->hasFunction(0x160E50u)) {
        auto targetFn = runtime->lookupFunction(0x160E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609A4u; }
        if (ctx->pc != 0x1609A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160E50_0x160e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609A4u; }
        if (ctx->pc != 0x1609A4u) { return; }
    }
    ctx->pc = 0x1609A4u;
label_1609a4:
    // 0x1609a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1609a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1609a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1609a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1609ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1609acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1609b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1609B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1609B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609B0u;
            // 0x1609b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1609B8u;
    // 0x1609b8: 0x0  nop
    ctx->pc = 0x1609b8u;
    // NOP
    // 0x1609bc: 0x0  nop
    ctx->pc = 0x1609bcu;
    // NOP
}
