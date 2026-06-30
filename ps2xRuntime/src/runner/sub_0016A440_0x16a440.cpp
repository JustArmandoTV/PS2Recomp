#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A440
// Address: 0x16a440 - 0x16a648
void sub_0016A440_0x16a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A440_0x16a440");
#endif

    switch (ctx->pc) {
        case 0x16a440u: goto label_16a440;
        case 0x16a444u: goto label_16a444;
        case 0x16a448u: goto label_16a448;
        case 0x16a44cu: goto label_16a44c;
        case 0x16a450u: goto label_16a450;
        case 0x16a454u: goto label_16a454;
        case 0x16a458u: goto label_16a458;
        case 0x16a45cu: goto label_16a45c;
        case 0x16a460u: goto label_16a460;
        case 0x16a464u: goto label_16a464;
        case 0x16a468u: goto label_16a468;
        case 0x16a46cu: goto label_16a46c;
        case 0x16a470u: goto label_16a470;
        case 0x16a474u: goto label_16a474;
        case 0x16a478u: goto label_16a478;
        case 0x16a47cu: goto label_16a47c;
        case 0x16a480u: goto label_16a480;
        case 0x16a484u: goto label_16a484;
        case 0x16a488u: goto label_16a488;
        case 0x16a48cu: goto label_16a48c;
        case 0x16a490u: goto label_16a490;
        case 0x16a494u: goto label_16a494;
        case 0x16a498u: goto label_16a498;
        case 0x16a49cu: goto label_16a49c;
        case 0x16a4a0u: goto label_16a4a0;
        case 0x16a4a4u: goto label_16a4a4;
        case 0x16a4a8u: goto label_16a4a8;
        case 0x16a4acu: goto label_16a4ac;
        case 0x16a4b0u: goto label_16a4b0;
        case 0x16a4b4u: goto label_16a4b4;
        case 0x16a4b8u: goto label_16a4b8;
        case 0x16a4bcu: goto label_16a4bc;
        case 0x16a4c0u: goto label_16a4c0;
        case 0x16a4c4u: goto label_16a4c4;
        case 0x16a4c8u: goto label_16a4c8;
        case 0x16a4ccu: goto label_16a4cc;
        case 0x16a4d0u: goto label_16a4d0;
        case 0x16a4d4u: goto label_16a4d4;
        case 0x16a4d8u: goto label_16a4d8;
        case 0x16a4dcu: goto label_16a4dc;
        case 0x16a4e0u: goto label_16a4e0;
        case 0x16a4e4u: goto label_16a4e4;
        case 0x16a4e8u: goto label_16a4e8;
        case 0x16a4ecu: goto label_16a4ec;
        case 0x16a4f0u: goto label_16a4f0;
        case 0x16a4f4u: goto label_16a4f4;
        case 0x16a4f8u: goto label_16a4f8;
        case 0x16a4fcu: goto label_16a4fc;
        case 0x16a500u: goto label_16a500;
        case 0x16a504u: goto label_16a504;
        case 0x16a508u: goto label_16a508;
        case 0x16a50cu: goto label_16a50c;
        case 0x16a510u: goto label_16a510;
        case 0x16a514u: goto label_16a514;
        case 0x16a518u: goto label_16a518;
        case 0x16a51cu: goto label_16a51c;
        case 0x16a520u: goto label_16a520;
        case 0x16a524u: goto label_16a524;
        case 0x16a528u: goto label_16a528;
        case 0x16a52cu: goto label_16a52c;
        case 0x16a530u: goto label_16a530;
        case 0x16a534u: goto label_16a534;
        case 0x16a538u: goto label_16a538;
        case 0x16a53cu: goto label_16a53c;
        case 0x16a540u: goto label_16a540;
        case 0x16a544u: goto label_16a544;
        case 0x16a548u: goto label_16a548;
        case 0x16a54cu: goto label_16a54c;
        case 0x16a550u: goto label_16a550;
        case 0x16a554u: goto label_16a554;
        case 0x16a558u: goto label_16a558;
        case 0x16a55cu: goto label_16a55c;
        case 0x16a560u: goto label_16a560;
        case 0x16a564u: goto label_16a564;
        case 0x16a568u: goto label_16a568;
        case 0x16a56cu: goto label_16a56c;
        case 0x16a570u: goto label_16a570;
        case 0x16a574u: goto label_16a574;
        case 0x16a578u: goto label_16a578;
        case 0x16a57cu: goto label_16a57c;
        case 0x16a580u: goto label_16a580;
        case 0x16a584u: goto label_16a584;
        case 0x16a588u: goto label_16a588;
        case 0x16a58cu: goto label_16a58c;
        case 0x16a590u: goto label_16a590;
        case 0x16a594u: goto label_16a594;
        case 0x16a598u: goto label_16a598;
        case 0x16a59cu: goto label_16a59c;
        case 0x16a5a0u: goto label_16a5a0;
        case 0x16a5a4u: goto label_16a5a4;
        case 0x16a5a8u: goto label_16a5a8;
        case 0x16a5acu: goto label_16a5ac;
        case 0x16a5b0u: goto label_16a5b0;
        case 0x16a5b4u: goto label_16a5b4;
        case 0x16a5b8u: goto label_16a5b8;
        case 0x16a5bcu: goto label_16a5bc;
        case 0x16a5c0u: goto label_16a5c0;
        case 0x16a5c4u: goto label_16a5c4;
        case 0x16a5c8u: goto label_16a5c8;
        case 0x16a5ccu: goto label_16a5cc;
        case 0x16a5d0u: goto label_16a5d0;
        case 0x16a5d4u: goto label_16a5d4;
        case 0x16a5d8u: goto label_16a5d8;
        case 0x16a5dcu: goto label_16a5dc;
        case 0x16a5e0u: goto label_16a5e0;
        case 0x16a5e4u: goto label_16a5e4;
        case 0x16a5e8u: goto label_16a5e8;
        case 0x16a5ecu: goto label_16a5ec;
        case 0x16a5f0u: goto label_16a5f0;
        case 0x16a5f4u: goto label_16a5f4;
        case 0x16a5f8u: goto label_16a5f8;
        case 0x16a5fcu: goto label_16a5fc;
        case 0x16a600u: goto label_16a600;
        case 0x16a604u: goto label_16a604;
        case 0x16a608u: goto label_16a608;
        case 0x16a60cu: goto label_16a60c;
        case 0x16a610u: goto label_16a610;
        case 0x16a614u: goto label_16a614;
        case 0x16a618u: goto label_16a618;
        case 0x16a61cu: goto label_16a61c;
        case 0x16a620u: goto label_16a620;
        case 0x16a624u: goto label_16a624;
        case 0x16a628u: goto label_16a628;
        case 0x16a62cu: goto label_16a62c;
        case 0x16a630u: goto label_16a630;
        case 0x16a634u: goto label_16a634;
        case 0x16a638u: goto label_16a638;
        case 0x16a63cu: goto label_16a63c;
        case 0x16a640u: goto label_16a640;
        case 0x16a644u: goto label_16a644;
        default: break;
    }

    ctx->pc = 0x16a440u;

