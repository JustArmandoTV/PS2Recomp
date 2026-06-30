#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A86F0
// Address: 0x3a86f0 - 0x3a8800
void sub_003A86F0_0x3a86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A86F0_0x3a86f0");
#endif

    switch (ctx->pc) {
        case 0x3a86f0u: goto label_3a86f0;
        case 0x3a86f4u: goto label_3a86f4;
        case 0x3a86f8u: goto label_3a86f8;
        case 0x3a86fcu: goto label_3a86fc;
        case 0x3a8700u: goto label_3a8700;
        case 0x3a8704u: goto label_3a8704;
        case 0x3a8708u: goto label_3a8708;
        case 0x3a870cu: goto label_3a870c;
        case 0x3a8710u: goto label_3a8710;
        case 0x3a8714u: goto label_3a8714;
        case 0x3a8718u: goto label_3a8718;
        case 0x3a871cu: goto label_3a871c;
        case 0x3a8720u: goto label_3a8720;
        case 0x3a8724u: goto label_3a8724;
        case 0x3a8728u: goto label_3a8728;
        case 0x3a872cu: goto label_3a872c;
        case 0x3a8730u: goto label_3a8730;
        case 0x3a8734u: goto label_3a8734;
        case 0x3a8738u: goto label_3a8738;
        case 0x3a873cu: goto label_3a873c;
        case 0x3a8740u: goto label_3a8740;
        case 0x3a8744u: goto label_3a8744;
        case 0x3a8748u: goto label_3a8748;
        case 0x3a874cu: goto label_3a874c;
        case 0x3a8750u: goto label_3a8750;
        case 0x3a8754u: goto label_3a8754;
        case 0x3a8758u: goto label_3a8758;
        case 0x3a875cu: goto label_3a875c;
        case 0x3a8760u: goto label_3a8760;
        case 0x3a8764u: goto label_3a8764;
        case 0x3a8768u: goto label_3a8768;
        case 0x3a876cu: goto label_3a876c;
        case 0x3a8770u: goto label_3a8770;
        case 0x3a8774u: goto label_3a8774;
        case 0x3a8778u: goto label_3a8778;
        case 0x3a877cu: goto label_3a877c;
        case 0x3a8780u: goto label_3a8780;
        case 0x3a8784u: goto label_3a8784;
        case 0x3a8788u: goto label_3a8788;
        case 0x3a878cu: goto label_3a878c;
        case 0x3a8790u: goto label_3a8790;
        case 0x3a8794u: goto label_3a8794;
        case 0x3a8798u: goto label_3a8798;
        case 0x3a879cu: goto label_3a879c;
        case 0x3a87a0u: goto label_3a87a0;
        case 0x3a87a4u: goto label_3a87a4;
        case 0x3a87a8u: goto label_3a87a8;
        case 0x3a87acu: goto label_3a87ac;
        case 0x3a87b0u: goto label_3a87b0;
        case 0x3a87b4u: goto label_3a87b4;
        case 0x3a87b8u: goto label_3a87b8;
        case 0x3a87bcu: goto label_3a87bc;
        case 0x3a87c0u: goto label_3a87c0;
        case 0x3a87c4u: goto label_3a87c4;
        case 0x3a87c8u: goto label_3a87c8;
        case 0x3a87ccu: goto label_3a87cc;
        case 0x3a87d0u: goto label_3a87d0;
        case 0x3a87d4u: goto label_3a87d4;
        case 0x3a87d8u: goto label_3a87d8;
        case 0x3a87dcu: goto label_3a87dc;
        case 0x3a87e0u: goto label_3a87e0;
        case 0x3a87e4u: goto label_3a87e4;
        case 0x3a87e8u: goto label_3a87e8;
        case 0x3a87ecu: goto label_3a87ec;
        case 0x3a87f0u: goto label_3a87f0;
        case 0x3a87f4u: goto label_3a87f4;
        case 0x3a87f8u: goto label_3a87f8;
        case 0x3a87fcu: goto label_3a87fc;
        default: break;
    }

    ctx->pc = 0x3a86f0u;

