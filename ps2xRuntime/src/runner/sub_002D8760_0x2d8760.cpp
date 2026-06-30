#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8760
// Address: 0x2d8760 - 0x2d88b0
void sub_002D8760_0x2d8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8760_0x2d8760");
#endif

    switch (ctx->pc) {
        case 0x2d8760u: goto label_2d8760;
        case 0x2d8764u: goto label_2d8764;
        case 0x2d8768u: goto label_2d8768;
        case 0x2d876cu: goto label_2d876c;
        case 0x2d8770u: goto label_2d8770;
        case 0x2d8774u: goto label_2d8774;
        case 0x2d8778u: goto label_2d8778;
        case 0x2d877cu: goto label_2d877c;
        case 0x2d8780u: goto label_2d8780;
        case 0x2d8784u: goto label_2d8784;
        case 0x2d8788u: goto label_2d8788;
        case 0x2d878cu: goto label_2d878c;
        case 0x2d8790u: goto label_2d8790;
        case 0x2d8794u: goto label_2d8794;
        case 0x2d8798u: goto label_2d8798;
        case 0x2d879cu: goto label_2d879c;
        case 0x2d87a0u: goto label_2d87a0;
        case 0x2d87a4u: goto label_2d87a4;
        case 0x2d87a8u: goto label_2d87a8;
        case 0x2d87acu: goto label_2d87ac;
        case 0x2d87b0u: goto label_2d87b0;
        case 0x2d87b4u: goto label_2d87b4;
        case 0x2d87b8u: goto label_2d87b8;
        case 0x2d87bcu: goto label_2d87bc;
        case 0x2d87c0u: goto label_2d87c0;
        case 0x2d87c4u: goto label_2d87c4;
        case 0x2d87c8u: goto label_2d87c8;
        case 0x2d87ccu: goto label_2d87cc;
        case 0x2d87d0u: goto label_2d87d0;
        case 0x2d87d4u: goto label_2d87d4;
        case 0x2d87d8u: goto label_2d87d8;
        case 0x2d87dcu: goto label_2d87dc;
        case 0x2d87e0u: goto label_2d87e0;
        case 0x2d87e4u: goto label_2d87e4;
        case 0x2d87e8u: goto label_2d87e8;
        case 0x2d87ecu: goto label_2d87ec;
        case 0x2d87f0u: goto label_2d87f0;
        case 0x2d87f4u: goto label_2d87f4;
        case 0x2d87f8u: goto label_2d87f8;
        case 0x2d87fcu: goto label_2d87fc;
        case 0x2d8800u: goto label_2d8800;
        case 0x2d8804u: goto label_2d8804;
        case 0x2d8808u: goto label_2d8808;
        case 0x2d880cu: goto label_2d880c;
        case 0x2d8810u: goto label_2d8810;
        case 0x2d8814u: goto label_2d8814;
        case 0x2d8818u: goto label_2d8818;
        case 0x2d881cu: goto label_2d881c;
        case 0x2d8820u: goto label_2d8820;
        case 0x2d8824u: goto label_2d8824;
        case 0x2d8828u: goto label_2d8828;
        case 0x2d882cu: goto label_2d882c;
        case 0x2d8830u: goto label_2d8830;
        case 0x2d8834u: goto label_2d8834;
        case 0x2d8838u: goto label_2d8838;
        case 0x2d883cu: goto label_2d883c;
        case 0x2d8840u: goto label_2d8840;
        case 0x2d8844u: goto label_2d8844;
        case 0x2d8848u: goto label_2d8848;
        case 0x2d884cu: goto label_2d884c;
        case 0x2d8850u: goto label_2d8850;
        case 0x2d8854u: goto label_2d8854;
        case 0x2d8858u: goto label_2d8858;
        case 0x2d885cu: goto label_2d885c;
        case 0x2d8860u: goto label_2d8860;
        case 0x2d8864u: goto label_2d8864;
        case 0x2d8868u: goto label_2d8868;
        case 0x2d886cu: goto label_2d886c;
        case 0x2d8870u: goto label_2d8870;
        case 0x2d8874u: goto label_2d8874;
        case 0x2d8878u: goto label_2d8878;
        case 0x2d887cu: goto label_2d887c;
        case 0x2d8880u: goto label_2d8880;
        case 0x2d8884u: goto label_2d8884;
        case 0x2d8888u: goto label_2d8888;
        case 0x2d888cu: goto label_2d888c;
        case 0x2d8890u: goto label_2d8890;
        case 0x2d8894u: goto label_2d8894;
        case 0x2d8898u: goto label_2d8898;
        case 0x2d889cu: goto label_2d889c;
        case 0x2d88a0u: goto label_2d88a0;
        case 0x2d88a4u: goto label_2d88a4;
        case 0x2d88a8u: goto label_2d88a8;
        case 0x2d88acu: goto label_2d88ac;
        default: break;
    }

    ctx->pc = 0x2d8760u;

