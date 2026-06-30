#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C498
// Address: 0x17c498 - 0x17c608
void sub_0017C498_0x17c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C498_0x17c498");
#endif

    switch (ctx->pc) {
        case 0x17c498u: goto label_17c498;
        case 0x17c49cu: goto label_17c49c;
        case 0x17c4a0u: goto label_17c4a0;
        case 0x17c4a4u: goto label_17c4a4;
        case 0x17c4a8u: goto label_17c4a8;
        case 0x17c4acu: goto label_17c4ac;
        case 0x17c4b0u: goto label_17c4b0;
        case 0x17c4b4u: goto label_17c4b4;
        case 0x17c4b8u: goto label_17c4b8;
        case 0x17c4bcu: goto label_17c4bc;
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4c4u: goto label_17c4c4;
        case 0x17c4c8u: goto label_17c4c8;
        case 0x17c4ccu: goto label_17c4cc;
        case 0x17c4d0u: goto label_17c4d0;
        case 0x17c4d4u: goto label_17c4d4;
        case 0x17c4d8u: goto label_17c4d8;
        case 0x17c4dcu: goto label_17c4dc;
        case 0x17c4e0u: goto label_17c4e0;
        case 0x17c4e4u: goto label_17c4e4;
        case 0x17c4e8u: goto label_17c4e8;
        case 0x17c4ecu: goto label_17c4ec;
        case 0x17c4f0u: goto label_17c4f0;
        case 0x17c4f4u: goto label_17c4f4;
        case 0x17c4f8u: goto label_17c4f8;
        case 0x17c4fcu: goto label_17c4fc;
        case 0x17c500u: goto label_17c500;
        case 0x17c504u: goto label_17c504;
        case 0x17c508u: goto label_17c508;
        case 0x17c50cu: goto label_17c50c;
        case 0x17c510u: goto label_17c510;
        case 0x17c514u: goto label_17c514;
        case 0x17c518u: goto label_17c518;
        case 0x17c51cu: goto label_17c51c;
        case 0x17c520u: goto label_17c520;
        case 0x17c524u: goto label_17c524;
        case 0x17c528u: goto label_17c528;
        case 0x17c52cu: goto label_17c52c;
        case 0x17c530u: goto label_17c530;
        case 0x17c534u: goto label_17c534;
        case 0x17c538u: goto label_17c538;
        case 0x17c53cu: goto label_17c53c;
        case 0x17c540u: goto label_17c540;
        case 0x17c544u: goto label_17c544;
        case 0x17c548u: goto label_17c548;
        case 0x17c54cu: goto label_17c54c;
        case 0x17c550u: goto label_17c550;
        case 0x17c554u: goto label_17c554;
        case 0x17c558u: goto label_17c558;
        case 0x17c55cu: goto label_17c55c;
        case 0x17c560u: goto label_17c560;
        case 0x17c564u: goto label_17c564;
        case 0x17c568u: goto label_17c568;
        case 0x17c56cu: goto label_17c56c;
        case 0x17c570u: goto label_17c570;
        case 0x17c574u: goto label_17c574;
        case 0x17c578u: goto label_17c578;
        case 0x17c57cu: goto label_17c57c;
        case 0x17c580u: goto label_17c580;
        case 0x17c584u: goto label_17c584;
        case 0x17c588u: goto label_17c588;
        case 0x17c58cu: goto label_17c58c;
        case 0x17c590u: goto label_17c590;
        case 0x17c594u: goto label_17c594;
        case 0x17c598u: goto label_17c598;
        case 0x17c59cu: goto label_17c59c;
        case 0x17c5a0u: goto label_17c5a0;
        case 0x17c5a4u: goto label_17c5a4;
        case 0x17c5a8u: goto label_17c5a8;
        case 0x17c5acu: goto label_17c5ac;
        case 0x17c5b0u: goto label_17c5b0;
        case 0x17c5b4u: goto label_17c5b4;
        case 0x17c5b8u: goto label_17c5b8;
        case 0x17c5bcu: goto label_17c5bc;
        case 0x17c5c0u: goto label_17c5c0;
        case 0x17c5c4u: goto label_17c5c4;
        case 0x17c5c8u: goto label_17c5c8;
        case 0x17c5ccu: goto label_17c5cc;
        case 0x17c5d0u: goto label_17c5d0;
        case 0x17c5d4u: goto label_17c5d4;
        case 0x17c5d8u: goto label_17c5d8;
        case 0x17c5dcu: goto label_17c5dc;
        case 0x17c5e0u: goto label_17c5e0;
        case 0x17c5e4u: goto label_17c5e4;
        case 0x17c5e8u: goto label_17c5e8;
        case 0x17c5ecu: goto label_17c5ec;
        case 0x17c5f0u: goto label_17c5f0;
        case 0x17c5f4u: goto label_17c5f4;
        case 0x17c5f8u: goto label_17c5f8;
        case 0x17c5fcu: goto label_17c5fc;
        case 0x17c600u: goto label_17c600;
        case 0x17c604u: goto label_17c604;
        default: break;
    }

    ctx->pc = 0x17c498u;

