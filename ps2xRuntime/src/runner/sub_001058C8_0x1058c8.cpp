#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001058C8
// Address: 0x1058c8 - 0x105cf0
void sub_001058C8_0x1058c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001058C8_0x1058c8");
#endif

    switch (ctx->pc) {
        case 0x105918u: goto label_105918;
        case 0x10593cu: goto label_10593c;
        case 0x1059b4u: goto label_1059b4;
        case 0x105a4cu: goto label_105a4c;
        case 0x105a70u: goto label_105a70;
        case 0x105adcu: goto label_105adc;
        case 0x105b00u: goto label_105b00;
        case 0x105b74u: goto label_105b74;
        case 0x105c38u: goto label_105c38;
        case 0x105c5cu: goto label_105c5c;
        default: break;
    }

    ctx->pc = 0x1058c8u;

    // 0x1058c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1058c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1058cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1058ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1058d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1058d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058d4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1058d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1058d8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1058d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1058dc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1058dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058e0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1058e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1058e4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1058e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058e8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1058e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1058ec: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1058ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1058f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1058f4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1058f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1058f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1058fc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1058fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105900: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105904: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105908: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10590c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10590cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105910: 0xc041a96  jal         func_106A58
    ctx->pc = 0x105910u;
    SET_GPR_U32(ctx, 31, 0x105918u);
    ctx->pc = 0x105914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105910u;
            // 0x105914: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105918u; }
        if (ctx->pc != 0x105918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105918u; }
        if (ctx->pc != 0x105918u) { return; }
    }
    ctx->pc = 0x105918u;
label_105918:
    // 0x105918: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10591c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x10591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x105920: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105924: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x105924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x105928: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105928u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10592c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105930: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x105930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x105934: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x105934u;
    SET_GPR_U32(ctx, 31, 0x10593Cu);
    ctx->pc = 0x105938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105934u;
            // 0x105938: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10593Cu; }
        if (ctx->pc != 0x10593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10593Cu; }
        if (ctx->pc != 0x10593Cu) { return; }
    }
    ctx->pc = 0x10593Cu;
label_10593c:
    // 0x10593c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10593cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105940: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105944: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105948: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x10594c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105950: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105950u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105954: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105954u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105958: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10595c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10595cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105960: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105960u;
    {
        const bool branch_taken_0x105960 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105960u;
            // 0x105964: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105960) {
            ctx->pc = 0x105978u;
            goto label_105978;
        }
    }
    ctx->pc = 0x105968u;
    // 0x105968: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x105968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x10596c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10596cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x105970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105970u;
    {
        const bool branch_taken_0x105970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105970u;
            // 0x105974: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105970) {
            ctx->pc = 0x10597Cu;
            goto label_10597c;
        }
    }
    ctx->pc = 0x105978u;
label_105978:
    // 0x105978: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10597c:
    // 0x10597c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x10597cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x105980: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x105980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x105984: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x105984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x105988: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10598c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10598cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105990: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x105990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x105994: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x105994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x105998: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x105998u;
    {
        const bool branch_taken_0x105998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105998u;
            // 0x10599c: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105998) {
            ctx->pc = 0x1059BCu;
            goto label_1059bc;
        }
    }
    ctx->pc = 0x1059A0u;
    // 0x1059a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1059A0u;
    {
        const bool branch_taken_0x1059a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059A0u;
            // 0x1059a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059a0) {
            ctx->pc = 0x1059C0u;
            goto label_1059c0;
        }
    }
    ctx->pc = 0x1059A8u;
    // 0x1059a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1059a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059ac: 0xc041a12  jal         func_106848
    ctx->pc = 0x1059ACu;
    SET_GPR_U32(ctx, 31, 0x1059B4u);
    ctx->pc = 0x1059B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1059ACu;
            // 0x1059b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1059B4u; }
        if (ctx->pc != 0x1059B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1059B4u; }
        if (ctx->pc != 0x1059B4u) { return; }
    }
    ctx->pc = 0x1059B4u;
label_1059b4:
    // 0x1059b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1059B4u;
    {
        const bool branch_taken_0x1059b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059B4u;
            // 0x1059b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059b4) {
            ctx->pc = 0x1059C0u;
            goto label_1059c0;
        }
    }
    ctx->pc = 0x1059BCu;