label_3a86f0:
    // 0x3a86f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3a86f4:
    // 0x3a86f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a86f8:
    // 0x3a86f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3a86fc:
    // 0x3a86fc: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3a86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3a8700:
    // 0x3a8700: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a8700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a8704:
    // 0x3a8704: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a8704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8708:
    // 0x3a8708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a870c:
    // 0x3a870c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3a870cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a8710:
    // 0x3a8710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a8710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a8714:
    // 0x3a8714: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3a8714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a8718:
    // 0x3a8718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a8718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a871c:
    // 0x3a871c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a871cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3a8720:
    // 0x3a8720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a8724:
    // 0x3a8724: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a8724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a8728:
    // 0x3a8728: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3a8728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a872c:
    // 0x3a872c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a872cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a8730:
    // 0x3a8730: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3a8730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3a8734:
    // 0x3a8734: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x3a8734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3a8738:
    // 0x3a8738: 0x908311a1  lbu         $v1, 0x11A1($a0)
    ctx->pc = 0x3a8738u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3a873c:
    // 0x3a873c: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
label_3a8740:
    if (ctx->pc == 0x3A8740u) {
        ctx->pc = 0x3A8740u;
            // 0x3a8740: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3A8744u;
        goto label_3a8744;
    }
    ctx->pc = 0x3A873Cu;
    {
        const bool branch_taken_0x3a873c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a873c) {
            ctx->pc = 0x3A8740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A873Cu;
            // 0x3a8740: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A87E0u;
            goto label_3a87e0;
        }
    }
    ctx->pc = 0x3A8744u;
label_3a8744:
    // 0x3a8744: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3a8744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3a8748:
    // 0x3a8748: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3a8748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a874c:
    // 0x3a874c: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_3a8750:
    if (ctx->pc == 0x3A8750u) {
        ctx->pc = 0x3A8754u;
        goto label_3a8754;
    }
    ctx->pc = 0x3A874Cu;
    {
        const bool branch_taken_0x3a874c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a874c) {
            ctx->pc = 0x3A87DCu;
            goto label_3a87dc;
        }
    }
    ctx->pc = 0x3A8754u;
label_3a8754:
    // 0x3a8754: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3a8754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a8758:
    // 0x3a8758: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a8758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a875c:
    // 0x3a875c: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3a875cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3a8760:
    // 0x3a8760: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3a8760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a8764:
    // 0x3a8764: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a8764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a8768:
    // 0x3a8768: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_3a876c:
    if (ctx->pc == 0x3A876Cu) {
        ctx->pc = 0x3A8770u;
        goto label_3a8770;
    }
    ctx->pc = 0x3A8768u;
    {
        const bool branch_taken_0x3a8768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8768) {
            ctx->pc = 0x3A87DCu;
            goto label_3a87dc;
        }
    }
    ctx->pc = 0x3A8770u;
label_3a8770:
    // 0x3a8770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8774:
    // 0x3a8774: 0x8612000a  lh          $s2, 0xA($s0)
    ctx->pc = 0x3a8774u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_3a8778:
    // 0x3a8778: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x3a8778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a877c:
    // 0x3a877c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3a877cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a8780:
    // 0x3a8780: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_3a8784:
    if (ctx->pc == 0x3A8784u) {
        ctx->pc = 0x3A8784u;
            // 0x3a8784: 0x86130008  lh          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x3A8788u;
        goto label_3a8788;
    }
    ctx->pc = 0x3A8780u;
    {
        const bool branch_taken_0x3a8780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8780u;
            // 0x3a8784: 0x86130008  lh          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8780) {
            ctx->pc = 0x3A87DCu;
            goto label_3a87dc;
        }
    }
    ctx->pc = 0x3A8788u;
