#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001924A0
// Address: 0x1924a0 - 0x192570
void sub_001924A0_0x1924a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001924A0_0x1924a0");
#endif

    switch (ctx->pc) {
        case 0x192530u: goto label_192530;
        default: break;
    }

    ctx->pc = 0x1924a0u;

    // 0x1924a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1924a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1924a4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1924A4u;
    {
        const bool branch_taken_0x1924a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1924A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924A4u;
            // 0x1924a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924a4) {
            ctx->pc = 0x192508u;
            goto label_192508;
        }
    }
    ctx->pc = 0x1924ACu;
    // 0x1924ac: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1924acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1924b0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1924B0u;
    {
        const bool branch_taken_0x1924b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1924B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924B0u;
            // 0x1924b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924b0) {
            ctx->pc = 0x192508u;
            goto label_192508;
        }
    }
    ctx->pc = 0x1924B8u;
    // 0x1924b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1924b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1924bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1924bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1924c0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1924C0u;
    {
        const bool branch_taken_0x1924c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1924C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924C0u;
            // 0x1924c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924c0) {
            ctx->pc = 0x192508u;
            goto label_192508;
        }
    }
    ctx->pc = 0x1924C8u;
    // 0x1924c8: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x1924c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1924cc: 0x240300ba  addiu       $v1, $zero, 0xBA
    ctx->pc = 0x1924ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1924d0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1924D0u;
    {
        const bool branch_taken_0x1924d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1924D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924D0u;
            // 0x1924d4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924d0) {
            ctx->pc = 0x192508u;
            goto label_192508;
        }
    }
    ctx->pc = 0x1924D8u;
    // 0x1924d8: 0x288200bb  slti        $v0, $a0, 0xBB
    ctx->pc = 0x1924d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
    // 0x1924dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924DCu;
    {
        const bool branch_taken_0x1924dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924dc) {
            ctx->pc = 0x1924E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1924DCu;
            // 0x1924e0: 0x240300bb  addiu       $v1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1924F0u;
            goto label_1924f0;
        }
    }
    ctx->pc = 0x1924E4u;
    // 0x1924e4: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1924e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1924E8u;
    {
        const bool branch_taken_0x1924e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924E8u;
            // 0x1924ec: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924e8) {
            ctx->pc = 0x1924F4u;
            goto label_1924f4;
        }
    }
    ctx->pc = 0x1924F0u;
label_1924f0:
    // 0x1924f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1924f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1924f4:
    // 0x1924f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924F4u;
    {
        const bool branch_taken_0x1924f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1924F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924F4u;
            // 0x1924f8: 0x2c8300bc  sltiu       $v1, $a0, 0xBC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)188) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924f4) {
            ctx->pc = 0x192508u;
            goto label_192508;
        }
    }
    ctx->pc = 0x1924FCu;
    // 0x1924fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1924FCu;
    {
        const bool branch_taken_0x1924fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924FCu;
            // 0x192500: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924fc) {
            ctx->pc = 0x192508u;
            goto label_192508;
        }
    }
    ctx->pc = 0x192504u;
    // 0x192504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192508:
    // 0x192508: 0x3e00008  jr          $ra
    ctx->pc = 0x192508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192510u;
    // 0x192510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192514: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x192514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x192518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19251c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19251cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192528: 0xc06495c  jal         func_192570
    ctx->pc = 0x192528u;
    SET_GPR_U32(ctx, 31, 0x192530u);
    ctx->pc = 0x19252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192528u;
            // 0x19252c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192570u;
    if (runtime->hasFunction(0x192570u)) {
        auto targetFn = runtime->lookupFunction(0x192570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192530u; }
        if (ctx->pc != 0x192530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192570_0x192570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192530u; }
        if (ctx->pc != 0x192530u) { return; }
    }
    ctx->pc = 0x192530u;
label_192530:
    // 0x192530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192534: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x192534u;
    {
        const bool branch_taken_0x192534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x192538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192534u;
            // 0x192538: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192534) {
            ctx->pc = 0x192558u;
            goto label_192558;
        }
    }
    ctx->pc = 0x19253Cu;
    // 0x19253c: 0xb11823  subu        $v1, $a1, $s1
    ctx->pc = 0x19253cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x192540: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x192540u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x192544: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192544u;
    {
        const bool branch_taken_0x192544 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x192548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192544u;
            // 0x192548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192544) {
            ctx->pc = 0x192558u;
            goto label_192558;
        }
    }
    ctx->pc = 0x19254Cu;
    // 0x19254c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x19254cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192550: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x192554: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x192554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_192558:
    // 0x192558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19255c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19255cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192564: 0x3e00008  jr          $ra
    ctx->pc = 0x192564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192564u;
            // 0x192568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19256Cu;
    // 0x19256c: 0x0  nop
    ctx->pc = 0x19256cu;
    // NOP
}