label_1059bc:
    // 0x1059bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1059bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1059c0:
    // 0x1059c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1059c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1059c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1059c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1059c8: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x1059c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x1059cc: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1059ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1059d0: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1059D0u;
    {
        const bool branch_taken_0x1059d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1059D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059D0u;
            // 0x1059d4: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059d0) {
            ctx->pc = 0x105A04u;
            goto label_105a04;
        }
    }
    ctx->pc = 0x1059D8u;
    // 0x1059d8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1059d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1059dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1059dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1059e0: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x1059e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x1059e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1059e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1059e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1059e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1059ec: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x1059ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1059f0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1059F0u;
    {
        const bool branch_taken_0x1059f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1059F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059F0u;
            // 0x1059f4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059f0) {
            ctx->pc = 0x105A38u;
            goto label_105a38;
        }
    }
    ctx->pc = 0x1059F8u;
    // 0x1059f8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1059f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1059fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1059FCu;
    {
        const bool branch_taken_0x1059fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059FCu;
            // 0x105a00: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059fc) {
            ctx->pc = 0x105A34u;
            goto label_105a34;
        }
    }
    ctx->pc = 0x105A04u;
label_105a04:
    // 0x105a04: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105A04u;
    {
        const bool branch_taken_0x105a04 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x105A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A04u;
            // 0x105a08: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a04) {
            ctx->pc = 0x105A38u;
            goto label_105a38;
        }
    }
    ctx->pc = 0x105A0Cu;
    // 0x105a0c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x105a0cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x105a10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x105a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x105a14: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x105a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x105a18: 0x61823  negu        $v1, $a2
    ctx->pc = 0x105a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x105a1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105a20: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x105a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105a24: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x105a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105a28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x105A28u;
    {
        const bool branch_taken_0x105a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A28u;
            // 0x105a2c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a28) {
            ctx->pc = 0x105A34u;
            goto label_105a34;
        }
    }
    ctx->pc = 0x105A30u;
    // 0x105a30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x105a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_105a34:
    // 0x105a34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x105a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_105a38:
    // 0x105a38: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x105a38u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x105a3c: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x105A3Cu;
    {
        const bool branch_taken_0x105a3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A3Cu;
            // 0x105a40: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a3c) {
            ctx->pc = 0x105AD4u;
            goto label_105ad4;
        }
    }
    ctx->pc = 0x105A44u;
    // 0x105a44: 0xc041a96  jal         func_106A58
    ctx->pc = 0x105A44u;
    SET_GPR_U32(ctx, 31, 0x105A4Cu);
    ctx->pc = 0x105A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105A44u;
            // 0x105a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A4Cu; }
        if (ctx->pc != 0x105A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A4Cu; }
        if (ctx->pc != 0x105A4Cu) { return; }
    }
    ctx->pc = 0x105A4Cu;
label_105a4c:
    // 0x105a4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105a50: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x105a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x105a54: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105a58: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x105a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x105a5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105a5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x105a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a64: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x105a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x105a68: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x105A68u;
    SET_GPR_U32(ctx, 31, 0x105A70u);
    ctx->pc = 0x105A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105A68u;
            // 0x105a6c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A70u; }
        if (ctx->pc != 0x105A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A70u; }
        if (ctx->pc != 0x105A70u) { return; }
    }
    ctx->pc = 0x105A70u;
label_105a70:
    // 0x105a70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105a78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105a7c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105a80: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105a84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105a84u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105a88: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105a88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105a8c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105a90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105a94: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105A94u;
    {
        const bool branch_taken_0x105a94 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A94u;
            // 0x105a98: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a94) {
            ctx->pc = 0x105AACu;
            goto label_105aac;
        }
    }
    ctx->pc = 0x105A9Cu;
    // 0x105a9c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x105a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x105aa0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x105aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x105aa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105AA4u;
    {
        const bool branch_taken_0x105aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105AA4u;
            // 0x105aa8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105aa4) {
            ctx->pc = 0x105AB0u;
            goto label_105ab0;
        }
    }
    ctx->pc = 0x105AACu;
