#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012D860
// Address: 0x12d860 - 0x12daa8
void sub_0012D860_0x12d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D860_0x12d860");
#endif

    switch (ctx->pc) {
        case 0x12d890u: goto label_12d890;
        case 0x12d8dcu: goto label_12d8dc;
        case 0x12d910u: goto label_12d910;
        case 0x12d914u: goto label_12d914;
        case 0x12d97cu: goto label_12d97c;
        case 0x12d98cu: goto label_12d98c;
        case 0x12d9a0u: goto label_12d9a0;
        case 0x12d9b8u: goto label_12d9b8;
        case 0x12d9ecu: goto label_12d9ec;
        case 0x12da00u: goto label_12da00;
        case 0x12da0cu: goto label_12da0c;
        case 0x12da24u: goto label_12da24;
        default: break;
    }

    ctx->pc = 0x12d860u;

    // 0x12d860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d864: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12d864u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d86c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12d86cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12d870: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12d870u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d874: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12d874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12d878: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12d878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d880: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d884: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12d884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d888: 0x804b588  j           func_12D620
    ctx->pc = 0x12D888u;
    ctx->pc = 0x12D88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D888u;
            // 0x12d88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D620u;
    if (runtime->hasFunction(0x12D620u)) {
        auto targetFn = runtime->lookupFunction(0x12D620u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012D620_0x12d620(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12D890u;
label_12d890:
    // 0x12d890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12d894: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d894u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d898: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12d89c: 0x25ed0768  addiu       $t5, $t7, 0x768
    ctx->pc = 0x12d89cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
    // 0x12d8a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12d8a4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12d8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12d8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12d8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12d8b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12d8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12d8b8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x12d8b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12d8c0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12d8c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12d8c8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12d8cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12d8d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d8d4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x12d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x12d8d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_12d8dc:
    // 0x12d8dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12d8dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d8e0: 0x20d7021  addu        $t6, $s0, $t5
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x12d8e4: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12d8e4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12d8e8: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12d8e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x12d8ec: 0x0  nop
    ctx->pc = 0x12d8ecu;
    // NOP
    // 0x12d8f0: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D8F0u;
    {
        const bool branch_taken_0x12d8f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8F0u;
            // 0x12d8f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8f0) {
            ctx->pc = 0x12D8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d8dc;
        }
    }
    ctx->pc = 0x12D8F8u;
    // 0x12d8f8: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12d8f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d8fc: 0x160f0065  bne         $s0, $t7, . + 4 + (0x65 << 2)
    ctx->pc = 0x12D8FCu;
    {
        const bool branch_taken_0x12d8fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8FCu;
            // 0x12d900: 0x240f002b  addiu       $t7, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8fc) {
            ctx->pc = 0x12DA94u;
            goto label_12da94;
        }
    }
    ctx->pc = 0x12D904u;
    // 0x12d904: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12d904u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d908: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12d908u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d90c: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x12d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_12d910:
    // 0x12d910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12d910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12d914:
    // 0x12d914: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D914u;
    {
        const bool branch_taken_0x12d914 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D914u;
            // 0x12d918: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d914) {
            ctx->pc = 0x12D924u;
            goto label_12d924;
        }
    }
    ctx->pc = 0x12D91Cu;
    // 0x12d91c: 0x164f000c  bne         $s2, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12D91Cu;
    {
        const bool branch_taken_0x12d91c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x12d91c) {
            ctx->pc = 0x12D950u;
            goto label_12d950;
        }
    }
    ctx->pc = 0x12D924u;
label_12d924:
    // 0x12d924: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d928: 0x160f0009  bne         $s0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D928u;
    {
        const bool branch_taken_0x12d928 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D928u;
            // 0x12d92c: 0x240f0078  addiu       $t7, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d928) {
            ctx->pc = 0x12D950u;
            goto label_12d950;
        }
    }
    ctx->pc = 0x12D930u;
    // 0x12d930: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d934: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D934u;
    {
        const bool branch_taken_0x12d934 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D934u;
            // 0x12d938: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d934) {
            ctx->pc = 0x12D944u;
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D93Cu;
    // 0x12d93c: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D93Cu;
    {
        const bool branch_taken_0x12d93c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12d93c) {
            ctx->pc = 0x12D950u;
            goto label_12d950;
        }
    }
    ctx->pc = 0x12D944u;
