#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD950
// Address: 0x2bd950 - 0x2bdae0
void sub_002BD950_0x2bd950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD950_0x2bd950");
#endif

    switch (ctx->pc) {
        case 0x2bd96cu: goto label_2bd96c;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd9d4u: goto label_2bd9d4;
        case 0x2bd9f4u: goto label_2bd9f4;
        case 0x2bda10u: goto label_2bda10;
        case 0x2bda70u: goto label_2bda70;
        case 0x2bda7cu: goto label_2bda7c;
        case 0x2bda88u: goto label_2bda88;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdaacu: goto label_2bdaac;
        case 0x2bdac4u: goto label_2bdac4;
        default: break;
    }

    ctx->pc = 0x2bd950u;

    // 0x2bd950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bd954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bd958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd95c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2bd95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2bd960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd964: 0xc0af788  jal         func_2BDE20
    ctx->pc = 0x2BD964u;
    SET_GPR_U32(ctx, 31, 0x2BD96Cu);
    ctx->pc = 0x2BD968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD964u;
            // 0x2bd968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDE20u;
    if (runtime->hasFunction(0x2BDE20u)) {
        auto targetFn = runtime->lookupFunction(0x2BDE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD96Cu; }
        if (ctx->pc != 0x2BD96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDE20_0x2bde20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD96Cu; }
        if (ctx->pc != 0x2BD96Cu) { return; }
    }
    ctx->pc = 0x2BD96Cu;
label_2bd96c:
    // 0x2bd96c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd970: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd974: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x2bd974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x2bd978: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x2bd978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x2bd97c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bd980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd984: 0xc0af784  jal         func_2BDE10
    ctx->pc = 0x2BD984u;
    SET_GPR_U32(ctx, 31, 0x2BD98Cu);
    ctx->pc = 0x2BD988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD984u;
            // 0x2bd988: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDE10u;
    if (runtime->hasFunction(0x2BDE10u)) {
        auto targetFn = runtime->lookupFunction(0x2BDE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD98Cu; }
        if (ctx->pc != 0x2BD98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDE10_0x2bde10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD98Cu; }
        if (ctx->pc != 0x2BD98Cu) { return; }
    }
    ctx->pc = 0x2BD98Cu;
label_2bd98c:
    // 0x2bd98c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bd98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bd990: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2bd990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2bd994: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd998: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2bd998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bd99c: 0x24421e30  addiu       $v0, $v0, 0x1E30
    ctx->pc = 0x2bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x2bd9a0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2bd9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2bd9a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bd9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bd9a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd9ac: 0x24421e68  addiu       $v0, $v0, 0x1E68
    ctx->pc = 0x2bd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
    // 0x2bd9b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bd9b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2bd9b8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2bd9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2bd9bc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2bd9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2bd9c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2bd9c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2bd9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2bd9c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2bd9cc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2BD9CCu;
    SET_GPR_U32(ctx, 31, 0x2BD9D4u);
    ctx->pc = 0x2BD9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9CCu;
            // 0x2bd9d0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9D4u; }
        if (ctx->pc != 0x2BD9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9D4u; }
        if (ctx->pc != 0x2BD9D4u) { return; }
    }
    ctx->pc = 0x2BD9D4u;
label_2bd9d4:
    // 0x2bd9d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2bd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bd9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD9DCu;
    {
        const bool branch_taken_0x2bd9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9DCu;
            // 0x2bd9e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9dc) {
            ctx->pc = 0x2BD9F8u;
            goto label_2bd9f8;
        }
    }
    ctx->pc = 0x2BD9E4u;
    // 0x2bd9e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2bd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2bd9e8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2bd9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd9ec: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x2BD9ECu;
    SET_GPR_U32(ctx, 31, 0x2BD9F4u);
    ctx->pc = 0x2BD9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD9ECu;
            // 0x2bd9f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9F4u; }
        if (ctx->pc != 0x2BD9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD9F4u; }
        if (ctx->pc != 0x2BD9F4u) { return; }
    }
    ctx->pc = 0x2BD9F4u;
label_2bd9f4:
    // 0x2bd9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd9f8:
    // 0x2bd9f8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x2bd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x2bd9fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bd9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bda00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bda04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bda04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bda08: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA08u;
            // 0x2bda0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDA10u;