label_16a440:
    // 0x16a440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16a444:
    // 0x16a444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16a448:
    // 0x16a448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a44c:
    // 0x16a44c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16a450:
    // 0x16a450: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16a450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a454:
    // 0x16a454: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16a458:
    // 0x16a458: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16a458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a45c:
    // 0x16a45c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16a460:
    // 0x16a460: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a464:
    // 0x16a464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a468:
    // 0x16a468: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x16a468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16a46c:
    // 0x16a46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a470:
    // 0x16a470: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16a474:
    // 0x16a474: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_16a478:
    // 0x16a478: 0xc05a148  jal         func_168520
label_16a47c:
    if (ctx->pc == 0x16A47Cu) {
        ctx->pc = 0x16A47Cu;
            // 0x16a47c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A480u;
        goto label_16a480;
    }
    ctx->pc = 0x16A478u;
    SET_GPR_U32(ctx, 31, 0x16A480u);
    ctx->pc = 0x16A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A478u;
            // 0x16a47c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A480u; }
        if (ctx->pc != 0x16A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A480u; }
        if (ctx->pc != 0x16A480u) { return; }
    }
    ctx->pc = 0x16A480u;
label_16a480:
    // 0x16a480: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_16a484:
    if (ctx->pc == 0x16A484u) {
        ctx->pc = 0x16A484u;
            // 0x16a484: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x16A488u;
        goto label_16a488;
    }
    ctx->pc = 0x16A480u;
    {
        const bool branch_taken_0x16a480 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A480u;
            // 0x16a484: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a480) {
            ctx->pc = 0x16A490u;
            goto label_16a490;
        }
    }
    ctx->pc = 0x16A488u;
