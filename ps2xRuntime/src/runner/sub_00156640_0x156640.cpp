#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156640
// Address: 0x156640 - 0x156820
void sub_00156640_0x156640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156640_0x156640");
#endif

    switch (ctx->pc) {
        case 0x1566e0u: goto label_1566e0;
        case 0x156754u: goto label_156754;
        case 0x1567b8u: goto label_1567b8;
        case 0x1567d8u: goto label_1567d8;
        case 0x1567ecu: goto label_1567ec;
        default: break;
    }

    ctx->pc = 0x156640u;

    // 0x156640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x156640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x156644: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x156644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x156648: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x156648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15664c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x156650: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x156650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x156654: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x156654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x156658: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x156658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15665c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156660: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x156660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156668: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x156668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15666c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156670: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x156670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156678: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x156678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15667c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x156680: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x156680u;
    {
        const bool branch_taken_0x156680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156680u;
            // 0x156684: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156680) {
            ctx->pc = 0x1567ECu;
            goto label_1567ec;
        }
    }
    ctx->pc = 0x156688u;
    // 0x156688: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15668c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x156690: 0xac545784  sw          $s4, 0x5784($v0)
    ctx->pc = 0x156690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 20));
    // 0x156694: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156698: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15669c: 0xac715790  sw          $s1, 0x5790($v1)
    ctx->pc = 0x15669cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 17));
    // 0x1566a0: 0xac485794  sw          $t0, 0x5794($v0)
    ctx->pc = 0x1566a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 8));
    // 0x1566a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1566a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1566a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1566ac: 0x31040002  andi        $a0, $t0, 0x2
    ctx->pc = 0x1566acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1566b0: 0xac655760  sw          $a1, 0x5760($v1)
    ctx->pc = 0x1566b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22368), GPR_U32(ctx, 5));
    // 0x1566b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1566B4u;
    {
        const bool branch_taken_0x1566b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566B4u;
            // 0x1566b8: 0xac455768  sw          $a1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b4) {
            ctx->pc = 0x1566CCu;
            goto label_1566cc;
        }
    }
    ctx->pc = 0x1566BCu;
    // 0x1566bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1566bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1566c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1566c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1566C4u;
    {
        const bool branch_taken_0x1566c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566C4u;
            // 0x1566c8: 0xac4357b0  sw          $v1, 0x57B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566c4) {
            ctx->pc = 0x1566D4u;
            goto label_1566d4;
        }
    }
    ctx->pc = 0x1566CCu;
label_1566cc:
    // 0x1566cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1566d0: 0xac4057b0  sw          $zero, 0x57B0($v0)
    ctx->pc = 0x1566d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 0));
label_1566d4:
    // 0x1566d4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1566d8: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x1566D8u;
    SET_GPR_U32(ctx, 31, 0x1566E0u);
    ctx->pc = 0x1566DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1566D8u;
            // 0x1566dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566E0u; }
        if (ctx->pc != 0x1566E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566E0u; }
        if (ctx->pc != 0x1566E0u) { return; }
    }
    ctx->pc = 0x1566E0u;
label_1566e0:
    // 0x1566e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1566e4: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x1566e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x1566e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1566E8u;
    {
        const bool branch_taken_0x1566e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566E8u;
            // 0x1566ec: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566e8) {
            ctx->pc = 0x156744u;
            goto label_156744;
        }
    }
    ctx->pc = 0x1566F0u;
    // 0x1566f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1566f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1566f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1566f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1566f8: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x1566f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x1566fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156700: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x156700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x156704: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156708: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x156708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x15670c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156710: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x156710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x156714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156718: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x156718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x15671c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15671cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156720: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x156720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x156724: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156728: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x156728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x15672c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156730: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x156730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x156734: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156738: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x156738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x15673c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156740: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x156740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_156744:
    // 0x156744: 0x8e950038  lw          $s5, 0x38($s4)
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x156748: 0x32370007  andi        $s7, $s1, 0x7
    ctx->pc = 0x156748u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x15674c: 0x8e96003c  lw          $s6, 0x3C($s4)
    ctx->pc = 0x15674cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x156750: 0x323e0300  andi        $fp, $s1, 0x300
    ctx->pc = 0x156750u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)768);
