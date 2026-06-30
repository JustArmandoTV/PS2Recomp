#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001063E8
// Address: 0x1063e8 - 0x1066c8
void sub_001063E8_0x1063e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001063E8_0x1063e8");
#endif

    switch (ctx->pc) {
        case 0x106420u: goto label_106420;
        case 0x106428u: goto label_106428;
        case 0x106444u: goto label_106444;
        case 0x1064e4u: goto label_1064e4;
        case 0x106508u: goto label_106508;
        case 0x106520u: goto label_106520;
        case 0x106560u: goto label_106560;
        case 0x1065e8u: goto label_1065e8;
        case 0x106644u: goto label_106644;
        case 0x106668u: goto label_106668;
        case 0x10667cu: goto label_10667c;
        default: break;
    }

    ctx->pc = 0x1063e8u;

    // 0x1063e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1063e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1063ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1063ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1063f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1063f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1063f4: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x1063f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
    // 0x1063f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1063f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1063fc: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x1063fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x106400: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106404: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x106404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x106408: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10640c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10640cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106410: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x106410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x106414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10641c: 0x0  nop
    ctx->pc = 0x10641cu;
    // NOP
label_106420:
    // 0x106420: 0xc041a96  jal         func_106A58
    ctx->pc = 0x106420u;
    SET_GPR_U32(ctx, 31, 0x106428u);
    ctx->pc = 0x106424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106420u;
            // 0x106424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106428u; }
        if (ctx->pc != 0x106428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106428u; }
        if (ctx->pc != 0x106428u) { return; }
    }
    ctx->pc = 0x106428u;
label_106428:
    // 0x106428: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10642c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106430: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106434: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x106434u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x106438: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x106438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x10643c: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x10643Cu;
    SET_GPR_U32(ctx, 31, 0x106444u);
    ctx->pc = 0x106440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10643Cu;
            // 0x106440: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106444u; }
        if (ctx->pc != 0x106444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106444u; }
        if (ctx->pc != 0x106444u) { return; }
    }
    ctx->pc = 0x106444u;
label_106444:
    // 0x106444: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106448: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10644c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106450: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x106450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x106454: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x106454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106458: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106458u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10645c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x10645cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106460: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x106460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x106464: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x106464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106468: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106468u;
    {
        const bool branch_taken_0x106468 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10646Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106468u;
            // 0x10646c: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106468) {
            ctx->pc = 0x106484u;
            goto label_106484;
        }
    }
    ctx->pc = 0x106470u;
    // 0x106470: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x106470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x106474: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x106474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x106478: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x106478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x10647c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10647Cu;
    {
        const bool branch_taken_0x10647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10647Cu;
            // 0x106480: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10647c) {
            ctx->pc = 0x106488u;
            goto label_106488;
        }
    }
    ctx->pc = 0x106484u;
label_106484:
    // 0x106484: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x106484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_106488:
    // 0x106488: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x106488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x10648c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x10648cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x106490: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106490u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x106494: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x106494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x106498: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x106498u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10649c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1064a0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1064a4: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1064A4u;
    {
        const bool branch_taken_0x1064a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1064A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064A4u;
            // 0x1064a8: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064a4) {
            ctx->pc = 0x106508u;
            goto label_106508;
        }
    }
    ctx->pc = 0x1064ACu;
    // 0x1064ac: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x1064acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x1064b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1064B0u;
    {
        const bool branch_taken_0x1064b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064B0u;
            // 0x1064b4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064b0) {
            ctx->pc = 0x1064C8u;
            goto label_1064c8;
        }
    }
    ctx->pc = 0x1064B8u;
    // 0x1064b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1064B8u;
    {
        const bool branch_taken_0x1064b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064B8u;
            // 0x1064bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064b8) {
            ctx->pc = 0x1064DCu;
            goto label_1064dc;
        }
    }
    ctx->pc = 0x1064C0u;
    // 0x1064c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1064C0u;
    {
        const bool branch_taken_0x1064c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064C0u;
            // 0x1064c4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064c0) {
            ctx->pc = 0x106530u;
            goto label_106530;
        }
    }
    ctx->pc = 0x1064C8u;
label_1064c8:
    // 0x1064c8: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1064C8u;
    {
        const bool branch_taken_0x1064c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1064c8) {
            ctx->pc = 0x1064CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1064C8u;
            // 0x1064cc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106530u;
            goto label_106530;
        }
    }
    ctx->pc = 0x1064D0u;
    // 0x1064d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1064d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1064d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1064D4u;
    {
        const bool branch_taken_0x1064d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064D4u;
            // 0x1064d8: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064d4) {
            ctx->pc = 0x106534u;
            goto label_106534;
        }
    }
    ctx->pc = 0x1064DCu;