label_3a8788:
    // 0x3a8788: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x3a8788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_3a878c:
    // 0x3a878c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3a8790:
    if (ctx->pc == 0x3A8790u) {
        ctx->pc = 0x3A8790u;
            // 0x3a8790: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A8794u;
        goto label_3a8794;
    }
    ctx->pc = 0x3A878Cu;
    {
        const bool branch_taken_0x3a878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a878c) {
            ctx->pc = 0x3A8790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A878Cu;
            // 0x3a8790: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A87C8u;
            goto label_3a87c8;
        }
    }
    ctx->pc = 0x3A8794u;
label_3a8794:
    // 0x3a8794: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a8798:
    // 0x3a8798: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a8798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a879c:
    // 0x3a879c: 0xc0506ac  jal         func_141AB0
label_3a87a0:
    if (ctx->pc == 0x3A87A0u) {
        ctx->pc = 0x3A87A0u;
            // 0x3a87a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3A87A4u;
        goto label_3a87a4;
    }
    ctx->pc = 0x3A879Cu;
    SET_GPR_U32(ctx, 31, 0x3A87A4u);
    ctx->pc = 0x3A87A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A879Cu;
            // 0x3a87a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A87A4u; }
        if (ctx->pc != 0x3A87A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A87A4u; }
        if (ctx->pc != 0x3A87A4u) { return; }
    }
    ctx->pc = 0x3A87A4u;
label_3a87a4:
    // 0x3a87a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a87a8:
    // 0x3a87a8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a87ac:
    // 0x3a87ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a87acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a87b0:
    // 0x3a87b0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a87b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a87b4:
    // 0x3a87b4: 0x320f809  jalr        $t9
label_3a87b8:
    if (ctx->pc == 0x3A87B8u) {
        ctx->pc = 0x3A87B8u;
            // 0x3a87b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A87BCu;
        goto label_3a87bc;
    }
    ctx->pc = 0x3A87B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A87BCu);
        ctx->pc = 0x3A87B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A87B4u;
            // 0x3a87b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A87BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A87BCu; }
            if (ctx->pc != 0x3A87BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A87BCu;
label_3a87bc:
    // 0x3a87bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a87c0:
    // 0x3a87c0: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x3a87c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
label_3a87c4:
    // 0x3a87c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a87c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a87c8:
    // 0x3a87c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a87c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a87cc:
    // 0x3a87cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a87ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a87d0:
    // 0x3a87d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a87d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a87d4:
    // 0x3a87d4: 0xc0ea588  jal         func_3A9620
label_3a87d8:
    if (ctx->pc == 0x3A87D8u) {
        ctx->pc = 0x3A87D8u;
            // 0x3a87d8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A87DCu;
        goto label_3a87dc;
    }
    ctx->pc = 0x3A87D4u;
    SET_GPR_U32(ctx, 31, 0x3A87DCu);
    ctx->pc = 0x3A87D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A87D4u;
            // 0x3a87d8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9620u;
    if (runtime->hasFunction(0x3A9620u)) {
        auto targetFn = runtime->lookupFunction(0x3A9620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A87DCu; }
        if (ctx->pc != 0x3A87DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9620_0x3a9620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A87DCu; }
        if (ctx->pc != 0x3A87DCu) { return; }
    }
    ctx->pc = 0x3A87DCu;
label_3a87dc:
    // 0x3a87dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a87dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a87e0:
    // 0x3a87e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a87e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a87e4:
    // 0x3a87e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a87e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a87e8:
    // 0x3a87e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a87e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a87ec:
    // 0x3a87ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a87ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a87f0:
    // 0x3a87f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a87f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a87f4:
    // 0x3a87f4: 0x3e00008  jr          $ra
label_3a87f8:
    if (ctx->pc == 0x3A87F8u) {
        ctx->pc = 0x3A87F8u;
            // 0x3a87f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3A87FCu;
        goto label_3a87fc;
    }
    ctx->pc = 0x3A87F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A87F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A87F4u;
            // 0x3a87f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A87FCu;
label_3a87fc:
    // 0x3a87fc: 0x0  nop
    ctx->pc = 0x3a87fcu;
    // NOP
}
