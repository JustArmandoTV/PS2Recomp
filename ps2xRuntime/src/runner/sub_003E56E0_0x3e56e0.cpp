#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E56E0
// Address: 0x3e56e0 - 0x3e5860
void sub_003E56E0_0x3e56e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E56E0_0x3e56e0");
#endif

    switch (ctx->pc) {
        case 0x3e5798u: goto label_3e5798;
        case 0x3e57d4u: goto label_3e57d4;
        default: break;
    }

    ctx->pc = 0x3e56e0u;

    // 0x3e56e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e56e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e56e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e56e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e56ec: 0x8c8602c4  lw          $a2, 0x2C4($a0)
    ctx->pc = 0x3e56ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
    // 0x3e56f0: 0x18c00055  blez        $a2, . + 4 + (0x55 << 2)
    ctx->pc = 0x3E56F0u;
    {
        const bool branch_taken_0x3e56f0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3E56F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E56F0u;
            // 0x3e56f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e56f0) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E56F8u;
    // 0x3e56f8: 0x820502ea  lb          $a1, 0x2EA($s0)
    ctx->pc = 0x3e56f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
    // 0x3e56fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3e5700: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3e5700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e5704: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x3e5704u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3e5708: 0xae0502c4  sw          $a1, 0x2C4($s0)
    ctx->pc = 0x3e5708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 5));
    // 0x3e570c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x3e5710: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e5710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3e5714: 0x5464000e  bnel        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E5714u;
    {
        const bool branch_taken_0x3e5714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e5714) {
            ctx->pc = 0x3E5718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5714u;
            // 0x3e5718: 0x8e0402c4  lw          $a0, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5750u;
            goto label_3e5750;
        }
    }
    ctx->pc = 0x3E571Cu;
    // 0x3e571c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e5720: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3e5720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e5724: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e5728: 0x8c650cc4  lw          $a1, 0xCC4($v1)
    ctx->pc = 0x3e5728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
    // 0x3e572c: 0x50a40006  beql        $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E572Cu;
    {
        const bool branch_taken_0x3e572c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e572c) {
            ctx->pc = 0x3E5730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E572Cu;
            // 0x3e5730: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5748u;
            goto label_3e5748;
        }
    }
    ctx->pc = 0x3E5734u;
    // 0x3e5734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5738: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E5738u;
    {
        const bool branch_taken_0x3e5738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e5738) {
            ctx->pc = 0x3E573Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5738u;
            // 0x3e573c: 0xa20402ea  sb          $a0, 0x2EA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E574Cu;
            goto label_3e574c;
        }
    }
    ctx->pc = 0x3E5740u;
    // 0x3e5740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5740u;
    {
        const bool branch_taken_0x3e5740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5740) {
            ctx->pc = 0x3E574Cu;
            goto label_3e574c;
        }
    }
    ctx->pc = 0x3E5748u;
label_3e5748:
    // 0x3e5748: 0xa20302ea  sb          $v1, 0x2EA($s0)
    ctx->pc = 0x3e5748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 3));
label_3e574c:
    // 0x3e574c: 0x8e0402c4  lw          $a0, 0x2C4($s0)
    ctx->pc = 0x3e574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e5750:
    // 0x3e5750: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3E5750u;
    {
        const bool branch_taken_0x3e5750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5750) {
            ctx->pc = 0x3E5754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5750u;
            // 0x3e5754: 0x8e0202c8  lw          $v0, 0x2C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E577Cu;
            goto label_3e577c;
        }
    }
    ctx->pc = 0x3E5758u;
    // 0x3e5758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e5758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e575c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E575Cu;
    {
        const bool branch_taken_0x3e575c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e575c) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E5764u;
    // 0x3e5764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e5764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e5768: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5768u;
    {
        const bool branch_taken_0x3e5768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e5768) {
            ctx->pc = 0x3E5778u;
            goto label_3e5778;
        }
    }
    ctx->pc = 0x3E5770u;
    // 0x3e5770: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3E5770u;
    {
        const bool branch_taken_0x3e5770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5770u;
            // 0x3e5774: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5770) {
            ctx->pc = 0x3E584Cu;
            goto label_3e584c;
        }
    }
    ctx->pc = 0x3E5778u;