label_16a488:
    // 0x16a488: 0x10000011  b           . + 4 + (0x11 << 2)
label_16a48c:
    if (ctx->pc == 0x16A48Cu) {
        ctx->pc = 0x16A48Cu;
            // 0x16a48c: 0x248437b8  addiu       $a0, $a0, 0x37B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14264));
        ctx->pc = 0x16A490u;
        goto label_16a490;
    }
    ctx->pc = 0x16A488u;
    {
        const bool branch_taken_0x16a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A488u;
            // 0x16a48c: 0x248437b8  addiu       $a0, $a0, 0x37B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a488) {
            ctx->pc = 0x16A4D0u;
            goto label_16a4d0;
        }
    }
    ctx->pc = 0x16A490u;
label_16a490:
    // 0x16a490: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
label_16a494:
    if (ctx->pc == 0x16A494u) {
        ctx->pc = 0x16A494u;
            // 0x16a494: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->pc = 0x16A498u;
        goto label_16a498;
    }
    ctx->pc = 0x16A490u;
    {
        const bool branch_taken_0x16a490 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x16A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A490u;
            // 0x16a494: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a490) {
            ctx->pc = 0x16A4A8u;
            goto label_16a4a8;
        }
    }
    ctx->pc = 0x16A498u;
label_16a498:
    // 0x16a498: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16a49c:
    // 0x16a49c: 0x1000000c  b           . + 4 + (0xC << 2)
label_16a4a0:
    if (ctx->pc == 0x16A4A0u) {
        ctx->pc = 0x16A4A0u;
            // 0x16a4a0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->pc = 0x16A4A4u;
        goto label_16a4a4;
    }
    ctx->pc = 0x16A49Cu;
    {
        const bool branch_taken_0x16a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A49Cu;
            // 0x16a4a0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a49c) {
            ctx->pc = 0x16A4D0u;
            goto label_16a4d0;
        }
    }
    ctx->pc = 0x16A4A4u;
label_16a4a4:
    // 0x16a4a4: 0x0  nop
    ctx->pc = 0x16a4a4u;
    // NOP
label_16a4a8:
    // 0x16a4a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16a4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_16a4ac:
    // 0x16a4ac: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x16a4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_16a4b0:
    // 0x16a4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16a4b4:
    if (ctx->pc == 0x16A4B4u) {
        ctx->pc = 0x16A4B4u;
            // 0x16a4b4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x16A4B8u;
        goto label_16a4b8;
    }
    ctx->pc = 0x16A4B0u;
    {
        const bool branch_taken_0x16a4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4B0u;
            // 0x16a4b4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b0) {
            ctx->pc = 0x16A4C0u;
            goto label_16a4c0;
        }
    }
    ctx->pc = 0x16A4B8u;
label_16a4b8:
    // 0x16a4b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_16a4bc:
    if (ctx->pc == 0x16A4BCu) {
        ctx->pc = 0x16A4BCu;
            // 0x16a4bc: 0x24843810  addiu       $a0, $a0, 0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14352));
        ctx->pc = 0x16A4C0u;
        goto label_16a4c0;
    }
    ctx->pc = 0x16A4B8u;
    {
        const bool branch_taken_0x16a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4B8u;
            // 0x16a4bc: 0x24843810  addiu       $a0, $a0, 0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b8) {
            ctx->pc = 0x16A4D0u;
            goto label_16a4d0;
        }
    }
    ctx->pc = 0x16A4C0u;
