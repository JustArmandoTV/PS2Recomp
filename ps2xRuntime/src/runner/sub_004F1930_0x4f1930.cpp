#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F1930
// Address: 0x4f1930 - 0x4f1ac0
void sub_004F1930_0x4f1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1930_0x4f1930");
#endif

    switch (ctx->pc) {
        case 0x4f194cu: goto label_4f194c;
        case 0x4f196cu: goto label_4f196c;
        case 0x4f19b4u: goto label_4f19b4;
        case 0x4f19d0u: goto label_4f19d0;
        case 0x4f19f0u: goto label_4f19f0;
        case 0x4f1a50u: goto label_4f1a50;
        case 0x4f1a5cu: goto label_4f1a5c;
        case 0x4f1a68u: goto label_4f1a68;
        case 0x4f1a74u: goto label_4f1a74;
        case 0x4f1a80u: goto label_4f1a80;
        case 0x4f1a8cu: goto label_4f1a8c;
        case 0x4f1aa4u: goto label_4f1aa4;
        default: break;
    }

    ctx->pc = 0x4f1930u;

    // 0x4f1930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f1934: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f1934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f1938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f1938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f193c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4f193cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4f1940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f1944: 0xc13c6e8  jal         func_4F1BA0
    ctx->pc = 0x4F1944u;
    SET_GPR_U32(ctx, 31, 0x4F194Cu);
    ctx->pc = 0x4F1948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1944u;
            // 0x4f1948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1BA0u;
    if (runtime->hasFunction(0x4F1BA0u)) {
        auto targetFn = runtime->lookupFunction(0x4F1BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F194Cu; }
        if (ctx->pc != 0x4F194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1BA0_0x4f1ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F194Cu; }
        if (ctx->pc != 0x4F194Cu) { return; }
    }
    ctx->pc = 0x4F194Cu;
label_4f194c:
    // 0x4f194c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f194cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f1950: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f1954: 0x246340f0  addiu       $v1, $v1, 0x40F0
    ctx->pc = 0x4f1954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16624));
    // 0x4f1958: 0x24424128  addiu       $v0, $v0, 0x4128
    ctx->pc = 0x4f1958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
    // 0x4f195c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f195cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f1960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f1960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1964: 0xc13c6e4  jal         func_4F1B90
    ctx->pc = 0x4F1964u;
    SET_GPR_U32(ctx, 31, 0x4F196Cu);
    ctx->pc = 0x4F1968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1964u;
            // 0x4f1968: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1B90u;
    if (runtime->hasFunction(0x4F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x4F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F196Cu; }
        if (ctx->pc != 0x4F196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1B90_0x4f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F196Cu; }
        if (ctx->pc != 0x4F196Cu) { return; }
    }
    ctx->pc = 0x4F196Cu;
label_4f196c:
    // 0x4f196c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f196cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4f1970: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4f1970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4f1974: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f1978: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4f1978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4f197c: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x4f197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x4f1980: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4f1980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4f1984: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f1984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f1988: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f198c: 0x24424078  addiu       $v0, $v0, 0x4078
    ctx->pc = 0x4f198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16504));
    // 0x4f1990: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f1990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f1994: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x4f1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x4f1998: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4f1998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4f199c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4f199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4f19a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f19a4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4f19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4f19a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4f19a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4f19ac: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4F19ACu;
    SET_GPR_U32(ctx, 31, 0x4F19B4u);
    ctx->pc = 0x4F19B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F19ACu;
            // 0x4f19b0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F19B4u; }
        if (ctx->pc != 0x4F19B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F19B4u; }
        if (ctx->pc != 0x4F19B4u) { return; }
    }
    ctx->pc = 0x4F19B4u;
label_4f19b4:
    // 0x4f19b4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4f19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4f19b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f19b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f19bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F19BCu;
    {
        const bool branch_taken_0x4f19bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F19C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F19BCu;
            // 0x4f19c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f19bc) {
            ctx->pc = 0x4F19D4u;
            goto label_4f19d4;
        }
    }
    ctx->pc = 0x4F19C4u;
    // 0x4f19c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f19c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f19c8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4F19C8u;
    SET_GPR_U32(ctx, 31, 0x4F19D0u);
    ctx->pc = 0x4F19CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F19C8u;
            // 0x4f19cc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F19D0u; }
        if (ctx->pc != 0x4F19D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F19D0u; }
        if (ctx->pc != 0x4F19D0u) { return; }
    }
    ctx->pc = 0x4F19D0u;
label_4f19d0:
    // 0x4f19d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f19d4:
    // 0x4f19d4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4f19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4f19d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f19d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f19dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f19dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f19e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f19e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f19e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F19E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F19E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F19E4u;
            // 0x4f19e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F19ECu;
    // 0x4f19ec: 0x0  nop
    ctx->pc = 0x4f19ecu;
    // NOP