label_2bda10:
    // 0x2bda10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bda14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bda14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bda18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bda1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bda20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bda20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda24: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BDA24u;
    {
        const bool branch_taken_0x2bda24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA24u;
            // 0x2bda28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda24) {
            ctx->pc = 0x2BDAC4u;
            goto label_2bdac4;
        }
    }
    ctx->pc = 0x2BDA2Cu;
    // 0x2bda2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bda30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bda34: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x2bda34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x2bda38: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x2bda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x2bda3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bda40: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BDA40u;
    {
        const bool branch_taken_0x2bda40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA40u;
            // 0x2bda44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda40) {
            ctx->pc = 0x2BDAACu;
            goto label_2bdaac;
        }
    }
    ctx->pc = 0x2BDA48u;
    // 0x2bda48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bda48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bda4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bda50: 0x24631de0  addiu       $v1, $v1, 0x1DE0
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7648));
    // 0x2bda54: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bda54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bda58: 0x24421e18  addiu       $v0, $v0, 0x1E18
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7704));
    // 0x2bda5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bda60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bda60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bda64: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2bda64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2bda68: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BDA68u;
    SET_GPR_U32(ctx, 31, 0x2BDA70u);
    ctx->pc = 0x2BDA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA68u;
            // 0x2bda6c: 0x24a5dbb0  addiu       $a1, $a1, -0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA70u; }
        if (ctx->pc != 0x2BDA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA70u; }
        if (ctx->pc != 0x2BDA70u) { return; }
    }
    ctx->pc = 0x2BDA70u;
label_2bda70:
    // 0x2bda70: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2bda70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2bda74: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x2BDA74u;
    SET_GPR_U32(ctx, 31, 0x2BDA7Cu);
    ctx->pc = 0x2BDA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA74u;
            // 0x2bda78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA7Cu; }
        if (ctx->pc != 0x2BDA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA7Cu; }
        if (ctx->pc != 0x2BDA7Cu) { return; }
    }
    ctx->pc = 0x2BDA7Cu;
label_2bda7c:
    // 0x2bda7c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2bda7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2bda80: 0xc0af6d0  jal         func_2BDB40
    ctx->pc = 0x2BDA80u;
    SET_GPR_U32(ctx, 31, 0x2BDA88u);
    ctx->pc = 0x2BDA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA80u;
            // 0x2bda84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDB40u;
    if (runtime->hasFunction(0x2BDB40u)) {
        auto targetFn = runtime->lookupFunction(0x2BDB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA88u; }
        if (ctx->pc != 0x2BDA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDB40_0x2bdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA88u; }
        if (ctx->pc != 0x2BDA88u) { return; }
    }
    ctx->pc = 0x2BDA88u;
label_2bda88:
    // 0x2bda88: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bda88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bda8c: 0xc0af6d0  jal         func_2BDB40
    ctx->pc = 0x2BDA8Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA94u);
    ctx->pc = 0x2BDA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA8Cu;
            // 0x2bda90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDB40u;
    if (runtime->hasFunction(0x2BDB40u)) {
        auto targetFn = runtime->lookupFunction(0x2BDB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA94u; }
        if (ctx->pc != 0x2BDA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDB40_0x2bdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDA94u; }
        if (ctx->pc != 0x2BDA94u) { return; }
    }
    ctx->pc = 0x2BDA94u;
label_2bda94:
    // 0x2bda94: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2bda94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2bda98: 0xc0af6b8  jal         func_2BDAE0
    ctx->pc = 0x2BDA98u;
    SET_GPR_U32(ctx, 31, 0x2BDAA0u);
    ctx->pc = 0x2BDA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDA98u;
            // 0x2bda9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDAE0u;
    if (runtime->hasFunction(0x2BDAE0u)) {
        auto targetFn = runtime->lookupFunction(0x2BDAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAA0u; }
        if (ctx->pc != 0x2BDAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDAE0_0x2bdae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAA0u; }
        if (ctx->pc != 0x2BDAA0u) { return; }
    }
    ctx->pc = 0x2BDAA0u;
label_2bdaa0:
    // 0x2bdaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdaa4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BDAA4u;
    SET_GPR_U32(ctx, 31, 0x2BDAACu);
    ctx->pc = 0x2BDAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAA4u;
            // 0x2bdaa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAACu; }
        if (ctx->pc != 0x2BDAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAACu; }
        if (ctx->pc != 0x2BDAACu) { return; }
    }
    ctx->pc = 0x2BDAACu;
label_2bdaac:
    // 0x2bdaac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bdaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2bdab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bdab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bdab4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDAB4u;
    {
        const bool branch_taken_0x2bdab4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bdab4) {
            ctx->pc = 0x2BDAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAB4u;
            // 0x2bdab8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDAC8u;
            goto label_2bdac8;
        }
    }
    ctx->pc = 0x2BDABCu;
    // 0x2bdabc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BDABCu;
    SET_GPR_U32(ctx, 31, 0x2BDAC4u);
    ctx->pc = 0x2BDAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDABCu;
            // 0x2bdac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAC4u; }
        if (ctx->pc != 0x2BDAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAC4u; }
        if (ctx->pc != 0x2BDAC4u) { return; }
    }
    ctx->pc = 0x2BDAC4u;
label_2bdac4:
    // 0x2bdac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bdac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdac8:
    // 0x2bdac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bdac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bdaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bdad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDAD4u;
            // 0x2bdad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDADCu;
    // 0x2bdadc: 0x0  nop
    ctx->pc = 0x2bdadcu;
    // NOP
}