label_16a4c0:
    // 0x16a4c0: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_16a4c4:
    if (ctx->pc == 0x16A4C4u) {
        ctx->pc = 0x16A4C4u;
            // 0x16a4c4: 0x82240001  lb          $a0, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x16A4C8u;
        goto label_16a4c8;
    }
    ctx->pc = 0x16A4C0u;
    {
        const bool branch_taken_0x16a4c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a4c0) {
            ctx->pc = 0x16A4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4C0u;
            // 0x16a4c4: 0x82240001  lb          $a0, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A4E0u;
            goto label_16a4e0;
        }
    }
    ctx->pc = 0x16A4C8u;
label_16a4c8:
    // 0x16a4c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16a4cc:
    // 0x16a4cc: 0x24843840  addiu       $a0, $a0, 0x3840
    ctx->pc = 0x16a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14400));
label_16a4d0:
    // 0x16a4d0: 0xc059f4e  jal         func_167D38
label_16a4d4:
    if (ctx->pc == 0x16A4D4u) {
        ctx->pc = 0x16A4D8u;
        goto label_16a4d8;
    }
    ctx->pc = 0x16A4D0u;
    SET_GPR_U32(ctx, 31, 0x16A4D8u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4D8u; }
        if (ctx->pc != 0x16A4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4D8u; }
        if (ctx->pc != 0x16A4D8u) { return; }
    }
    ctx->pc = 0x16A4D8u;
label_16a4d8:
    // 0x16a4d8: 0x10000053  b           . + 4 + (0x53 << 2)
label_16a4dc:
    if (ctx->pc == 0x16A4DCu) {
        ctx->pc = 0x16A4DCu;
            // 0x16a4dc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x16A4E0u;
        goto label_16a4e0;
    }
    ctx->pc = 0x16A4D8u;
    {
        const bool branch_taken_0x16a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4D8u;
            // 0x16a4dc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4d8) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A4E0u;
label_16a4e0:
    // 0x16a4e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16a4e4:
    // 0x16a4e4: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
label_16a4e8:
    if (ctx->pc == 0x16A4E8u) {
        ctx->pc = 0x16A4E8u;
            // 0x16a4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A4ECu;
        goto label_16a4ec;
    }
    ctx->pc = 0x16A4E4u;
    {
        const bool branch_taken_0x16a4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4E4u;
            // 0x16a4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4e4) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A4ECu;
label_16a4ec:
    // 0x16a4ec: 0xc0599d2  jal         func_166748
label_16a4f0:
    if (ctx->pc == 0x16A4F0u) {
        ctx->pc = 0x16A4F4u;
        goto label_16a4f4;
    }
    ctx->pc = 0x16A4ECu;
    SET_GPR_U32(ctx, 31, 0x16A4F4u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4F4u; }
        if (ctx->pc != 0x16A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4F4u; }
        if (ctx->pc != 0x16A4F4u) { return; }
    }
    ctx->pc = 0x16A4F4u;
label_16a4f4:
    // 0x16a4f4: 0xc05c2da  jal         func_170B68
label_16a4f8:
    if (ctx->pc == 0x16A4F8u) {
        ctx->pc = 0x16A4F8u;
            // 0x16a4f8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x16A4FCu;
        goto label_16a4fc;
    }
    ctx->pc = 0x16A4F4u;
    SET_GPR_U32(ctx, 31, 0x16A4FCu);
    ctx->pc = 0x16A4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4F4u;
            // 0x16a4f8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B68u;
    if (runtime->hasFunction(0x170B68u)) {
        auto targetFn = runtime->lookupFunction(0x170B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4FCu; }
        if (ctx->pc != 0x16A4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B68_0x170b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4FCu; }
        if (ctx->pc != 0x16A4FCu) { return; }
    }
    ctx->pc = 0x16A4FCu;
label_16a4fc:
    // 0x16a4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a500:
    // 0x16a500: 0xc05a6b2  jal         func_169AC8
label_16a504:
    if (ctx->pc == 0x16A504u) {
        ctx->pc = 0x16A504u;
            // 0x16a504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A508u;
        goto label_16a508;
    }
    ctx->pc = 0x16A500u;
    SET_GPR_U32(ctx, 31, 0x16A508u);
    ctx->pc = 0x16A504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A500u;
            // 0x16a504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169AC8u;
    if (runtime->hasFunction(0x169AC8u)) {
        auto targetFn = runtime->lookupFunction(0x169AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A508u; }
        if (ctx->pc != 0x16A508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169AC8_0x169ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A508u; }
        if (ctx->pc != 0x16A508u) { return; }
    }
    ctx->pc = 0x16A508u;
label_16a508:
    // 0x16a508: 0xc0599d8  jal         func_166760
label_16a50c:
    if (ctx->pc == 0x16A50Cu) {
        ctx->pc = 0x16A50Cu;
            // 0x16a50c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A510u;
        goto label_16a510;
    }
    ctx->pc = 0x16A508u;
    SET_GPR_U32(ctx, 31, 0x16A510u);
    ctx->pc = 0x16A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A508u;
            // 0x16a50c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A510u; }
        if (ctx->pc != 0x16A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A510u; }
        if (ctx->pc != 0x16A510u) { return; }
    }
    ctx->pc = 0x16A510u;
