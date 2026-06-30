#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD4A0
// Address: 0x1cd4a0 - 0x1cd6b8
void sub_001CD4A0_0x1cd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD4A0_0x1cd4a0");
#endif

    switch (ctx->pc) {
        case 0x1cd514u: goto label_1cd514;
        case 0x1cd5ecu: goto label_1cd5ec;
        case 0x1cd68cu: goto label_1cd68c;
        default: break;
    }

    ctx->pc = 0x1cd4a0u;

    // 0x1cd4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd4a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd4ac: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cd4b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd4b4: 0x2608a70c  addiu       $t0, $s0, -0x58F4
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cd4b8: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cd4bc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1cd4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cd4c0: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1cd4c4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD4C4u;
    {
        const bool branch_taken_0x1cd4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4C4u;
            // 0x1cd4c8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4c4) {
            ctx->pc = 0x1CD52Cu;
            goto label_1cd52c;
        }
    }
    ctx->pc = 0x1CD4CCu;
    // 0x1cd4cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd4d0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd4d4: 0xa0a20ab7  sb          $v0, 0xAB7($a1)
    ctx->pc = 0x1cd4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd4d8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cd4dc: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cd4dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd4e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cd4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cd4e4: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1CD4E4u;
    {
        const bool branch_taken_0x1cd4e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4E4u;
            // 0x1cd4e8: 0x82300a  movz        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4e4) {
            ctx->pc = 0x1CD520u;
            goto label_1cd520;
        }
    }
    ctx->pc = 0x1CD4ECu;
    // 0x1cd4ec: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1cd4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cd4f0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD4F0u;
    {
        const bool branch_taken_0x1cd4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4f0) {
            ctx->pc = 0x1CD4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4F0u;
            // 0x1cd4f4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD524u;
            goto label_1cd524;
        }
    }
    ctx->pc = 0x1CD4F8u;
    // 0x1cd4f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cd4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cd4fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd500: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd504: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1cd504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1cd508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd50c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD50Cu;
    SET_GPR_U32(ctx, 31, 0x1CD514u);
    ctx->pc = 0x1CD510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD50Cu;
            // 0x1cd510: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD514u; }
        if (ctx->pc != 0x1CD514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD514u; }
        if (ctx->pc != 0x1CD514u) { return; }
    }
    ctx->pc = 0x1CD514u;
label_1cd514:
    // 0x1cd514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD514u;
    {
        const bool branch_taken_0x1cd514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD514u;
            // 0x1cd518: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd514) {
            ctx->pc = 0x1CD528u;
            goto label_1cd528;
        }
    }
    ctx->pc = 0x1CD51Cu;
    // 0x1cd51c: 0x0  nop
    ctx->pc = 0x1cd51cu;
    // NOP
label_1cd520:
    // 0x1cd520: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cd520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd524:
    // 0x1cd524: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cd524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cd528:
    // 0x1cd528: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd52c:
    // 0x1cd52c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd534: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD534u;
            // 0x1cd538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD53Cu;
    // 0x1cd53c: 0x0  nop
    ctx->pc = 0x1cd53cu;
    // NOP
    // 0x1cd540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd544: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x1cd544u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1cd548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd54c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cd54cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cd550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd554: 0x260ba70c  addiu       $t3, $s0, -0x58F4
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cd558: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd55c: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x1cd55cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1cd560: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x1cd560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd564: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cd568: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cd568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cd56c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CD56Cu;
    {
        const bool branch_taken_0x1cd56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD56Cu;
            // 0x1cd570: 0x240a0030  addiu       $t2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd56c) {
            ctx->pc = 0x1CD604u;
            goto label_1cd604;
        }
    }
    ctx->pc = 0x1CD574u;
    // 0x1cd574: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd578: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1cd578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd57c: 0xa0c20ab7  sb          $v0, 0xAB7($a2)
    ctx->pc = 0x1cd57cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd580: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd584: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cd584u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd588: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cd588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cd58c: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CD58Cu;
    {
        const bool branch_taken_0x1cd58c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD58Cu;
            // 0x1cd590: 0x82500a  movz        $t2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd58c) {
            ctx->pc = 0x1CD5F8u;
            goto label_1cd5f8;
        }
    }
    ctx->pc = 0x1CD594u;
    // 0x1cd594: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1cd594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cd598: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CD598u;
    {
        const bool branch_taken_0x1cd598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD598u;
            // 0x1cd59c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd598) {
            ctx->pc = 0x1CD5FCu;
            goto label_1cd5fc;
        }
    }
    ctx->pc = 0x1CD5A0u;
    // 0x1cd5a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cd5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd5a4: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD5A4u;
    {
        const bool branch_taken_0x1cd5a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5A4u;
            // 0x1cd5a8: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5a4) {
            ctx->pc = 0x1CD5D8u;
            goto label_1cd5d8;
        }
    }
    ctx->pc = 0x1CD5ACu;
    // 0x1cd5ac: 0x122001b  divu        $zero, $t1, $v0
    ctx->pc = 0x1cd5acu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x1cd5b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD5B0u;
    {
        const bool branch_taken_0x1cd5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5b0) {
            ctx->pc = 0x1CD5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5B0u;
            // 0x1cd5b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5B8u;
            goto label_1cd5b8;
        }
    }
    ctx->pc = 0x1CD5B8u;