label_17c498:
    // 0x17c498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17c49c:
    // 0x17c49c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_17c4a0:
    // 0x17c4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c4a4:
    // 0x17c4a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c4a8:
    // 0x17c4a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17c4ac:
    // 0x17c4ac: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x17c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_17c4b0:
    // 0x17c4b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17c4b4:
    // 0x17c4b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c4b8:
    // 0x17c4b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17c4bc:
    // 0x17c4bc: 0x82050001  lb          $a1, 0x1($s0)
    ctx->pc = 0x17c4bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_17c4c0:
    // 0x17c4c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17c4c4:
    // 0x17c4c4: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
label_17c4c8:
    if (ctx->pc == 0x17C4C8u) {
        ctx->pc = 0x17C4C8u;
            // 0x17c4c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x17C4CCu;
        goto label_17c4cc;
    }
    ctx->pc = 0x17C4C4u;
    {
        const bool branch_taken_0x17c4c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x17C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4C4u;
            // 0x17c4c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4c4) {
            ctx->pc = 0x17C520u;
            goto label_17c520;
        }
    }
    ctx->pc = 0x17C4CCu;
label_17c4cc:
    // 0x17c4cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c4d0:
    // 0x17c4d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17c4d4:
    // 0x17c4d4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x17c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_17c4d8:
    // 0x17c4d8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x17c4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17c4dc:
    // 0x17c4dc: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_17c4e0:
    if (ctx->pc == 0x17C4E0u) {
        ctx->pc = 0x17C4E0u;
            // 0x17c4e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x17C4E4u;
        goto label_17c4e4;
    }
    ctx->pc = 0x17C4DCu;
    {
        const bool branch_taken_0x17c4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c4dc) {
            ctx->pc = 0x17C4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4DCu;
            // 0x17c4e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C524u;
            goto label_17c524;
        }
    }
    ctx->pc = 0x17C4E4u;
label_17c4e4:
    // 0x17c4e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c4e8:
    // 0x17c4e8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c4ec:
    // 0x17c4ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c4f0:
    // 0x17c4f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17c4f4:
    // 0x17c4f4: 0xc043366  jal         func_10CD98
label_17c4f8:
    if (ctx->pc == 0x17C4F8u) {
        ctx->pc = 0x17C4F8u;
            // 0x17c4f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x17C4FCu;
        goto label_17c4fc;
    }
    ctx->pc = 0x17C4F4u;
    SET_GPR_U32(ctx, 31, 0x17C4FCu);
    ctx->pc = 0x17C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C4F4u;
            // 0x17c4f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (runtime->hasFunction(0x10CD98u)) {
        auto targetFn = runtime->lookupFunction(0x10CD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4FCu; }
        if (ctx->pc != 0x17C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD98_0x10cd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C4FCu; }
        if (ctx->pc != 0x17C4FCu) { return; }
    }
    ctx->pc = 0x17C4FCu;