label_12d944:
    // 0x12d944: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x12d948: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12d948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d94c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_12d950:
    // 0x12d950: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D950u;
    {
        const bool branch_taken_0x12d950 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D950u;
            // 0x12d954: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d950) {
            ctx->pc = 0x12D96Cu;
            goto label_12d96c;
        }
    }
    ctx->pc = 0x12D958u;
    // 0x12d958: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x12d958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d95c: 0x3a0e0030  xori        $t6, $s0, 0x30
    ctx->pc = 0x12d95cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)48);
    // 0x12d960: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12d960u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d964: 0x1ee900b  movn        $s2, $t7, $t6
    ctx->pc = 0x12d964u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x12d968: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x12d968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d96c:
    // 0x12d96c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d970: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d974: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x12D974u;
    SET_GPR_U32(ctx, 31, 0x12D97Cu);
    ctx->pc = 0x12D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D974u;
            // 0x12d978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D97Cu; }
        if (ctx->pc != 0x12D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D97Cu; }
        if (ctx->pc != 0x12D97Cu) { return; }
    }
    ctx->pc = 0x12D97Cu;
label_12d97c:
    // 0x12d97c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12d97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d980: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d984: 0xc049328  jal         func_124CA0
    ctx->pc = 0x12D984u;
    SET_GPR_U32(ctx, 31, 0x12D98Cu);
    ctx->pc = 0x12D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D984u;
            // 0x12d988: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124CA0u;
    if (runtime->hasFunction(0x124CA0u)) {
        auto targetFn = runtime->lookupFunction(0x124CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D98Cu; }
        if (ctx->pc != 0x12D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124CA0_0x124ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D98Cu; }
        if (ctx->pc != 0x12D98Cu) { return; }
    }
    ctx->pc = 0x12D98Cu;
label_12d98c:
    // 0x12d98c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x12d98cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d990: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d990u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d994: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x12d994u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x12d998: 0x25f60768  addiu       $s6, $t7, 0x768
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
    // 0x12d99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d9a0:
    // 0x12d9a0: 0x2167821  addu        $t7, $s0, $s6
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x12d9a4: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12d9a4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d9a8: 0x31ae0004  andi        $t6, $t5, 0x4
    ctx->pc = 0x12d9a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12d9ac: 0x11c00032  beqz        $t6, . + 4 + (0x32 << 2)
    ctx->pc = 0x12D9ACu;
    {
        const bool branch_taken_0x12d9ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9ACu;
            // 0x12d9b0: 0x31af0003  andi        $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9ac) {
            ctx->pc = 0x12DA78u;
            goto label_12da78;
        }
    }
    ctx->pc = 0x12D9B4u;
    // 0x12d9b4: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x12d9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_12d9b8:
    // 0x12d9b8: 0x212782a  slt         $t7, $s0, $s2
    ctx->pc = 0x12d9b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12d9bc: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D9BCu;
    {
        const bool branch_taken_0x12d9bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9bc) {
            ctx->pc = 0x12DA0Cu;
            goto label_12da0c;
        }
    }
    ctx->pc = 0x12D9C4u;
    // 0x12d9c4: 0x6600008  bltz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D9C4u;
    {
        const bool branch_taken_0x12d9c4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x12D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9C4u;
            // 0x12d9c8: 0x282782b  sltu        $t7, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9c4) {
            ctx->pc = 0x12D9E8u;
            goto label_12d9e8;
        }
    }
    ctx->pc = 0x12D9CCu;
    // 0x12d9cc: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D9CCu;
    {
        const bool branch_taken_0x12d9cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9cc) {
            ctx->pc = 0x12D9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9CCu;
            // 0x12d9d0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D9ECu;
            goto label_12d9ec;
        }
    }
    ctx->pc = 0x12D9D4u;
    // 0x12d9d4: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D9D4u;
    {
        const bool branch_taken_0x12d9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x12D9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9D4u;
            // 0x12d9d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9d4) {
            ctx->pc = 0x12D9F8u;
            goto label_12d9f8;
        }
    }
    ctx->pc = 0x12D9DCu;
    // 0x12d9dc: 0x3d0782a  slt         $t7, $fp, $s0
    ctx->pc = 0x12d9dcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12d9e0: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D9E0u;
    {
        const bool branch_taken_0x12d9e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9e0) {
            ctx->pc = 0x12D9F8u;
            goto label_12d9f8;
        }
    }
    ctx->pc = 0x12D9E8u;