label_1cd5b8:
    // 0x1cd5b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1cd5b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cd5bc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1cd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1cd5c0: 0x2469002d  addiu       $t1, $v1, 0x2D
    ctx->pc = 0x1cd5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1cd5c4: 0x2d2200b4  sltiu       $v0, $t1, 0xB4
    ctx->pc = 0x1cd5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x1cd5c8: 0x3403ff4c  ori         $v1, $zero, 0xFF4C
    ctx->pc = 0x1cd5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65356);
    // 0x1cd5cc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1cd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cd5d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD5D0u;
    {
        const bool branch_taken_0x1cd5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5d0) {
            ctx->pc = 0x1CD5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5D0u;
            // 0x1cd5d4: 0x3069ffff  andi        $t1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5D8u;
            goto label_1cd5d8;
        }
    }
    ctx->pc = 0x1CD5D8u;
label_1cd5d8:
    // 0x1cd5d8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cd5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cd5dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd5e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd5e4: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD5E4u;
    SET_GPR_U32(ctx, 31, 0x1CD5ECu);
    ctx->pc = 0x1CD5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5E4u;
            // 0x1cd5e8: 0x24061a00  addiu       $a2, $zero, 0x1A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5ECu; }
        if (ctx->pc != 0x1CD5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5ECu; }
        if (ctx->pc != 0x1CD5ECu) { return; }
    }
    ctx->pc = 0x1CD5ECu;
label_1cd5ec:
    // 0x1cd5ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD5ECu;
    {
        const bool branch_taken_0x1cd5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5ECu;
            // 0x1cd5f0: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5ec) {
            ctx->pc = 0x1CD600u;
            goto label_1cd600;
        }
    }
    ctx->pc = 0x1CD5F4u;
    // 0x1cd5f4: 0x0  nop
    ctx->pc = 0x1cd5f4u;
    // NOP
label_1cd5f8:
    // 0x1cd5f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd5fc:
    // 0x1cd5fc: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cd600:
    // 0x1cd600: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd604:
    // 0x1cd604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD60Cu;
            // 0x1cd610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD614u;
    // 0x1cd614: 0x0  nop
    ctx->pc = 0x1cd614u;
    // NOP
    // 0x1cd618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd61c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd624: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cd628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd62c: 0x2608a70c  addiu       $t0, $s0, -0x58F4
    ctx->pc = 0x1cd62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cd630: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cd630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cd634: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1cd634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cd638: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1cd63c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD63Cu;
    {
        const bool branch_taken_0x1cd63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD63Cu;
            // 0x1cd640: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd63c) {
            ctx->pc = 0x1CD6A4u;
            goto label_1cd6a4;
        }
    }
    ctx->pc = 0x1CD644u;
    // 0x1cd644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd648: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd64c: 0xa0a20ab7  sb          $v0, 0xAB7($a1)
    ctx->pc = 0x1cd64cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd650: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1cd650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cd654: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cd654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd658: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cd65c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1CD65Cu;
    {
        const bool branch_taken_0x1cd65c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD65Cu;
            // 0x1cd660: 0x82300a  movz        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd65c) {
            ctx->pc = 0x1CD698u;
            goto label_1cd698;
        }
    }
    ctx->pc = 0x1CD664u;
    // 0x1cd664: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1cd664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cd668: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CD668u;
    {
        const bool branch_taken_0x1cd668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd668) {
            ctx->pc = 0x1CD66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD668u;
            // 0x1cd66c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD69Cu;
            goto label_1cd69c;
        }
    }
    ctx->pc = 0x1CD670u;
    // 0x1cd670: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cd670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cd674: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd678: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd67c: 0x24061100  addiu       $a2, $zero, 0x1100
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x1cd680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd684: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD684u;
    SET_GPR_U32(ctx, 31, 0x1CD68Cu);
    ctx->pc = 0x1CD688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD684u;
            // 0x1cd688: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD68Cu; }
        if (ctx->pc != 0x1CD68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD68Cu; }
        if (ctx->pc != 0x1CD68Cu) { return; }
    }
    ctx->pc = 0x1CD68Cu;
label_1cd68c:
    // 0x1cd68c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD68Cu;
    {
        const bool branch_taken_0x1cd68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD68Cu;
            // 0x1cd690: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd68c) {
            ctx->pc = 0x1CD6A0u;
            goto label_1cd6a0;
        }
    }
    ctx->pc = 0x1CD694u;
    // 0x1cd694: 0x0  nop
    ctx->pc = 0x1cd694u;
    // NOP
label_1cd698:
    // 0x1cd698: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cd698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd69c:
    // 0x1cd69c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cd6a0:
    // 0x1cd6a0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd6a4:
    // 0x1cd6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd6a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6ACu;
            // 0x1cd6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD6B4u;
    // 0x1cd6b4: 0x0  nop
    ctx->pc = 0x1cd6b4u;
    // NOP
}