label_2d8760:
    // 0x2d8760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d8764:
    // 0x2d8764: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d8764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8768:
    // 0x2d8768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d876c:
    // 0x2d876c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2d8770:
    // 0x2d8770: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2d8770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2d8774:
    // 0x2d8774: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2d8778:
    // 0x2d8778: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_2d877c:
    if (ctx->pc == 0x2D877Cu) {
        ctx->pc = 0x2D877Cu;
            // 0x2d877c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D8780u;
        goto label_2d8780;
    }
    ctx->pc = 0x2D8778u;
    {
        const bool branch_taken_0x2d8778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8778) {
            ctx->pc = 0x2D877Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8778u;
            // 0x2d877c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D87A8u;
            goto label_2d87a8;
        }
    }
    ctx->pc = 0x2D8780u;
label_2d8780:
    // 0x2d8780: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d8784:
    // 0x2d8784: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d8788:
    // 0x2d8788: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2d8788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2d878c:
    // 0x2d878c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2d8790:
    // 0x2d8790: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d8794:
    // 0x2d8794: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2d8794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2d8798:
    // 0x2d8798: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2d8798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2d879c:
    // 0x2d879c: 0xc0a7ab4  jal         func_29EAD0
label_2d87a0:
    if (ctx->pc == 0x2D87A0u) {
        ctx->pc = 0x2D87A0u;
            // 0x2d87a0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x2D87A4u;
        goto label_2d87a4;
    }
    ctx->pc = 0x2D879Cu;
    SET_GPR_U32(ctx, 31, 0x2D87A4u);
    ctx->pc = 0x2D87A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D879Cu;
            // 0x2d87a0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87A4u; }
        if (ctx->pc != 0x2D87A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D87A4u; }
        if (ctx->pc != 0x2D87A4u) { return; }
    }
    ctx->pc = 0x2D87A4u;
label_2d87a4:
    // 0x2d87a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d87a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d87a8:
    // 0x2d87a8: 0x3e00008  jr          $ra
label_2d87ac:
    if (ctx->pc == 0x2D87ACu) {
        ctx->pc = 0x2D87ACu;
            // 0x2d87ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D87B0u;
        goto label_2d87b0;
    }
    ctx->pc = 0x2D87A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D87ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87A8u;
            // 0x2d87ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D87B0u;
label_2d87b0:
    // 0x2d87b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d87b4:
    // 0x2d87b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d87b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d87b8:
    // 0x2d87b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d87b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d87bc:
    // 0x2d87bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d87bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d87c0:
    // 0x2d87c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d87c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d87c4:
    // 0x2d87c4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2d87c8:
    if (ctx->pc == 0x2D87C8u) {
        ctx->pc = 0x2D87C8u;
            // 0x2d87c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D87CCu;
        goto label_2d87cc;
    }
    ctx->pc = 0x2D87C4u;
    {
        const bool branch_taken_0x2d87c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87C4u;
            // 0x2d87c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87c4) {
            ctx->pc = 0x2D8828u;
            goto label_2d8828;
        }
    }
    ctx->pc = 0x2D87CCu;
label_2d87cc:
    // 0x2d87cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d87d0:
    // 0x2d87d0: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x2d87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
label_2d87d4:
    // 0x2d87d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d87d8:
    // 0x2d87d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d87d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d87dc:
    // 0x2d87dc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2d87dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2d87e0:
    // 0x2d87e0: 0x320f809  jalr        $t9