label_16a510:
    // 0x16a510: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_16a514:
    if (ctx->pc == 0x16A514u) {
        ctx->pc = 0x16A518u;
        goto label_16a518;
    }
    ctx->pc = 0x16A510u;
    {
        const bool branch_taken_0x16a510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a510) {
            ctx->pc = 0x16A530u;
            goto label_16a530;
        }
    }
    ctx->pc = 0x16A518u;
label_16a518:
    // 0x16a518: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_16a51c:
    if (ctx->pc == 0x16A51Cu) {
        ctx->pc = 0x16A51Cu;
            // 0x16a51c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x16A520u;
        goto label_16a520;
    }
    ctx->pc = 0x16A518u;
    {
        const bool branch_taken_0x16a518 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A518u;
            // 0x16a51c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a518) {
            ctx->pc = 0x16A530u;
            goto label_16a530;
        }
    }
    ctx->pc = 0x16A520u;
label_16a520:
    // 0x16a520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a524:
    // 0x16a524: 0x10000040  b           . + 4 + (0x40 << 2)
label_16a528:
    if (ctx->pc == 0x16A528u) {
        ctx->pc = 0x16A528u;
            // 0x16a528: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x16A52Cu;
        goto label_16a52c;
    }
    ctx->pc = 0x16A524u;
    {
        const bool branch_taken_0x16a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A524u;
            // 0x16a528: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a524) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A52Cu;
label_16a52c:
    // 0x16a52c: 0x0  nop
    ctx->pc = 0x16a52cu;
    // NOP
label_16a530:
    // 0x16a530: 0xc0599d2  jal         func_166748
label_16a534:
    if (ctx->pc == 0x16A534u) {
        ctx->pc = 0x16A538u;
        goto label_16a538;
    }
    ctx->pc = 0x16A530u;
    SET_GPR_U32(ctx, 31, 0x16A538u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A538u; }
        if (ctx->pc != 0x16A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A538u; }
        if (ctx->pc != 0x16A538u) { return; }
    }
    ctx->pc = 0x16A538u;
label_16a538:
    // 0x16a538: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16a53c:
    // 0x16a53c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16a540:
    if (ctx->pc == 0x16A540u) {
        ctx->pc = 0x16A540u;
            // 0x16a540: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x16A544u;
        goto label_16a544;
    }
    ctx->pc = 0x16A53Cu;
    {
        const bool branch_taken_0x16a53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A53Cu;
            // 0x16a540: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a53c) {
            ctx->pc = 0x16A560u;
            goto label_16a560;
        }
    }
    ctx->pc = 0x16A544u;