label_17c4fc:
    // 0x17c4fc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c500:
    // 0x17c500: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17c504:
    // 0x17c504: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c508:
    // 0x17c508: 0x60f809  jalr        $v1
label_17c50c:
    if (ctx->pc == 0x17C50Cu) {
        ctx->pc = 0x17C50Cu;
            // 0x17c50c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x17C510u;
        goto label_17c510;
    }
    ctx->pc = 0x17C508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C510u);
        ctx->pc = 0x17C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C508u;
            // 0x17c50c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C510u; }
            if (ctx->pc != 0x17C510u) { return; }
        }
        }
    }
    ctx->pc = 0x17C510u;
label_17c510:
    // 0x17c510: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c514:
    // 0x17c514: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x17c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_17c518:
    // 0x17c518: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x17c518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_17c51c:
    // 0x17c51c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x17c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_17c520:
    // 0x17c520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c524:
    // 0x17c524: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_17c528:
    // 0x17c528: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x17c528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_17c52c:
    // 0x17c52c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_17c530:
    // 0x17c530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17c534:
    // 0x17c534: 0x54440030  bnel        $v0, $a0, . + 4 + (0x30 << 2)
label_17c538:
    if (ctx->pc == 0x17C538u) {
        ctx->pc = 0x17C538u;
            // 0x17c538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17C53Cu;
        goto label_17c53c;
    }
    ctx->pc = 0x17C534u;
    {
        const bool branch_taken_0x17c534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c534) {
            ctx->pc = 0x17C538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C534u;
            // 0x17c538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C5F8u;
            goto label_17c5f8;
        }
    }
    ctx->pc = 0x17C53Cu;
label_17c53c:
    // 0x17c53c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17c540:
    // 0x17c540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c544:
    // 0x17c544: 0x8c434c2c  lw          $v1, 0x4C2C($v0)
    ctx->pc = 0x17c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19500)));
label_17c548:
    // 0x17c548: 0x5464002b  bnel        $v1, $a0, . + 4 + (0x2B << 2)
label_17c54c:
    if (ctx->pc == 0x17C54Cu) {
        ctx->pc = 0x17C54Cu;
            // 0x17c54c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17C550u;
        goto label_17c550;
    }
    ctx->pc = 0x17C548u;
    {
        const bool branch_taken_0x17c548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c548) {
            ctx->pc = 0x17C54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C548u;
            // 0x17c54c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C5F8u;
            goto label_17c5f8;
        }
    }
    ctx->pc = 0x17C550u;
label_17c550:
    // 0x17c550: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17c550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c554:
    // 0x17c554: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x17c554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_17c558:
    // 0x17c558: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17c55c:
    // 0x17c55c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17c560:
    // 0x17c560: 0x40f809  jalr        $v0
label_17c564:
    if (ctx->pc == 0x17C564u) {
        ctx->pc = 0x17C564u;
            // 0x17c564: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x17C568u;
        goto label_17c568;
    }
    ctx->pc = 0x17C560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C568u);
        ctx->pc = 0x17C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C560u;
            // 0x17c564: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17C568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C568u; }
            if (ctx->pc != 0x17C568u) { return; }
        }
        }
    }
    ctx->pc = 0x17C568u;
label_17c568:
    // 0x17c568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17c56c:
    // 0x17c56c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c570:
    // 0x17c570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17c574:
    // 0x17c574: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c578:
    // 0x17c578: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x17c578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_17c57c:
    // 0x17c57c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x17c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_17c580:
    // 0x17c580: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c584:
    // 0x17c584: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c588:
    // 0x17c588: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17c588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17c58c:
    // 0x17c58c: 0xc043316  jal         func_10CC58
label_17c590:
    if (ctx->pc == 0x17C590u) {
        ctx->pc = 0x17C590u;
            // 0x17c590: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x17C594u;
        goto label_17c594;
    }
    ctx->pc = 0x17C58Cu;
    SET_GPR_U32(ctx, 31, 0x17C594u);
    ctx->pc = 0x17C590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C58Cu;
            // 0x17c590: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C594u; }
        if (ctx->pc != 0x17C594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C594u; }
        if (ctx->pc != 0x17C594u) { return; }
    }
    ctx->pc = 0x17C594u;