label_105aac:
    // 0x105aac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_105ab0:
    // 0x105ab0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x105ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x105ab4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x105ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x105ab8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x105ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x105abc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105ac0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x105ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105ac4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x105ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x105ac8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x105ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x105acc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x105accu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x105ad0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x105ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_105ad4:
    // 0x105ad4: 0xc041a96  jal         func_106A58
    ctx->pc = 0x105AD4u;
    SET_GPR_U32(ctx, 31, 0x105ADCu);
    ctx->pc = 0x105AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105AD4u;
            // 0x105ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105ADCu; }
        if (ctx->pc != 0x105ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105ADCu; }
        if (ctx->pc != 0x105ADCu) { return; }
    }
    ctx->pc = 0x105ADCu;
label_105adc:
    // 0x105adc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105ae0: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x105ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x105ae4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105ae8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x105ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x105aec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105aecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x105af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105af4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x105af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x105af8: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x105AF8u;
    SET_GPR_U32(ctx, 31, 0x105B00u);
    ctx->pc = 0x105AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105AF8u;
            // 0x105afc: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B00u; }
        if (ctx->pc != 0x105B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B00u; }
        if (ctx->pc != 0x105B00u) { return; }
    }
    ctx->pc = 0x105B00u;
label_105b00:
    // 0x105b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105b08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105b0c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105b10: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105b14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105b14u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105b18: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105b18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105b1c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105b20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105b20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105b24: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105B24u;
    {
        const bool branch_taken_0x105b24 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B24u;
            // 0x105b28: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b24) {
            ctx->pc = 0x105B3Cu;
            goto label_105b3c;
        }
    }
    ctx->pc = 0x105B2Cu;
    // 0x105b2c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x105b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x105b30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x105b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x105b34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105B34u;
    {
        const bool branch_taken_0x105b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B34u;
            // 0x105b38: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b34) {
            ctx->pc = 0x105B40u;
            goto label_105b40;
        }
    }
    ctx->pc = 0x105B3Cu;
label_105b3c:
    // 0x105b3c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_105b40:
    // 0x105b40: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x105b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x105b44: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x105b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x105b48: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x105b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x105b4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105b50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x105b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105b54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x105b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x105b58: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x105b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x105b5c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x105B5Cu;
    {
        const bool branch_taken_0x105b5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B5Cu;
            // 0x105b60: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b5c) {
            ctx->pc = 0x105B7Cu;
            goto label_105b7c;
        }
    }
    ctx->pc = 0x105B64u;
    // 0x105b64: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105B64u;
    {
        const bool branch_taken_0x105b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B64u;
            // 0x105b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b64) {
            ctx->pc = 0x105B7Cu;
            goto label_105b7c;
        }
    }
    ctx->pc = 0x105B6Cu;
    // 0x105b6c: 0xc041a12  jal         func_106848
    ctx->pc = 0x105B6Cu;
    SET_GPR_U32(ctx, 31, 0x105B74u);
    ctx->pc = 0x105B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B6Cu;
            // 0x105b70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B74u; }
        if (ctx->pc != 0x105B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B74u; }
        if (ctx->pc != 0x105B74u) { return; }
    }
    ctx->pc = 0x105B74u;
label_105b74:
    // 0x105b74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105B74u;
    {
        const bool branch_taken_0x105b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B74u;
            // 0x105b78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b74) {
            ctx->pc = 0x105B80u;
            goto label_105b80;
        }
    }
    ctx->pc = 0x105B7Cu;
label_105b7c:
    // 0x105b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105b80:
    // 0x105b80: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x105B80u;
    {
        const bool branch_taken_0x105b80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x105b80) {
            ctx->pc = 0x105B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105B80u;
            // 0x105b84: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105B98u;
            goto label_105b98;
        }
    }
    ctx->pc = 0x105B88u;
    // 0x105b88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x105b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x105b8c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105b90: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x105b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x105b94: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x105b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_105b98:
    // 0x105b98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x105b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x105b9c: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x105b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x105ba0: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x105ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x105ba4: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x105ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x105ba8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105BA8u;
    {
        const bool branch_taken_0x105ba8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x105BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105BA8u;
            // 0x105bac: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ba8) {
            ctx->pc = 0x105BDCu;
            goto label_105bdc;
        }
    }
    ctx->pc = 0x105BB0u;
    // 0x105bb0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x105bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x105bb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x105bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x105bb8: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x105bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x105bbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105bc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x105bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105bc4: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x105bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x105bc8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x105BC8u;
    {
        const bool branch_taken_0x105bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105BC8u;
            // 0x105bcc: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bc8) {
            ctx->pc = 0x105C10u;
            goto label_105c10;
        }
    }
    ctx->pc = 0x105BD0u;
    // 0x105bd0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x105bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x105bd4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x105BD4u;
    {
        const bool branch_taken_0x105bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105BD4u;
            // 0x105bd8: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bd4) {
            ctx->pc = 0x105C0Cu;
            goto label_105c0c;
        }
    }
    ctx->pc = 0x105BDCu;