label_16a544:
    // 0x16a544: 0xc059f4e  jal         func_167D38
label_16a548:
    if (ctx->pc == 0x16A548u) {
        ctx->pc = 0x16A548u;
            // 0x16a548: 0x24843868  addiu       $a0, $a0, 0x3868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14440));
        ctx->pc = 0x16A54Cu;
        goto label_16a54c;
    }
    ctx->pc = 0x16A544u;
    SET_GPR_U32(ctx, 31, 0x16A54Cu);
    ctx->pc = 0x16A548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A544u;
            // 0x16a548: 0x24843868  addiu       $a0, $a0, 0x3868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A54Cu; }
        if (ctx->pc != 0x16A54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A54Cu; }
        if (ctx->pc != 0x16A54Cu) { return; }
    }
    ctx->pc = 0x16A54Cu;
label_16a54c:
    // 0x16a54c: 0xc0599d8  jal         func_166760
label_16a550:
    if (ctx->pc == 0x16A550u) {
        ctx->pc = 0x16A554u;
        goto label_16a554;
    }
    ctx->pc = 0x16A54Cu;
    SET_GPR_U32(ctx, 31, 0x16A554u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A554u; }
        if (ctx->pc != 0x16A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A554u; }
        if (ctx->pc != 0x16A554u) { return; }
    }
    ctx->pc = 0x16A554u;
label_16a554:
    // 0x16a554: 0x10000034  b           . + 4 + (0x34 << 2)
label_16a558:
    if (ctx->pc == 0x16A558u) {
        ctx->pc = 0x16A558u;
            // 0x16a558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x16A55Cu;
        goto label_16a55c;
    }
    ctx->pc = 0x16A554u;
    {
        const bool branch_taken_0x16a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A554u;
            // 0x16a558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a554) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A55Cu;
label_16a55c:
    // 0x16a55c: 0x0  nop
    ctx->pc = 0x16a55cu;
    // NOP
label_16a560:
    // 0x16a560: 0xc0599d8  jal         func_166760
label_16a564:
    if (ctx->pc == 0x16A564u) {
        ctx->pc = 0x16A564u;
            // 0x16a564: 0x1492c0  sll         $s2, $s4, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
        ctx->pc = 0x16A568u;
        goto label_16a568;
    }
    ctx->pc = 0x16A560u;
    SET_GPR_U32(ctx, 31, 0x16A568u);
    ctx->pc = 0x16A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A560u;
            // 0x16a564: 0x1492c0  sll         $s2, $s4, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A568u; }
        if (ctx->pc != 0x16A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A568u; }
        if (ctx->pc != 0x16A568u) { return; }
    }
    ctx->pc = 0x16A568u;
label_16a568:
    // 0x16a568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16a56c:
    // 0x16a56c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a570:
    // 0x16a570: 0xc06156e  jal         func_1855B8
label_16a574:
    if (ctx->pc == 0x16A574u) {
        ctx->pc = 0x16A574u;
            // 0x16a574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A578u;
        goto label_16a578;
    }
    ctx->pc = 0x16A570u;
    SET_GPR_U32(ctx, 31, 0x16A578u);
    ctx->pc = 0x16A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A570u;
            // 0x16a574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A578u; }
        if (ctx->pc != 0x16A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A578u; }
        if (ctx->pc != 0x16A578u) { return; }
    }
    ctx->pc = 0x16A578u;
label_16a578:
    // 0x16a578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a57c:
    // 0x16a57c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_16a580:
    if (ctx->pc == 0x16A580u) {
        ctx->pc = 0x16A580u;
            // 0x16a580: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x16A584u;
        goto label_16a584;
    }
    ctx->pc = 0x16A57Cu;
    {
        const bool branch_taken_0x16a57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A57Cu;
            // 0x16a580: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a57c) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A584u;
label_16a584:
    // 0x16a584: 0xc0599d2  jal         func_166748
label_16a588:
    if (ctx->pc == 0x16A588u) {
        ctx->pc = 0x16A58Cu;
        goto label_16a58c;
    }
    ctx->pc = 0x16A584u;
    SET_GPR_U32(ctx, 31, 0x16A58Cu);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A58Cu; }
        if (ctx->pc != 0x16A58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A58Cu; }
        if (ctx->pc != 0x16A58Cu) { return; }
    }
    ctx->pc = 0x16A58Cu;