label_2d87e4:
    if (ctx->pc == 0x2D87E4u) {
        ctx->pc = 0x2D87E8u;
        goto label_2d87e8;
    }
    ctx->pc = 0x2D87E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D87E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D87E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D87E8u; }
            if (ctx->pc != 0x2D87E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D87E8u;
label_2d87e8:
    // 0x2d87e8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2d87ec:
    if (ctx->pc == 0x2D87ECu) {
        ctx->pc = 0x2D87ECu;
            // 0x2d87ec: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2D87F0u;
        goto label_2d87f0;
    }
    ctx->pc = 0x2D87E8u;
    {
        const bool branch_taken_0x2d87e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d87e8) {
            ctx->pc = 0x2D87ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87E8u;
            // 0x2d87ec: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8814u;
            goto label_2d8814;
        }
    }
    ctx->pc = 0x2D87F0u;
label_2d87f0:
    // 0x2d87f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2d87f4:
    // 0x2d87f4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2d87f8:
    // 0x2d87f8: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x2d87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_2d87fc:
    // 0x2d87fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d8800:
    if (ctx->pc == 0x2D8800u) {
        ctx->pc = 0x2D8800u;
            // 0x2d8800: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2D8804u;
        goto label_2d8804;
    }
    ctx->pc = 0x2D87FCu;
    {
        const bool branch_taken_0x2d87fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D87FCu;
            // 0x2d8800: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87fc) {
            ctx->pc = 0x2D8810u;
            goto label_2d8810;
        }
    }
    ctx->pc = 0x2D8804u;
label_2d8804:
    // 0x2d8804: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2d8808:
    // 0x2d8808: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x2d8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_2d880c:
    // 0x2d880c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d8810:
    // 0x2d8810: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2d8814:
    // 0x2d8814: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8814u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d8818:
    // 0x2d8818: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d881c:
    if (ctx->pc == 0x2D881Cu) {
        ctx->pc = 0x2D881Cu;
            // 0x2d881c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8820u;
        goto label_2d8820;
    }
    ctx->pc = 0x2D8818u;
    {
        const bool branch_taken_0x2d8818 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d8818) {
            ctx->pc = 0x2D881Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8818u;
            // 0x2d881c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D882Cu;
            goto label_2d882c;
        }
    }
    ctx->pc = 0x2D8820u;
label_2d8820:
    // 0x2d8820: 0xc0400a8  jal         func_1002A0
label_2d8824:
    if (ctx->pc == 0x2D8824u) {
        ctx->pc = 0x2D8824u;
            // 0x2d8824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8828u;
        goto label_2d8828;
    }
    ctx->pc = 0x2D8820u;
    SET_GPR_U32(ctx, 31, 0x2D8828u);
    ctx->pc = 0x2D8824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8820u;
            // 0x2d8824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8828u; }
        if (ctx->pc != 0x2D8828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8828u; }
        if (ctx->pc != 0x2D8828u) { return; }
    }
    ctx->pc = 0x2D8828u;
label_2d8828:
    // 0x2d8828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d882c:
    // 0x2d882c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8830:
    // 0x2d8830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8834:
    // 0x2d8834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8838:
    // 0x2d8838: 0x3e00008  jr          $ra
label_2d883c:
    if (ctx->pc == 0x2D883Cu) {
        ctx->pc = 0x2D883Cu;
            // 0x2d883c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D8840u;
        goto label_2d8840;
    }
    ctx->pc = 0x2D8838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8838u;
            // 0x2d883c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8840u;
label_2d8840:
    // 0x2d8840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8844:
    // 0x2d8844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8848:
    // 0x2d8848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d884c:
    // 0x2d884c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d8850:
    // 0x2d8850: 0x8c900210  lw          $s0, 0x210($a0)
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
label_2d8854:
    // 0x2d8854: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2d8858:
    if (ctx->pc == 0x2D8858u) {
        ctx->pc = 0x2D8858u;
            // 0x2d8858: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D885Cu;
        goto label_2d885c;
    }
    ctx->pc = 0x2D8854u;
    {
        const bool branch_taken_0x2d8854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8854u;
            // 0x2d8858: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8854) {
            ctx->pc = 0x2D888Cu;
            goto label_2d888c;
        }
    }
    ctx->pc = 0x2D885Cu;