label_4f19f0:
    // 0x4f19f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f19f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f19f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f19fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f1a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f1a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1a04: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4F1A04u;
    {
        const bool branch_taken_0x4f1a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A04u;
            // 0x4f1a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1a04) {
            ctx->pc = 0x4F1AA4u;
            goto label_4f1aa4;
        }
    }
    ctx->pc = 0x4F1A0Cu;
    // 0x4f1a0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f1a10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f1a14: 0x246340f0  addiu       $v1, $v1, 0x40F0
    ctx->pc = 0x4f1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16624));
    // 0x4f1a18: 0x24424128  addiu       $v0, $v0, 0x4128
    ctx->pc = 0x4f1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
    // 0x4f1a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f1a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f1a20: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F1A20u;
    {
        const bool branch_taken_0x4f1a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A20u;
            // 0x4f1a24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1a20) {
            ctx->pc = 0x4F1A8Cu;
            goto label_4f1a8c;
        }
    }
    ctx->pc = 0x4F1A28u;
    // 0x4f1a28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f1a2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f1a30: 0x246340a0  addiu       $v1, $v1, 0x40A0
    ctx->pc = 0x4f1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16544));
    // 0x4f1a34: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f1a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f1a38: 0x244240d8  addiu       $v0, $v0, 0x40D8
    ctx->pc = 0x4f1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16600));
    // 0x4f1a3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f1a40: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4f1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4f1a44: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4f1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4f1a48: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4F1A48u;
    SET_GPR_U32(ctx, 31, 0x4F1A50u);
    ctx->pc = 0x4F1A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A48u;
            // 0x4f1a4c: 0x24a513c0  addiu       $a1, $a1, 0x13C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A50u; }
        if (ctx->pc != 0x4F1A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A50u; }
        if (ctx->pc != 0x4F1A50u) { return; }
    }
    ctx->pc = 0x4F1A50u;
label_4f1a50:
    // 0x4f1a50: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4f1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4f1a54: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4F1A54u;
    SET_GPR_U32(ctx, 31, 0x4F1A5Cu);
    ctx->pc = 0x4F1A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A54u;
            // 0x4f1a58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A5Cu; }
        if (ctx->pc != 0x4F1A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A5Cu; }
        if (ctx->pc != 0x4F1A5Cu) { return; }
    }
    ctx->pc = 0x4F1A5Cu;
label_4f1a5c:
    // 0x4f1a5c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4f1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4f1a60: 0xc13c6c8  jal         func_4F1B20
    ctx->pc = 0x4F1A60u;
    SET_GPR_U32(ctx, 31, 0x4F1A68u);
    ctx->pc = 0x4F1A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A60u;
            // 0x4f1a64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1B20u;
    if (runtime->hasFunction(0x4F1B20u)) {
        auto targetFn = runtime->lookupFunction(0x4F1B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A68u; }
        if (ctx->pc != 0x4F1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1B20_0x4f1b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A68u; }
        if (ctx->pc != 0x4F1A68u) { return; }
    }
    ctx->pc = 0x4F1A68u;
label_4f1a68:
    // 0x4f1a68: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4f1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4f1a6c: 0xc13c6c8  jal         func_4F1B20
    ctx->pc = 0x4F1A6Cu;
    SET_GPR_U32(ctx, 31, 0x4F1A74u);
    ctx->pc = 0x4F1A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A6Cu;
            // 0x4f1a70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1B20u;
    if (runtime->hasFunction(0x4F1B20u)) {
        auto targetFn = runtime->lookupFunction(0x4F1B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A74u; }
        if (ctx->pc != 0x4F1A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1B20_0x4f1b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A74u; }
        if (ctx->pc != 0x4F1A74u) { return; }
    }
    ctx->pc = 0x4F1A74u;
label_4f1a74:
    // 0x4f1a74: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4f1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4f1a78: 0xc13c6b0  jal         func_4F1AC0
    ctx->pc = 0x4F1A78u;
    SET_GPR_U32(ctx, 31, 0x4F1A80u);
    ctx->pc = 0x4F1A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A78u;
            // 0x4f1a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1AC0u;
    if (runtime->hasFunction(0x4F1AC0u)) {
        auto targetFn = runtime->lookupFunction(0x4F1AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A80u; }
        if (ctx->pc != 0x4F1A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1AC0_0x4f1ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A80u; }
        if (ctx->pc != 0x4F1A80u) { return; }
    }
    ctx->pc = 0x4F1A80u;
label_4f1a80:
    // 0x4f1a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f1a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1a84: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4F1A84u;
    SET_GPR_U32(ctx, 31, 0x4F1A8Cu);
    ctx->pc = 0x4F1A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A84u;
            // 0x4f1a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A8Cu; }
        if (ctx->pc != 0x4F1A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1A8Cu; }
        if (ctx->pc != 0x4F1A8Cu) { return; }
    }
    ctx->pc = 0x4F1A8Cu;
label_4f1a8c:
    // 0x4f1a8c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4f1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4f1a90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f1a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f1a94: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F1A94u;
    {
        const bool branch_taken_0x4f1a94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f1a94) {
            ctx->pc = 0x4F1A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A94u;
            // 0x4f1a98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1AA8u;
            goto label_4f1aa8;
        }
    }
    ctx->pc = 0x4F1A9Cu;
    // 0x4f1a9c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F1A9Cu;
    SET_GPR_U32(ctx, 31, 0x4F1AA4u);
    ctx->pc = 0x4F1AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1A9Cu;
            // 0x4f1aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1AA4u; }
        if (ctx->pc != 0x4F1AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1AA4u; }
        if (ctx->pc != 0x4F1AA4u) { return; }
    }
    ctx->pc = 0x4F1AA4u;
label_4f1aa4:
    // 0x4f1aa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f1aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f1aa8:
    // 0x4f1aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f1aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1AB4u;
            // 0x4f1ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1ABCu;
    // 0x4f1abc: 0x0  nop
    ctx->pc = 0x4f1abcu;
    // NOP
}