label_16a58c:
    // 0x16a58c: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x16a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
label_16a590:
    // 0x16a590: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x16a590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_16a594:
    // 0x16a594: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x16a594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_16a598:
    // 0x16a598: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x16a598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
label_16a59c:
    // 0x16a59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a5a0:
    // 0x16a5a0: 0x8c827ab0  lw          $v0, 0x7AB0($a0)
    ctx->pc = 0x16a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31408)));
label_16a5a4:
    // 0x16a5a4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_16a5a8:
    if (ctx->pc == 0x16A5A8u) {
        ctx->pc = 0x16A5A8u;
            // 0x16a5a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A5ACu;
        goto label_16a5ac;
    }
    ctx->pc = 0x16A5A4u;
    {
        const bool branch_taken_0x16a5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16A5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5A4u;
            // 0x16a5a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5a4) {
            ctx->pc = 0x16A5B4u;
            goto label_16a5b4;
        }
    }
    ctx->pc = 0x16A5ACu;
label_16a5ac:
    // 0x16a5ac: 0xc059ff6  jal         func_167FD8
label_16a5b0:
    if (ctx->pc == 0x16A5B0u) {
        ctx->pc = 0x16A5B0u;
            // 0x16a5b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A5B4u;
        goto label_16a5b4;
    }
    ctx->pc = 0x16A5ACu;
    SET_GPR_U32(ctx, 31, 0x16A5B4u);
    ctx->pc = 0x16A5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5ACu;
            // 0x16a5b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167FD8u;
    if (runtime->hasFunction(0x167FD8u)) {
        auto targetFn = runtime->lookupFunction(0x167FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5B4u; }
        if (ctx->pc != 0x16A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167FD8_0x167fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5B4u; }
        if (ctx->pc != 0x16A5B4u) { return; }
    }
    ctx->pc = 0x16A5B4u;
label_16a5b4:
    // 0x16a5b4: 0xc0599d8  jal         func_166760
label_16a5b8:
    if (ctx->pc == 0x16A5B8u) {
        ctx->pc = 0x16A5BCu;
        goto label_16a5bc;
    }
    ctx->pc = 0x16A5B4u;
    SET_GPR_U32(ctx, 31, 0x16A5BCu);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5BCu; }
        if (ctx->pc != 0x16A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5BCu; }
        if (ctx->pc != 0x16A5BCu) { return; }
    }
    ctx->pc = 0x16A5BCu;
label_16a5bc:
    // 0x16a5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a5c0:
    // 0x16a5c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x16a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16a5c4:
    // 0x16a5c4: 0xc05a864  jal         func_16A190
label_16a5c8:
    if (ctx->pc == 0x16A5C8u) {
        ctx->pc = 0x16A5C8u;
            // 0x16a5c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A5CCu;
        goto label_16a5cc;
    }
    ctx->pc = 0x16A5C4u;
    SET_GPR_U32(ctx, 31, 0x16A5CCu);
    ctx->pc = 0x16A5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5C4u;
            // 0x16a5c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A190u;
    if (runtime->hasFunction(0x16A190u)) {
        auto targetFn = runtime->lookupFunction(0x16A190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5CCu; }
        if (ctx->pc != 0x16A5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A190_0x16a190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5CCu; }
        if (ctx->pc != 0x16A5CCu) { return; }
    }
    ctx->pc = 0x16A5CCu;