label_2d885c:
    // 0x2d885c: 0xc04008c  jal         func_100230
label_2d8860:
    if (ctx->pc == 0x2D8860u) {
        ctx->pc = 0x2D8860u;
            // 0x2d8860: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D8864u;
        goto label_2d8864;
    }
    ctx->pc = 0x2D885Cu;
    SET_GPR_U32(ctx, 31, 0x2D8864u);
    ctx->pc = 0x2D8860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D885Cu;
            // 0x2d8860: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8864u; }
        if (ctx->pc != 0x2D8864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8864u; }
        if (ctx->pc != 0x2D8864u) { return; }
    }
    ctx->pc = 0x2D8864u;
label_2d8864:
    // 0x2d8864: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8868:
    // 0x2d8868: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2d8868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2d886c:
    // 0x2d886c: 0xc0407c0  jal         func_101F00
label_2d8870:
    if (ctx->pc == 0x2D8870u) {
        ctx->pc = 0x2D8870u;
            // 0x2d8870: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x2D8874u;
        goto label_2d8874;
    }
    ctx->pc = 0x2D886Cu;
    SET_GPR_U32(ctx, 31, 0x2D8874u);
    ctx->pc = 0x2D8870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D886Cu;
            // 0x2d8870: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8874u; }
        if (ctx->pc != 0x2D8874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8874u; }
        if (ctx->pc != 0x2D8874u) { return; }
    }
    ctx->pc = 0x2D8874u;
label_2d8874:
    // 0x2d8874: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d8878:
    // 0x2d8878: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2d8878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2d887c:
    // 0x2d887c: 0xc0407c0  jal         func_101F00
label_2d8880:
    if (ctx->pc == 0x2D8880u) {
        ctx->pc = 0x2D8880u;
            // 0x2d8880: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x2D8884u;
        goto label_2d8884;
    }
    ctx->pc = 0x2D887Cu;
    SET_GPR_U32(ctx, 31, 0x2D8884u);
    ctx->pc = 0x2D8880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D887Cu;
            // 0x2d8880: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8884u; }
        if (ctx->pc != 0x2D8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8884u; }
        if (ctx->pc != 0x2D8884u) { return; }
    }
    ctx->pc = 0x2D8884u;
label_2d8884:
    // 0x2d8884: 0xc0400a8  jal         func_1002A0
label_2d8888:
    if (ctx->pc == 0x2D8888u) {
        ctx->pc = 0x2D8888u;
            // 0x2d8888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D888Cu;
        goto label_2d888c;
    }
    ctx->pc = 0x2D8884u;
    SET_GPR_U32(ctx, 31, 0x2D888Cu);
    ctx->pc = 0x2D8888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8884u;
            // 0x2d8888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D888Cu; }
        if (ctx->pc != 0x2D888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D888Cu; }
        if (ctx->pc != 0x2D888Cu) { return; }
    }
    ctx->pc = 0x2D888Cu;
label_2d888c:
    // 0x2d888c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x2d888cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_2d8890:
    // 0x2d8890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8894:
    // 0x2d8894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8898:
    // 0x2d8898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d889c:
    // 0x2d889c: 0x3e00008  jr          $ra
label_2d88a0:
    if (ctx->pc == 0x2D88A0u) {
        ctx->pc = 0x2D88A0u;
            // 0x2d88a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D88A4u;
        goto label_2d88a4;
    }
    ctx->pc = 0x2D889Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D88A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D889Cu;
            // 0x2d88a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D88A4u;
label_2d88a4:
    // 0x2d88a4: 0x0  nop
    ctx->pc = 0x2d88a4u;
    // NOP
label_2d88a8:
    // 0x2d88a8: 0x0  nop
    ctx->pc = 0x2d88a8u;
    // NOP
label_2d88ac:
    // 0x2d88ac: 0x0  nop
    ctx->pc = 0x2d88acu;
    // NOP
}