label_105bdc:
    // 0x105bdc: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105BDCu;
    {
        const bool branch_taken_0x105bdc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x105BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105BDCu;
            // 0x105be0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bdc) {
            ctx->pc = 0x105C10u;
            goto label_105c10;
        }
    }
    ctx->pc = 0x105BE4u;
    // 0x105be4: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x105be4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x105be8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x105be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x105bec: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x105bf0: 0x61823  negu        $v1, $a2
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x105bf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105bf8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x105bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105bfc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x105bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105c00: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x105C00u;
    {
        const bool branch_taken_0x105c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C00u;
            // 0x105c04: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c00) {
            ctx->pc = 0x105C0Cu;
            goto label_105c0c;
        }
    }
    ctx->pc = 0x105C08u;
    // 0x105c08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x105c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_105c0c:
    // 0x105c0c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_105c10:
    // 0x105c10: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x105c10u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x105c14: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x105C14u;
    {
        const bool branch_taken_0x105c14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C14u;
            // 0x105c18: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c14) {
            ctx->pc = 0x105C28u;
            goto label_105c28;
        }
    }
    ctx->pc = 0x105C1Cu;
    // 0x105c1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x105c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x105c20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x105c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x105c24: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x105c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_105c28:
    // 0x105c28: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x105C28u;
    {
        const bool branch_taken_0x105c28 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C28u;
            // 0x105c2c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c28) {
            ctx->pc = 0x105CC4u;
            goto label_105cc4;
        }
    }
    ctx->pc = 0x105C30u;
    // 0x105c30: 0xc041a96  jal         func_106A58
    ctx->pc = 0x105C30u;
    SET_GPR_U32(ctx, 31, 0x105C38u);
    ctx->pc = 0x105C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C30u;
            // 0x105c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C38u; }
        if (ctx->pc != 0x105C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C38u; }
        if (ctx->pc != 0x105C38u) { return; }
    }
    ctx->pc = 0x105C38u;
label_105c38:
    // 0x105c38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105c3c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x105c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x105c40: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105c44: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x105c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x105c48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105c48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x105c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c50: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x105c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x105c54: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x105C54u;
    SET_GPR_U32(ctx, 31, 0x105C5Cu);
    ctx->pc = 0x105C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C54u;
            // 0x105c58: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C5Cu; }
        if (ctx->pc != 0x105C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C5Cu; }
        if (ctx->pc != 0x105C5Cu) { return; }
    }
    ctx->pc = 0x105C5Cu;
label_105c5c:
    // 0x105c5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105c64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105c68: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105c6c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105c70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105c70u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105c74: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105c74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105c78: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105c80: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105C80u;
    {
        const bool branch_taken_0x105c80 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C80u;
            // 0x105c84: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c80) {
            ctx->pc = 0x105C98u;
            goto label_105c98;
        }
    }
    ctx->pc = 0x105C88u;
    // 0x105c88: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x105c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x105c8c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x105c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x105c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105C90u;
    {
        const bool branch_taken_0x105c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C90u;
            // 0x105c94: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c90) {
            ctx->pc = 0x105C9Cu;
            goto label_105c9c;
        }
    }
    ctx->pc = 0x105C98u;
label_105c98:
    // 0x105c98: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_105c9c:
    // 0x105c9c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x105c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x105ca0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x105ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x105ca4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x105ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x105ca8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105cac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x105cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105cb0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x105cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x105cb4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x105cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x105cb8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x105cb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x105cbc: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x105cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x105cc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x105cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_105cc4:
    // 0x105cc4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x105cc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105cc8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x105cc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105ccc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105cccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105cd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105cd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105cd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105cd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105cd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105cdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105ce0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x105CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105CE8u;
            // 0x105cec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105CF0u;
}