label_16a5cc:
    // 0x16a5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a5d0:
    // 0x16a5d0: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_16a5d4:
    if (ctx->pc == 0x16A5D4u) {
        ctx->pc = 0x16A5D4u;
            // 0x16a5d4: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16A5D8u;
        goto label_16a5d8;
    }
    ctx->pc = 0x16A5D0u;
    {
        const bool branch_taken_0x16a5d0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x16a5d0) {
            ctx->pc = 0x16A5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5D0u;
            // 0x16a5d4: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A60Cu;
            goto label_16a60c;
        }
    }
    ctx->pc = 0x16A5D8u;
label_16a5d8:
    // 0x16a5d8: 0xc0599d2  jal         func_166748
label_16a5dc:
    if (ctx->pc == 0x16A5DCu) {
        ctx->pc = 0x16A5E0u;
        goto label_16a5e0;
    }
    ctx->pc = 0x16A5D8u;
    SET_GPR_U32(ctx, 31, 0x16A5E0u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5E0u; }
        if (ctx->pc != 0x16A5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5E0u; }
        if (ctx->pc != 0x16A5E0u) { return; }
    }
    ctx->pc = 0x16A5E0u;
label_16a5e0:
    // 0x16a5e0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x16a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16a5e4:
    // 0x16a5e4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_16a5e8:
    if (ctx->pc == 0x16A5E8u) {
        ctx->pc = 0x16A5ECu;
        goto label_16a5ec;
    }
    ctx->pc = 0x16A5E4u;
    {
        const bool branch_taken_0x16a5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5e4) {
            ctx->pc = 0x16A600u;
            goto label_16a600;
        }
    }
    ctx->pc = 0x16A5ECu;
label_16a5ec:
    // 0x16a5ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16a5f0:
    // 0x16a5f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x16a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16a5f4:
    // 0x16a5f4: 0x40f809  jalr        $v0
label_16a5f8:
    if (ctx->pc == 0x16A5F8u) {
        ctx->pc = 0x16A5FCu;
        goto label_16a5fc;
    }
    ctx->pc = 0x16A5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A5FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x16A5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16A5FCu; }
            if (ctx->pc != 0x16A5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x16A5FCu;
label_16a5fc:
    // 0x16a5fc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x16a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_16a600:
    // 0x16a600: 0xc0599d8  jal         func_166760
label_16a604:
    if (ctx->pc == 0x16A604u) {
        ctx->pc = 0x16A608u;
        goto label_16a608;
    }
    ctx->pc = 0x16A600u;
    SET_GPR_U32(ctx, 31, 0x16A608u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A608u; }
        if (ctx->pc != 0x16A608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A608u; }
        if (ctx->pc != 0x16A608u) { return; }
    }
    ctx->pc = 0x16A608u;
label_16a608:
    // 0x16a608: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x16a608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_16a60c:
    // 0x16a60c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a610:
    // 0x16a610: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x16a610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16a614:
    // 0x16a614: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x16a614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16a618:
    // 0x16a618: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16a61c:
    // 0x16a61c: 0xc05a148  jal         func_168520
label_16a620:
    if (ctx->pc == 0x16A620u) {
        ctx->pc = 0x16A620u;
            // 0x16a620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16A624u;
        goto label_16a624;
    }
    ctx->pc = 0x16A61Cu;
    SET_GPR_U32(ctx, 31, 0x16A624u);
    ctx->pc = 0x16A620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A61Cu;
            // 0x16a620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A624u; }
        if (ctx->pc != 0x16A624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A624u; }
        if (ctx->pc != 0x16A624u) { return; }
    }
    ctx->pc = 0x16A624u;
label_16a624:
    // 0x16a624: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a628:
    // 0x16a628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a62c:
    // 0x16a62c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a630:
    // 0x16a630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a634:
    // 0x16a634: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a638:
    // 0x16a638: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16a638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a63c:
    // 0x16a63c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16a63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16a640:
    // 0x16a640: 0x3e00008  jr          $ra
label_16a644:
    if (ctx->pc == 0x16A644u) {
        ctx->pc = 0x16A644u;
            // 0x16a644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16A648u;
        goto label_fallthrough_0x16a640;
    }
    ctx->pc = 0x16A640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A640u;
            // 0x16a644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16a640:
    ctx->pc = 0x16A648u;
}