label_156754:
    // 0x156754: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156758: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x156758u;
    {
        const bool branch_taken_0x156758 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x156758) {
            ctx->pc = 0x156780u;
            goto label_156780;
        }
    }
    ctx->pc = 0x156760u;
    // 0x156760: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x156764: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x156764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x156768: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x156768u;
    {
        const bool branch_taken_0x156768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156768) {
            ctx->pc = 0x1567D8u;
            goto label_1567d8;
        }
    }
    ctx->pc = 0x156770u;
    // 0x156770: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x156770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x156774: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x156774u;
    {
        const bool branch_taken_0x156774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156774) {
            ctx->pc = 0x1567D8u;
            goto label_1567d8;
        }
    }
    ctx->pc = 0x15677Cu;
    // 0x15677c: 0x0  nop
    ctx->pc = 0x15677cu;
    // NOP
label_156780:
    // 0x156780: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x156784: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156788: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15678c: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x15678cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x156790: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x156790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x156794: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x156794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x156798: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x156798u;
    {
        const bool branch_taken_0x156798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156798) {
            ctx->pc = 0x1567C0u;
            goto label_1567c0;
        }
    }
    ctx->pc = 0x1567A0u;
    // 0x1567a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1567a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1567a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1567a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1567acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567b0: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x1567B0u;
    SET_GPR_U32(ctx, 31, 0x1567B8u);
    ctx->pc = 0x1567B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567B0u;
            // 0x1567b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567B8u; }
        if (ctx->pc != 0x1567B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155FC0_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567B8u; }
        if (ctx->pc != 0x1567B8u) { return; }
    }
    ctx->pc = 0x1567B8u;
label_1567b8:
    // 0x1567b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1567B8u;
    {
        const bool branch_taken_0x1567b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1567b8) {
            ctx->pc = 0x1567D8u;
            goto label_1567d8;
        }
    }
    ctx->pc = 0x1567C0u;
label_1567c0:
    // 0x1567c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1567c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1567c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1567c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1567ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567d0: 0xc0558b8  jal         func_1562E0
    ctx->pc = 0x1567D0u;
    SET_GPR_U32(ctx, 31, 0x1567D8u);
    ctx->pc = 0x1567D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567D0u;
            // 0x1567d4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1562E0u;
    if (runtime->hasFunction(0x1562E0u)) {
        auto targetFn = runtime->lookupFunction(0x1562E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567D8u; }
        if (ctx->pc != 0x1567D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001562E0_0x1562e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567D8u; }
        if (ctx->pc != 0x1567D8u) { return; }
    }
    ctx->pc = 0x1567D8u;
label_1567d8:
    // 0x1567d8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1567d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1567dc: 0x16a0ffdd  bnez        $s5, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1567DCu;
    {
        const bool branch_taken_0x1567dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1567E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1567DCu;
            // 0x1567e0: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567dc) {
            ctx->pc = 0x156754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156754;
        }
    }
    ctx->pc = 0x1567E4u;
    // 0x1567e4: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x1567E4u;
    SET_GPR_U32(ctx, 31, 0x1567ECu);
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567ECu; }
        if (ctx->pc != 0x1567ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567ECu; }
        if (ctx->pc != 0x1567ECu) { return; }
    }
    ctx->pc = 0x1567ECu;
label_1567ec:
    // 0x1567ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1567ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1567f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1567f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1567f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1567f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1567f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1567f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1567fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1567fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156800: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x156800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15680c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15680cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156814: 0x3e00008  jr          $ra
    ctx->pc = 0x156814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156814u;
            // 0x156818: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15681Cu;
    // 0x15681c: 0x0  nop
    ctx->pc = 0x15681cu;
    // NOP
}