label_3e5778:
    // 0x3e5778: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3e5778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3e577c:
    // 0x3e577c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3e577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x3e5780: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3e5784: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E5784u;
    {
        const bool branch_taken_0x3e5784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5784) {
            ctx->pc = 0x3E5788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5784u;
            // 0x3e5788: 0x8e03007c  lw          $v1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E57B8u;
            goto label_3e57b8;
        }
    }
    ctx->pc = 0x3E578Cu;
    // 0x3e578c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x3e578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e5790: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x3E5790u;
    SET_GPR_U32(ctx, 31, 0x3E5798u);
    ctx->pc = 0x3E5794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5790u;
            // 0x3e5794: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (runtime->hasFunction(0x2D1620u)) {
        auto targetFn = runtime->lookupFunction(0x2D1620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5798u; }
        if (ctx->pc != 0x3E5798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1620_0x2d1620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5798u; }
        if (ctx->pc != 0x3E5798u) { return; }
    }
    ctx->pc = 0x3E5798u;
label_3e5798:
    // 0x3e5798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e579c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x3e579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3e57a0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3e57a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e57a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E57A4u;
    {
        const bool branch_taken_0x3e57a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e57a4) {
            ctx->pc = 0x3E57B4u;
            goto label_3e57b4;
        }
    }
    ctx->pc = 0x3E57ACu;
    // 0x3e57ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3e57acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e57b0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3e57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3e57b4:
    // 0x3e57b4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e57b8:
    // 0x3e57b8: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x3e57bc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3e57c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e57c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e57c4: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3e57c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x3e57c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e57cc: 0xc0b4904  jal         func_2D2410
    ctx->pc = 0x3E57CCu;
    SET_GPR_U32(ctx, 31, 0x3E57D4u);
    ctx->pc = 0x3E57D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E57CCu;
            // 0x3e57d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E57D4u; }
        if (ctx->pc != 0x3E57D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E57D4u; }
        if (ctx->pc != 0x3E57D4u) { return; }
    }
    ctx->pc = 0x3E57D4u;
label_3e57d4:
    // 0x3e57d4: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x3e57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x3e57d8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E57D8u;
    {
        const bool branch_taken_0x3e57d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e57d8) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E57E0u;
    // 0x3e57e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e57e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e57e8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3e57ec: 0x8c65078c  lw          $a1, 0x78C($v1)
    ctx->pc = 0x3e57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1932)));
    // 0x3e57f0: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E57F0u;
    {
        const bool branch_taken_0x3e57f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e57f0) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E57F8u;
    // 0x3e57f8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3e57fc: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x3e57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3e5800: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E5800u;
    {
        const bool branch_taken_0x3e5800 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x3e5800) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E5808u;
    // 0x3e5808: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E5808u;
    {
        const bool branch_taken_0x3e5808 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3E580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5808u;
            // 0x3e580c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5808) {
            ctx->pc = 0x3E581Cu;
            goto label_3e581c;
        }
    }
    ctx->pc = 0x3E5810u;
    // 0x3e5810: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5810u;
    {
        const bool branch_taken_0x3e5810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5810) {
            ctx->pc = 0x3E5814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5810u;
            // 0x3e5814: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5820u;
            goto label_3e5820;
        }
    }
    ctx->pc = 0x3E5818u;
    // 0x3e5818: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3e5818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3e581c:
    // 0x3e581c: 0x602826  xor         $a1, $v1, $zero
    ctx->pc = 0x3e581cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_3e5820:
    // 0x3e5820: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3e5820u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e5824: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x3e5824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x3e5828: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3e5828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3e582c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3e582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3e5830: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e5830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e5834: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E5834u;
    {
        const bool branch_taken_0x3e5834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5834u;
            // 0x3e5838: 0xae0302c4  sw          $v1, 0x2C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5834) {
            ctx->pc = 0x3E5848u;
            goto label_3e5848;
        }
    }
    ctx->pc = 0x3E583Cu;
    // 0x3e583c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e5840: 0x24639d90  addiu       $v1, $v1, -0x6270
    ctx->pc = 0x3e5840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x3e5844: 0xae030274  sw          $v1, 0x274($s0)
    ctx->pc = 0x3e5844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
label_3e5848:
    // 0x3e5848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e5848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e584c:
    // 0x3e584c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e584cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5850: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5850u;
            // 0x3e5854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5858u;
    // 0x3e5858: 0x0  nop
    ctx->pc = 0x3e5858u;
    // NOP
    // 0x3e585c: 0x0  nop
    ctx->pc = 0x3e585cu;
    // NOP
}