label_1064dc:
    // 0x1064dc: 0xc041a4c  jal         func_106930
    ctx->pc = 0x1064DCu;
    SET_GPR_U32(ctx, 31, 0x1064E4u);
    ctx->pc = 0x1064E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1064DCu;
            // 0x1064e0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064E4u; }
        if (ctx->pc != 0x1064E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064E4u; }
        if (ctx->pc != 0x1064E4u) { return; }
    }
    ctx->pc = 0x1064E4u;
label_1064e4:
    // 0x1064e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1064e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064e8: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x1064e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1064ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1064ECu;
    {
        const bool branch_taken_0x1064ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064ECu;
            // 0x1064f0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064ec) {
            ctx->pc = 0x106510u;
            goto label_106510;
        }
    }
    ctx->pc = 0x1064F4u;
    // 0x1064f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1064F4u;
    {
        const bool branch_taken_0x1064f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1064F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064F4u;
            // 0x1064f8: 0x26a5e760  addiu       $a1, $s5, -0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064f4) {
            ctx->pc = 0x106514u;
            goto label_106514;
        }
    }
    ctx->pc = 0x1064FCu;
    // 0x1064fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1064fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106500: 0xc041aa4  jal         func_106A90
    ctx->pc = 0x106500u;
    SET_GPR_U32(ctx, 31, 0x106508u);
    ctx->pc = 0x106504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106500u;
            // 0x106504: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A90u;
    if (runtime->hasFunction(0x106A90u)) {
        auto targetFn = runtime->lookupFunction(0x106A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106508u; }
        if (ctx->pc != 0x106508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A90_0x106a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106508u; }
        if (ctx->pc != 0x106508u) { return; }
    }
    ctx->pc = 0x106508u;
label_106508:
    // 0x106508: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x106508u;
    {
        const bool branch_taken_0x106508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106508u;
            // 0x10650c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106508) {
            ctx->pc = 0x106534u;
            goto label_106534;
        }
    }
    ctx->pc = 0x106510u;
label_106510:
    // 0x106510: 0x26a5e760  addiu       $a1, $s5, -0x18A0
    ctx->pc = 0x106510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960992));
label_106514:
    // 0x106514: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x106514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106518: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x106518u;
    SET_GPR_U32(ctx, 31, 0x106520u);
    ctx->pc = 0x10651Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106518u;
            // 0x10651c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106520u; }
        if (ctx->pc != 0x106520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106520u; }
        if (ctx->pc != 0x106520u) { return; }
    }
    ctx->pc = 0x106520u;
label_106520:
    // 0x106520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106528u;
    {
        const bool branch_taken_0x106528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106528u;
            // 0x10652c: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106528) {
            ctx->pc = 0x10653Cu;
            goto label_10653c;
        }
    }
    ctx->pc = 0x106530u;
label_106530:
    // 0x106530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x106530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106534:
    // 0x106534: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x106534u;
    {
        const bool branch_taken_0x106534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106534u;
            // 0x106538: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106534) {
            ctx->pc = 0x106420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106420;
        }
    }
    ctx->pc = 0x10653Cu;
label_10653c:
    // 0x10653c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106540: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106544: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106548: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10654c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10654cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106550: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106558: 0x3e00008  jr          $ra
    ctx->pc = 0x106558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106558u;
            // 0x10655c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106560u;
label_106560:
    // 0x106560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x106560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x106564: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10656c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106570: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x106570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x106574: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106578: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x106578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x10657c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x10657cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x106580: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x106580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x106584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106588: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10658c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10658cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106590: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x106594: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106598: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10659c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1065a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1065a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1065a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1065a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1065a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1065a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1065ac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1065acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1065b0: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1065B0u;
    {
        const bool branch_taken_0x1065b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1065b0) {
            ctx->pc = 0x1065B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1065B0u;
            // 0x1065b4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106698u;
            goto label_106698;
        }
    }
    ctx->pc = 0x1065B8u;
    // 0x1065b8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x1065b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x1065bc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x1065bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x1065c0: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1065c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1065c4: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x1065c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x1065c8: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x1065c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x1065cc: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x1065ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x1065d0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x1065d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x1065d4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x1065d8: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x1065dc: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x1065dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x1065e0: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x1065e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x1065e4: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x1065e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_1065e8:
    // 0x1065e8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1065e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1065ec: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1065ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1065f0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x1065f4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x1065f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1065f8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x1065f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1065fc: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x106600: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x106600u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x106604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106608: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x106608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x10660c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x10660Cu;
    {
        const bool branch_taken_0x10660c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x106610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10660Cu;
            // 0x106610: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10660c) {
            ctx->pc = 0x106624u;
            goto label_106624;
        }
    }
    ctx->pc = 0x106614u;
    // 0x106614: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x106614u;
    {
        const bool branch_taken_0x106614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x106614) {
            ctx->pc = 0x106618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106614u;
            // 0x106618: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x106628u;
            goto label_106628;
        }
    }
    ctx->pc = 0x10661Cu;
    // 0x10661c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10661Cu;
    {
        const bool branch_taken_0x10661c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x10661c) {
            ctx->pc = 0x106620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10661Cu;
            // 0x106620: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106654u;
            goto label_106654;
        }
    }
    ctx->pc = 0x106624u;