label_12d9e8:
    // 0x12d9e8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12d9ec:
    // 0x12d9ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12d9ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d9f0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x12D9F0u;
    {
        const bool branch_taken_0x12d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9F0u;
            // 0x12d9f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9f0) {
            ctx->pc = 0x12D9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9a0;
        }
    }
    ctx->pc = 0x12D9F8u;
label_12d9f8:
    // 0x12d9f8: 0xc048ce6  jal         func_123398
    ctx->pc = 0x12D9F8u;
    SET_GPR_U32(ctx, 31, 0x12DA00u);
    ctx->pc = 0x12D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9F8u;
            // 0x12d9fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DA00u; }
        if (ctx->pc != 0x12DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DA00u; }
        if (ctx->pc != 0x12DA00u) { return; }
    }
    ctx->pc = 0x12DA00u;
label_12da00:
    // 0x12da00: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12da00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da04: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x12DA04u;
    {
        const bool branch_taken_0x12da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA04u;
            // 0x12da08: 0x202102d  daddu       $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da04) {
            ctx->pc = 0x12D9ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9ec;
        }
    }
    ctx->pc = 0x12DA0Cu;
label_12da0c:
    // 0x12da0c: 0x6610017  bgez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x12DA0Cu;
    {
        const bool branch_taken_0x12da0c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x12DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA0Cu;
            // 0x12da10: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da0c) {
            ctx->pc = 0x12DA6Cu;
            goto label_12da6c;
        }
    }
    ctx->pc = 0x12DA14u;
    // 0x12da14: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12da18: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12da1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12da20: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x12da20u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_12da24:
    // 0x12da24: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12da24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12da28: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DA28u;
    {
        const bool branch_taken_0x12da28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA28u;
            // 0x12da2c: 0x262fffff  addiu       $t7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da28) {
            ctx->pc = 0x12DA3Cu;
            goto label_12da3c;
        }
    }
    ctx->pc = 0x12DA30u;
    // 0x12da30: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12da30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12da34: 0x1f3b80b  movn        $s7, $t7, $s3
    ctx->pc = 0x12da34u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    // 0x12da38: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x12da38u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
label_12da3c:
    // 0x12da3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12da3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12da40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12da40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12da44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12da44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12da48: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12da48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12da4c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12da4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12da50: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12da50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12da54: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12da54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12da58: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12da58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12da5c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12da60: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12da60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12da64: 0x3e00008  jr          $ra
    ctx->pc = 0x12DA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA64u;
            // 0x12da68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DA6Cu;
label_12da6c:
    // 0x12da6c: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x12da6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12da70: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12DA70u;
    {
        const bool branch_taken_0x12da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA70u;
            // 0x12da74: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da70) {
            ctx->pc = 0x12DA24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12da24;
        }
    }
    ctx->pc = 0x12DA78u;
label_12da78:
    // 0x12da78: 0x11e0ffe4  beqz        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12DA78u;
    {
        const bool branch_taken_0x12da78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA78u;
            // 0x12da7c: 0x260effa9  addiu       $t6, $s0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da78) {
            ctx->pc = 0x12DA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12da0c;
        }
    }
    ctx->pc = 0x12DA80u;
    // 0x12da80: 0x260fffc9  addiu       $t7, $s0, -0x37
    ctx->pc = 0x12da80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967241));
    // 0x12da84: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x12da84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12da88: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x12da88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da8c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12DA8Cu;
    {
        const bool branch_taken_0x12da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA8Cu;
            // 0x12da90: 0x1cd800a  movz        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da8c) {
            ctx->pc = 0x12D9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d9b8;
        }
    }
    ctx->pc = 0x12DA94u;
label_12da94:
    // 0x12da94: 0x160fff9f  bne         $s0, $t7, . + 4 + (-0x61 << 2)
    ctx->pc = 0x12DA94u;
    {
        const bool branch_taken_0x12da94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x12da94) {
            ctx->pc = 0x12D914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d914;
        }
    }
    ctx->pc = 0x12DA9Cu;
    // 0x12da9c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x12DA9Cu;
    {
        const bool branch_taken_0x12da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA9Cu;
            // 0x12daa0: 0x82300000  lb          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da9c) {
            ctx->pc = 0x12D910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d910;
        }
    }
    ctx->pc = 0x12DAA4u;
    // 0x12daa4: 0x0  nop
    ctx->pc = 0x12daa4u;
    // NOP
}