label_17c594:
    // 0x17c594: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17c594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c598:
    // 0x17c598: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c59c:
    // 0x17c59c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c5a0:
    // 0x17c5a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17c5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17c5a4:
    // 0x17c5a4: 0xc043366  jal         func_10CD98
label_17c5a8:
    if (ctx->pc == 0x17C5A8u) {
        ctx->pc = 0x17C5A8u;
            // 0x17c5a8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->pc = 0x17C5ACu;
        goto label_17c5ac;
    }
    ctx->pc = 0x17C5A4u;
    SET_GPR_U32(ctx, 31, 0x17C5ACu);
    ctx->pc = 0x17C5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5A4u;
            // 0x17c5a8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (runtime->hasFunction(0x10CD98u)) {
        auto targetFn = runtime->lookupFunction(0x10CD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5ACu; }
        if (ctx->pc != 0x17C5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD98_0x10cd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5ACu; }
        if (ctx->pc != 0x17C5ACu) { return; }
    }
    ctx->pc = 0x17C5ACu;
label_17c5ac:
    // 0x17c5ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x17c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c5b0:
    // 0x17c5b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x17c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_17c5b4:
    // 0x17c5b4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x17c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17c5b8:
    // 0x17c5b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17c5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_17c5bc:
    // 0x17c5bc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x17c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17c5c0:
    // 0x17c5c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17c5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17c5c4:
    // 0x17c5c4: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x17c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_17c5c8:
    // 0x17c5c8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x17c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_17c5cc:
    // 0x17c5cc: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x17c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_17c5d0:
    // 0x17c5d0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_17c5d4:
    // 0x17c5d4: 0x0  nop
    ctx->pc = 0x17c5d4u;
    // NOP
label_17c5d8:
    // 0x17c5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c5dc:
    // 0x17c5dc: 0xc043ca2  jal         func_10F288
label_17c5e0:
    if (ctx->pc == 0x17C5E0u) {
        ctx->pc = 0x17C5E0u;
            // 0x17c5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C5E4u;
        goto label_17c5e4;
    }
    ctx->pc = 0x17C5DCu;
    SET_GPR_U32(ctx, 31, 0x17C5E4u);
    ctx->pc = 0x17C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5DCu;
            // 0x17c5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F288u;
    if (runtime->hasFunction(0x10F288u)) {
        auto targetFn = runtime->lookupFunction(0x10F288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5E4u; }
        if (ctx->pc != 0x17C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F288_0x10f288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C5E4u; }
        if (ctx->pc != 0x17C5E4u) { return; }
    }
    ctx->pc = 0x17C5E4u;
label_17c5e4:
    // 0x17c5e4: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_17c5e8:
    if (ctx->pc == 0x17C5E8u) {
        ctx->pc = 0x17C5E8u;
            // 0x17c5e8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x17C5ECu;
        goto label_17c5ec;
    }
    ctx->pc = 0x17C5E4u;
    {
        const bool branch_taken_0x17c5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C5E4u;
            // 0x17c5e8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5e4) {
            ctx->pc = 0x17C5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c5d8;
        }
    }
    ctx->pc = 0x17C5ECu;
label_17c5ec:
    // 0x17c5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c5f0:
    // 0x17c5f0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x17c5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_17c5f4:
    // 0x17c5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c5f8:
    // 0x17c5f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c5f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c5fc:
    // 0x17c5fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c600:
    // 0x17c600: 0x3e00008  jr          $ra
label_17c604:
    if (ctx->pc == 0x17C604u) {
        ctx->pc = 0x17C604u;
            // 0x17c604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17C608u;
        goto label_fallthrough_0x17c600;
    }
    ctx->pc = 0x17C600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C600u;
            // 0x17c604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17c600:
    ctx->pc = 0x17C608u;
}