label_106624:
    // 0x106624: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x106624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_106628:
    // 0x106628: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106628u;
    {
        const bool branch_taken_0x106628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106628u;
            // 0x10662c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106628) {
            ctx->pc = 0x106654u;
            goto label_106654;
        }
    }
    ctx->pc = 0x106630u;
    // 0x106630: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106634: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106634u;
    {
        const bool branch_taken_0x106634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106634u;
            // 0x106638: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106634) {
            ctx->pc = 0x106654u;
            goto label_106654;
        }
    }
    ctx->pc = 0x10663Cu;
    // 0x10663c: 0xc0427de  jal         func_109F78
    ctx->pc = 0x10663Cu;
    SET_GPR_U32(ctx, 31, 0x106644u);
    ctx->pc = 0x106640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10663Cu;
            // 0x106640: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F78u;
    if (runtime->hasFunction(0x109F78u)) {
        auto targetFn = runtime->lookupFunction(0x109F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106644u; }
        if (ctx->pc != 0x106644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F78_0x109f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106644u; }
        if (ctx->pc != 0x106644u) { return; }
    }
    ctx->pc = 0x106644u;
label_106644:
    // 0x106644: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x106644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x106648: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x106648u;
    {
        const bool branch_taken_0x106648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106648u;
            // 0x10664c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106648) {
            ctx->pc = 0x106674u;
            goto label_106674;
        }
    }
    ctx->pc = 0x106650u;
    // 0x106650: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x106650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_106654:
    // 0x106654: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106658: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106658u;
    {
        const bool branch_taken_0x106658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106658u;
            // 0x10665c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106658) {
            ctx->pc = 0x106684u;
            goto label_106684;
        }
    }
    ctx->pc = 0x106660u;
    // 0x106660: 0xc0427de  jal         func_109F78
    ctx->pc = 0x106660u;
    SET_GPR_U32(ctx, 31, 0x106668u);
    ctx->pc = 0x106664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106660u;
            // 0x106664: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F78u;
    if (runtime->hasFunction(0x109F78u)) {
        auto targetFn = runtime->lookupFunction(0x109F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106668u; }
        if (ctx->pc != 0x106668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F78_0x109f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106668u; }
        if (ctx->pc != 0x106668u) { return; }
    }
    ctx->pc = 0x106668u;
label_106668:
    // 0x106668: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x106668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10666c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10666Cu;
    {
        const bool branch_taken_0x10666c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10666Cu;
            // 0x106670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10666c) {
            ctx->pc = 0x106684u;
            goto label_106684;
        }
    }
    ctx->pc = 0x106674u;
label_106674:
    // 0x106674: 0xc042dbc  jal         func_10B6F0
    ctx->pc = 0x106674u;
    SET_GPR_U32(ctx, 31, 0x10667Cu);
    ctx->pc = 0x10B6F0u;
    if (runtime->hasFunction(0x10B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10667Cu; }
        if (ctx->pc != 0x10667Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B6F0_0x10b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10667Cu; }
        if (ctx->pc != 0x10667Cu) { return; }
    }
    ctx->pc = 0x10667Cu;
label_10667c:
    // 0x10667c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10667Cu;
    {
        const bool branch_taken_0x10667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10667Cu;
            // 0x106680: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10667c) {
            ctx->pc = 0x106698u;
            goto label_106698;
        }
    }
    ctx->pc = 0x106684u;
label_106684:
    // 0x106684: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106688: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x106688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10668c: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x10668Cu;
    {
        const bool branch_taken_0x10668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x10668c) {
            ctx->pc = 0x1065E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1065e8;
        }
    }
    ctx->pc = 0x106694u;
    // 0x106694: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x106694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_106698:
    // 0x106698: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10669c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10669cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1066a0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1066a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1066a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1066a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1066a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1066a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1066ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1066b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1066b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1066b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1066b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1066bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1066bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1066c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1066C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1066C0u;
            // 0x1066c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1066C8u;
}
