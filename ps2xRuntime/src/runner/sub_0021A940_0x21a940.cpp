#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A940
// Address: 0x21a940 - 0x21b0f0
void sub_0021A940_0x21a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A940_0x21a940");
#endif

    switch (ctx->pc) {
        case 0x21aa3cu: goto label_21aa3c;
        case 0x21aadcu: goto label_21aadc;
        case 0x21ac2cu: goto label_21ac2c;
        case 0x21ac44u: goto label_21ac44;
        case 0x21ac5cu: goto label_21ac5c;
        case 0x21ad08u: goto label_21ad08;
        case 0x21ad20u: goto label_21ad20;
        case 0x21ad38u: goto label_21ad38;
        case 0x21adccu: goto label_21adcc;
        case 0x21ade4u: goto label_21ade4;
        case 0x21adfcu: goto label_21adfc;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae64u: goto label_21ae64;
        case 0x21ae7cu: goto label_21ae7c;
        case 0x21af98u: goto label_21af98;
        case 0x21afdcu: goto label_21afdc;
        case 0x21b004u: goto label_21b004;
        case 0x21b01cu: goto label_21b01c;
        case 0x21b034u: goto label_21b034;
        case 0x21b0a8u: goto label_21b0a8;
        case 0x21b0c0u: goto label_21b0c0;
        case 0x21b0d8u: goto label_21b0d8;
        default: break;
    }

    ctx->pc = 0x21a940u;

    // 0x21a940: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a944: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21a944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21a948: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21a94c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a94cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21a954: 0x2463e740  addiu       $v1, $v1, -0x18C0
    ctx->pc = 0x21a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960960));
    // 0x21a958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a95c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21a960: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21a964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a968: 0xa4880006  sh          $t0, 0x6($a0)
    ctx->pc = 0x21a968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x21a96c: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x21a970: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21a974: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x21a974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x21a978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a97c: 0x2442e6f0  addiu       $v0, $v0, -0x1910
    ctx->pc = 0x21a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
    // 0x21a980: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21a980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21a984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21a988: 0x94e3006e  lhu         $v1, 0x6E($a3)
    ctx->pc = 0x21a988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 110)));
    // 0x21a98c: 0x94c2006e  lhu         $v0, 0x6E($a2)
    ctx->pc = 0x21a98cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 110)));
    // 0x21a990: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x21a990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21a994: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21A994u;
    {
        const bool branch_taken_0x21a994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a994) {
            ctx->pc = 0x21A998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A994u;
            // 0x21a998: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A99Cu;
            goto label_21a99c;
        }
    }
    ctx->pc = 0x21A99Cu;
label_21a99c:
    // 0x21a99c: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x21a99cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x21a9a0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x21a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x21a9a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21a9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9a8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x21a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x21a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21A9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9ACu;
            // 0x21a9b0: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A9B4u;
    // 0x21a9b4: 0x0  nop
    ctx->pc = 0x21a9b4u;
    // NOP
    // 0x21a9b8: 0x0  nop
    ctx->pc = 0x21a9b8u;
    // NOP
    // 0x21a9bc: 0x0  nop
    ctx->pc = 0x21a9bcu;
    // NOP
    // 0x21a9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9d0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A9D0u;
    {
        const bool branch_taken_0x21a9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a9d0) {
            ctx->pc = 0x21A9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9D0u;
            // 0x21a9d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AA40u;
            goto label_21aa40;
        }
    }
    ctx->pc = 0x21A9D8u;
    // 0x21a9d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a9dc: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x21a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
    // 0x21a9e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x21A9E0u;
    {
        const bool branch_taken_0x21a9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9E0u;
            // 0x21a9e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9e0) {
            ctx->pc = 0x21AA14u;
            goto label_21aa14;
        }
    }
    ctx->pc = 0x21A9E8u;
    // 0x21a9e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a9ec: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x21a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x21a9f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A9F0u;
    {
        const bool branch_taken_0x21a9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9F0u;
            // 0x21a9f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a9f0) {
            ctx->pc = 0x21AA14u;
            goto label_21aa14;
        }
    }
    ctx->pc = 0x21A9F8u;
    // 0x21a9f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a9fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21aa00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AA00u;
    {
        const bool branch_taken_0x21aa00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA00u;
            // 0x21aa04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa00) {
            ctx->pc = 0x21AA14u;
            goto label_21aa14;
        }
    }
    ctx->pc = 0x21AA08u;
    // 0x21aa08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21aa0c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21aa10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21aa14:
    // 0x21aa14: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21aa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x21aa18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21aa18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21aa1c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AA1Cu;
    {
        const bool branch_taken_0x21aa1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21aa1c) {
            ctx->pc = 0x21AA3Cu;
            goto label_21aa3c;
        }
    }
    ctx->pc = 0x21AA24u;
    // 0x21aa24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21aa28: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21aa28u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21aa2c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21aa30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa34: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21AA34u;
    SET_GPR_U32(ctx, 31, 0x21AA3Cu);
    ctx->pc = 0x21AA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA34u;
            // 0x21aa38: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA3Cu; }
        if (ctx->pc != 0x21AA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA3Cu; }
        if (ctx->pc != 0x21AA3Cu) { return; }
    }
    ctx->pc = 0x21AA3Cu;
label_21aa3c:
    // 0x21aa3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21aa3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21aa40:
    // 0x21aa40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aa44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21aa44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aa48: 0x3e00008  jr          $ra
    ctx->pc = 0x21AA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA48u;
            // 0x21aa4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AA50u;
    // 0x21aa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21aa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21aa5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21aa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa60: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x21AA60u;
    {
        const bool branch_taken_0x21aa60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa60) {
            ctx->pc = 0x21AA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA60u;
            // 0x21aa64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AAE0u;
            goto label_21aae0;
        }
    }
    ctx->pc = 0x21AA68u;
    // 0x21aa68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21aa6c: 0x2442e6f0  addiu       $v0, $v0, -0x1910
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
    // 0x21aa70: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21AA70u;
    {
        const bool branch_taken_0x21aa70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA70u;
            // 0x21aa74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa70) {
            ctx->pc = 0x21AAB4u;
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21AA78u;
    // 0x21aa78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21aa7c: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x21aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
    // 0x21aa80: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x21AA80u;
    {
        const bool branch_taken_0x21aa80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA80u;
            // 0x21aa84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa80) {
            ctx->pc = 0x21AAB4u;
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21AA88u;
    // 0x21aa88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21aa8c: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x21aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x21aa90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21AA90u;
    {
        const bool branch_taken_0x21aa90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA90u;
            // 0x21aa94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa90) {
            ctx->pc = 0x21AAB4u;
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21AA98u;
    // 0x21aa98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21aa9c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21aaa0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AAA0u;
    {
        const bool branch_taken_0x21aaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AAA0u;
            // 0x21aaa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aaa0) {
            ctx->pc = 0x21AAB4u;
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21AAA8u;
    // 0x21aaa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21aaac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21aab0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21aab4:
    // 0x21aab4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x21aab8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21aab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21aabc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AABCu;
    {
        const bool branch_taken_0x21aabc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21aabc) {
            ctx->pc = 0x21AADCu;
            goto label_21aadc;
        }
    }
    ctx->pc = 0x21AAC4u;
    // 0x21aac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21aac8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21aac8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21aacc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21aad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21aad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21AAD4u;
    SET_GPR_U32(ctx, 31, 0x21AADCu);
    ctx->pc = 0x21AAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AAD4u;
            // 0x21aad8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AADCu; }
        if (ctx->pc != 0x21AADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AADCu; }
        if (ctx->pc != 0x21AADCu) { return; }
    }
    ctx->pc = 0x21AADCu;
label_21aadc:
    // 0x21aadc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21aadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21aae0:
    // 0x21aae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21aae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aae8: 0x3e00008  jr          $ra
    ctx->pc = 0x21AAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AAE8u;
            // 0x21aaec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AAF0u;
    // 0x21aaf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21aaf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aaf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21aafc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21ab00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ab04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ab08: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x21ab08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21ab0c: 0xc54b0008  lwc1        $f11, 0x8($t2)
    ctx->pc = 0x21ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x21ab10: 0xc54d0000  lwc1        $f13, 0x0($t2)
    ctx->pc = 0x21ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21ab14: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x21ab14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21ab18: 0xc54c0004  lwc1        $f12, 0x4($t2)
    ctx->pc = 0x21ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ab1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ab1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab20: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x21ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab24: 0xc6420100  lwc1        $f2, 0x100($s2)
    ctx->pc = 0x21ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ab28: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x21ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ab2c: 0x46005981  sub.s       $f6, $f11, $f0
    ctx->pc = 0x21ab2cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x21ab30: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x21ab30u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x21ab34: 0xc6440194  lwc1        $f4, 0x194($s2)
    ctx->pc = 0x21ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21ab38: 0x46026a01  sub.s       $f8, $f13, $f2
    ctx->pc = 0x21ab38u;
    ctx->f[8] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x21ab3c: 0xc6450198  lwc1        $f5, 0x198($s2)
    ctx->pc = 0x21ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21ab40: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x21ab40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21ab44: 0xc6400180  lwc1        $f0, 0x180($s2)
    ctx->pc = 0x21ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab48: 0x4607289d  msub.s      $f2, $f5, $f7
    ctx->pc = 0x21ab48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x21ab4c: 0xc6410190  lwc1        $f1, 0x190($s2)
    ctx->pc = 0x21ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ab50: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x21ab50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21ab54: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x21ab54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x21ab58: 0x4606095d  msub.s      $f5, $f1, $f6
    ctx->pc = 0x21ab58u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x21ab5c: 0x4607081a  mula.s      $f1, $f7
    ctx->pc = 0x21ab5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x21ab60: 0xc6420184  lwc1        $f2, 0x184($s2)
    ctx->pc = 0x21ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ab64: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x21ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab68: 0x4608211d  msub.s      $f4, $f4, $f8
    ctx->pc = 0x21ab68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x21ab6c: 0xc6410188  lwc1        $f1, 0x188($s2)
    ctx->pc = 0x21ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ab70: 0x46006a01  sub.s       $f8, $f13, $f0
    ctx->pc = 0x21ab70u;
    ctx->f[8] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x21ab74: 0x46012240  add.s       $f9, $f4, $f1
    ctx->pc = 0x21ab74u;
    ctx->f[9] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x21ab78: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x21ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab7c: 0x46022a80  add.s       $f10, $f5, $f2
    ctx->pc = 0x21ab7cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x21ab80: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x21ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ab84: 0x46005981  sub.s       $f6, $f11, $f0
    ctx->pc = 0x21ab84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x21ab88: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x21ab88u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x21ab8c: 0xc6240194  lwc1        $f4, 0x194($s1)
    ctx->pc = 0x21ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21ab90: 0xc6250198  lwc1        $f5, 0x198($s1)
    ctx->pc = 0x21ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21ab94: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x21ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab98: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x21ab98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21ab9c: 0x4607289d  msub.s      $f2, $f5, $f7
    ctx->pc = 0x21ab9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x21aba0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21aba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21aba4: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x21aba4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x21aba8: 0xc6210190  lwc1        $f1, 0x190($s1)
    ctx->pc = 0x21aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21abac: 0x4608281a  mula.s      $f5, $f8
    ctx->pc = 0x21abacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x21abb0: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x21abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21abb4: 0x4606095d  msub.s      $f5, $f1, $f6
    ctx->pc = 0x21abb4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x21abb8: 0x4607081a  mula.s      $f1, $f7
    ctx->pc = 0x21abb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x21abbc: 0x4608209d  msub.s      $f2, $f4, $f8
    ctx->pc = 0x21abbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x21abc0: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x21abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21abc4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21abc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21abc8: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x21abc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x21abcc: 0x46090141  sub.s       $f5, $f0, $f9
    ctx->pc = 0x21abccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x21abd0: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x21abd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x21abd4: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x21abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21abd8: 0xc5420010  lwc1        $f2, 0x10($t2)
    ctx->pc = 0x21abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21abdc: 0xc5440018  lwc1        $f4, 0x18($t2)
    ctx->pc = 0x21abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21abe0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x21abe0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21abe4: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x21abe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x21abe8: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x21abe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x21abec: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x21abecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x21abf0: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x21abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x21abf4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21abf8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x21abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x21abfc: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x21abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x21ac00: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x21ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x21ac04: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x21ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x21ac08: 0xafa8006c  sw          $t0, 0x6C($sp)
    ctx->pc = 0x21ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 8));
    // 0x21ac0c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x21ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x21ac10: 0xafb00064  sw          $s0, 0x64($sp)
    ctx->pc = 0x21ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 16));
    // 0x21ac14: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x21ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x21ac18: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x21ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x21ac1c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x21ac1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x21ac20: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21ac24: 0xc08e634  jal         func_2398D0
    ctx->pc = 0x21AC24u;
    SET_GPR_U32(ctx, 31, 0x21AC2Cu);
    ctx->pc = 0x21AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC24u;
            // 0x21ac28: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2398D0u;
    if (runtime->hasFunction(0x2398D0u)) {
        auto targetFn = runtime->lookupFunction(0x2398D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC2Cu; }
        if (ctx->pc != 0x21AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002398D0_0x2398d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC2Cu; }
        if (ctx->pc != 0x21AC2Cu) { return; }
    }
    ctx->pc = 0x21AC2Cu;
label_21ac2c:
    // 0x21ac2c: 0x964201d4  lhu         $v0, 0x1D4($s2)
    ctx->pc = 0x21ac2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x21ac30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC30u;
    {
        const bool branch_taken_0x21ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ac30) {
            ctx->pc = 0x21AC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC30u;
            // 0x21ac34: 0x962201d4  lhu         $v0, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AC48u;
            goto label_21ac48;
        }
    }
    ctx->pc = 0x21AC38u;
    // 0x21ac38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac3c: 0xc0894d4  jal         func_225350
    ctx->pc = 0x21AC3Cu;
    SET_GPR_U32(ctx, 31, 0x21AC44u);
    ctx->pc = 0x21AC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC3Cu;
            // 0x21ac40: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC44u; }
        if (ctx->pc != 0x21AC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC44u; }
        if (ctx->pc != 0x21AC44u) { return; }
    }
    ctx->pc = 0x21AC44u;
label_21ac44:
    // 0x21ac44: 0x962201d4  lhu         $v0, 0x1D4($s1)
    ctx->pc = 0x21ac44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21ac48:
    // 0x21ac48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC48u;
    {
        const bool branch_taken_0x21ac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ac48) {
            ctx->pc = 0x21AC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC48u;
            // 0x21ac4c: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AC60u;
            goto label_21ac60;
        }
    }
    ctx->pc = 0x21AC50u;
    // 0x21ac50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac54: 0xc0894d4  jal         func_225350
    ctx->pc = 0x21AC54u;
    SET_GPR_U32(ctx, 31, 0x21AC5Cu);
    ctx->pc = 0x21AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC54u;
            // 0x21ac58: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC5Cu; }
        if (ctx->pc != 0x21AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC5Cu; }
        if (ctx->pc != 0x21AC5Cu) { return; }
    }
    ctx->pc = 0x21AC5Cu;
label_21ac5c:
    // 0x21ac5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21ac60:
    // 0x21ac60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AC60u;
    {
        const bool branch_taken_0x21ac60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac60) {
            ctx->pc = 0x21AC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC60u;
            // 0x21ac64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AC74u;
            goto label_21ac74;
        }
    }
    ctx->pc = 0x21AC68u;
    // 0x21ac68: 0x97a30072  lhu         $v1, 0x72($sp)
    ctx->pc = 0x21ac68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x21ac6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21ac6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac70: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x21ac70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_21ac74:
    // 0x21ac74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21ac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ac78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ac7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ac7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ac80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AC84u;
            // 0x21ac88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AC8Cu;
    // 0x21ac8c: 0x0  nop
    ctx->pc = 0x21ac8cu;
    // NOP
    // 0x21ac90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21ac94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ac98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21ac9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21aca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21aca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21aca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21aca8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x21aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21acac: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x21acacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb0: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x21acb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x21acb4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x21acb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x21acb8: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x21acb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x21acbc: 0xa0620007  sb          $v0, 0x7($v1)
    ctx->pc = 0x21acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x21acc0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x21acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21acc4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x21acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x21acc8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21accc: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x21acccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x21acd0: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x21acd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x21acd4: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x21acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
    // 0x21acd8: 0xafaa0054  sw          $t2, 0x54($sp)
    ctx->pc = 0x21acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 10));
    // 0x21acdc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x21acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x21ace0: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x21ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x21ace4: 0xafa8006c  sw          $t0, 0x6C($sp)
    ctx->pc = 0x21ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 8));
    // 0x21ace8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x21ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x21acec: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x21acecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x21acf0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x21acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x21acf4: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x21acf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21acf8: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21acfc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21ad00: 0xc08e634  jal         func_2398D0
    ctx->pc = 0x21AD00u;
    SET_GPR_U32(ctx, 31, 0x21AD08u);
    ctx->pc = 0x21AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD00u;
            // 0x21ad04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2398D0u;
    if (runtime->hasFunction(0x2398D0u)) {
        auto targetFn = runtime->lookupFunction(0x2398D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD08u; }
        if (ctx->pc != 0x21AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002398D0_0x2398d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD08u; }
        if (ctx->pc != 0x21AD08u) { return; }
    }
    ctx->pc = 0x21AD08u;
label_21ad08:
    // 0x21ad08: 0x964201d4  lhu         $v0, 0x1D4($s2)
    ctx->pc = 0x21ad08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x21ad0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AD0Cu;
    {
        const bool branch_taken_0x21ad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ad0c) {
            ctx->pc = 0x21AD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD0Cu;
            // 0x21ad10: 0x962201d4  lhu         $v0, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AD24u;
            goto label_21ad24;
        }
    }
    ctx->pc = 0x21AD14u;
    // 0x21ad14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad18: 0xc0894d4  jal         func_225350
    ctx->pc = 0x21AD18u;
    SET_GPR_U32(ctx, 31, 0x21AD20u);
    ctx->pc = 0x21AD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD18u;
            // 0x21ad1c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD20u; }
        if (ctx->pc != 0x21AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD20u; }
        if (ctx->pc != 0x21AD20u) { return; }
    }
    ctx->pc = 0x21AD20u;
label_21ad20:
    // 0x21ad20: 0x962201d4  lhu         $v0, 0x1D4($s1)
    ctx->pc = 0x21ad20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21ad24:
    // 0x21ad24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AD24u;
    {
        const bool branch_taken_0x21ad24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ad24) {
            ctx->pc = 0x21AD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD24u;
            // 0x21ad28: 0xc7a0005c  lwc1        $f0, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AD3Cu;
            goto label_21ad3c;
        }
    }
    ctx->pc = 0x21AD2Cu;
    // 0x21ad2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad30: 0xc0894d4  jal         func_225350
    ctx->pc = 0x21AD30u;
    SET_GPR_U32(ctx, 31, 0x21AD38u);
    ctx->pc = 0x21AD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD30u;
            // 0x21ad34: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD38u; }
        if (ctx->pc != 0x21AD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD38u; }
        if (ctx->pc != 0x21AD38u) { return; }
    }
    ctx->pc = 0x21AD38u;
label_21ad38:
    // 0x21ad38: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x21ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ad3c:
    // 0x21ad3c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x21ad3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ad40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ad44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21ad44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ad48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ad48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ad4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ad4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ad50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ad50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ad54: 0x3e00008  jr          $ra
    ctx->pc = 0x21AD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD54u;
            // 0x21ad58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AD5Cu;
    // 0x21ad5c: 0x0  nop
    ctx->pc = 0x21ad5cu;
    // NOP
    // 0x21ad60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21ad64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ad68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ad6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ad70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ad74: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x21ad78: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AD78u;
    {
        const bool branch_taken_0x21ad78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ad78) {
            ctx->pc = 0x21AD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD78u;
            // 0x21ad7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AD88u;
            goto label_21ad88;
        }
    }
    ctx->pc = 0x21AD80u;
    // 0x21ad80: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x21ad80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21ad84: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x21ad84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21ad88:
    // 0x21ad88: 0x80c30018  lb          $v1, 0x18($a2)
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x21ad8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ad90: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AD90u;
    {
        const bool branch_taken_0x21ad90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ad90) {
            ctx->pc = 0x21AD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AD90u;
            // 0x21ad94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21ADA0u;
            goto label_21ada0;
        }
    }
    ctx->pc = 0x21AD98u;
    // 0x21ad98: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21ad9c: 0xc28821  addu        $s1, $a2, $v0
    ctx->pc = 0x21ad9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21ada0:
    // 0x21ada0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21ada4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ada4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ada8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x21ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21adac: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x21adacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x21adb0: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x21adb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x21adb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adb8: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x21adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x21adbc: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x21adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x21adc0: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x21adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x21adc4: 0xc08e6bc  jal         func_239AF0
    ctx->pc = 0x21ADC4u;
    SET_GPR_U32(ctx, 31, 0x21ADCCu);
    ctx->pc = 0x21ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADC4u;
            // 0x21adc8: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239AF0u;
    if (runtime->hasFunction(0x239AF0u)) {
        auto targetFn = runtime->lookupFunction(0x239AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADCCu; }
        if (ctx->pc != 0x21ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239AF0_0x239af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADCCu; }
        if (ctx->pc != 0x21ADCCu) { return; }
    }
    ctx->pc = 0x21ADCCu;
label_21adcc:
    // 0x21adcc: 0x960301d4  lhu         $v1, 0x1D4($s0)
    ctx->pc = 0x21adccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x21add0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ADD0u;
    {
        const bool branch_taken_0x21add0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21add0) {
            ctx->pc = 0x21ADD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADD0u;
            // 0x21add4: 0x962301d4  lhu         $v1, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21ADE8u;
            goto label_21ade8;
        }
    }
    ctx->pc = 0x21ADD8u;
    // 0x21add8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21add8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21addc: 0xc08955c  jal         func_225570
    ctx->pc = 0x21ADDCu;
    SET_GPR_U32(ctx, 31, 0x21ADE4u);
    ctx->pc = 0x21ADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADDCu;
            // 0x21ade0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADE4u; }
        if (ctx->pc != 0x21ADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADE4u; }
        if (ctx->pc != 0x21ADE4u) { return; }
    }
    ctx->pc = 0x21ADE4u;
label_21ade4:
    // 0x21ade4: 0x962301d4  lhu         $v1, 0x1D4($s1)
    ctx->pc = 0x21ade4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21ade8:
    // 0x21ade8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ADE8u;
    {
        const bool branch_taken_0x21ade8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ade8) {
            ctx->pc = 0x21ADECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADE8u;
            // 0x21adec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AE00u;
            goto label_21ae00;
        }
    }
    ctx->pc = 0x21ADF0u;
    // 0x21adf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21adf4: 0xc08955c  jal         func_225570
    ctx->pc = 0x21ADF4u;
    SET_GPR_U32(ctx, 31, 0x21ADFCu);
    ctx->pc = 0x21ADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ADF4u;
            // 0x21adf8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADFCu; }
        if (ctx->pc != 0x21ADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADFCu; }
        if (ctx->pc != 0x21ADFCu) { return; }
    }
    ctx->pc = 0x21ADFCu;
label_21adfc:
    // 0x21adfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21adfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21ae00:
    // 0x21ae00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ae00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ae04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ae04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x21AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE08u;
            // 0x21ae0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AE10u;
    // 0x21ae10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21ae14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ae18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ae1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ae20: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x21ae20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21ae24: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x21ae24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21ae28: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x21ae28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x21ae2c: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x21ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x21ae30: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x21ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x21ae34: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x21ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x21ae38: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x21ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x21ae3c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x21ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x21ae40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x21ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21ae44: 0xc08e6bc  jal         func_239AF0
    ctx->pc = 0x21AE44u;
    SET_GPR_U32(ctx, 31, 0x21AE4Cu);
    ctx->pc = 0x21AE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE44u;
            // 0x21ae48: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239AF0u;
    if (runtime->hasFunction(0x239AF0u)) {
        auto targetFn = runtime->lookupFunction(0x239AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE4Cu; }
        if (ctx->pc != 0x21AE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239AF0_0x239af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE4Cu; }
        if (ctx->pc != 0x21AE4Cu) { return; }
    }
    ctx->pc = 0x21AE4Cu;
label_21ae4c:
    // 0x21ae4c: 0x962301d4  lhu         $v1, 0x1D4($s1)
    ctx->pc = 0x21ae4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x21ae50: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AE50u;
    {
        const bool branch_taken_0x21ae50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae50) {
            ctx->pc = 0x21AE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE50u;
            // 0x21ae54: 0x960301d4  lhu         $v1, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AE68u;
            goto label_21ae68;
        }
    }
    ctx->pc = 0x21AE58u;
    // 0x21ae58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae5c: 0xc08955c  jal         func_225570
    ctx->pc = 0x21AE5Cu;
    SET_GPR_U32(ctx, 31, 0x21AE64u);
    ctx->pc = 0x21AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE5Cu;
            // 0x21ae60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE64u; }
        if (ctx->pc != 0x21AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE64u; }
        if (ctx->pc != 0x21AE64u) { return; }
    }
    ctx->pc = 0x21AE64u;
label_21ae64:
    // 0x21ae64: 0x960301d4  lhu         $v1, 0x1D4($s0)
    ctx->pc = 0x21ae64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21ae68:
    // 0x21ae68: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AE68u;
    {
        const bool branch_taken_0x21ae68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae68) {
            ctx->pc = 0x21AE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE68u;
            // 0x21ae6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AE80u;
            goto label_21ae80;
        }
    }
    ctx->pc = 0x21AE70u;
    // 0x21ae70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae74: 0xc08955c  jal         func_225570
    ctx->pc = 0x21AE74u;
    SET_GPR_U32(ctx, 31, 0x21AE7Cu);
    ctx->pc = 0x21AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE74u;
            // 0x21ae78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE7Cu; }
        if (ctx->pc != 0x21AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE7Cu; }
        if (ctx->pc != 0x21AE7Cu) { return; }
    }
    ctx->pc = 0x21AE7Cu;
label_21ae7c:
    // 0x21ae7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ae7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21ae80:
    // 0x21ae80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ae80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ae84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ae84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ae88: 0x3e00008  jr          $ra
    ctx->pc = 0x21AE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AE88u;
            // 0x21ae8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AE90u;
    // 0x21ae90: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x21ae94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ae98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ae9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21aea0: 0x84870018  lh          $a3, 0x18($a0)
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21aea4: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x21aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x21aea8: 0x14e00062  bnez        $a3, . + 4 + (0x62 << 2)
    ctx->pc = 0x21AEA8u;
    {
        const bool branch_taken_0x21aea8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AEA8u;
            // 0x21aeac: 0xa4830018  sh          $v1, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aea8) {
            ctx->pc = 0x21B034u;
            goto label_21b034;
        }
    }
    ctx->pc = 0x21AEB0u;
    // 0x21aeb0: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x21aeb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21aeb4: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x21aeb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21aeb8: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x21aeb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21aebc: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x21aebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21aec0: 0x9622006e  lhu         $v0, 0x6E($s1)
    ctx->pc = 0x21aec0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x21aec4: 0x9603006e  lhu         $v1, 0x6E($s0)
    ctx->pc = 0x21aec4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x21aec8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x21aec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21aecc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AECCu;
    {
        const bool branch_taken_0x21aecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aecc) {
            ctx->pc = 0x21AED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21AECCu;
            // 0x21aed0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21AED4u;
            goto label_21aed4;
        }
    }
    ctx->pc = 0x21AED4u;
label_21aed4:
    // 0x21aed4: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x21aed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x21aed8: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x21aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x21aedc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x21aee0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x21aee4: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x21aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x21aee8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x21aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x21aeec: 0xafa8003c  sw          $t0, 0x3C($sp)
    ctx->pc = 0x21aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 8));
    // 0x21aef0: 0xafa40440  sw          $a0, 0x440($sp)
    ctx->pc = 0x21aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 4));
    // 0x21aef4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x21aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21aef8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x21aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21aefc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x21aefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x21af00: 0x1010  mfhi        $v0
    ctx->pc = 0x21af00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21af04: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x21af04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x21af08: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x21af0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x21af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21af10: 0x24a8ffff  addiu       $t0, $a1, -0x1
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21af14: 0x5000038  bltz        $t0, . + 4 + (0x38 << 2)
    ctx->pc = 0x21AF14u;
    {
        const bool branch_taken_0x21af14 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x21af14) {
            ctx->pc = 0x21AFF8u;
            goto label_21aff8;
        }
    }
    ctx->pc = 0x21AF1Cu;
    // 0x21af1c: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x21af1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x21af20: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x21AF20u;
    {
        const bool branch_taken_0x21af20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af20) {
            ctx->pc = 0x21AFC8u;
            goto label_21afc8;
        }
    }
    ctx->pc = 0x21AF28u;
    // 0x21af28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21af28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af2c: 0x5000007  bltz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AF2Cu;
    {
        const bool branch_taken_0x21af2c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x21AF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF2Cu;
            // 0x21af30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af2c) {
            ctx->pc = 0x21AF4Cu;
            goto label_21af4c;
        }
    }
    ctx->pc = 0x21AF34u;
    // 0x21af34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21af34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21af38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21af3c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21af3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21af40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AF40u;
    {
        const bool branch_taken_0x21af40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af40) {
            ctx->pc = 0x21AF4Cu;
            goto label_21af4c;
        }
    }
    ctx->pc = 0x21AF48u;
    // 0x21af48: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x21af48u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_21af4c:
    // 0x21af4c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21AF4Cu;
    {
        const bool branch_taken_0x21af4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af4c) {
            ctx->pc = 0x21AF84u;
            goto label_21af84;
        }
    }
    ctx->pc = 0x21AF54u;
    // 0x21af54: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x21af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21af58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x21af58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x21af5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21af60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AF60u;
    {
        const bool branch_taken_0x21af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF60u;
            // 0x21af64: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af60) {
            ctx->pc = 0x21AF78u;
            goto label_21af78;
        }
    }
    ctx->pc = 0x21AF68u;
    // 0x21af68: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x21af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x21af6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AF6Cu;
    {
        const bool branch_taken_0x21af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af6c) {
            ctx->pc = 0x21AF78u;
            goto label_21af78;
        }
    }
    ctx->pc = 0x21AF74u;
    // 0x21af74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21af74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21af78:
    // 0x21af78: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AF78u;
    {
        const bool branch_taken_0x21af78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af78) {
            ctx->pc = 0x21AF84u;
            goto label_21af84;
        }
    }
    ctx->pc = 0x21AF80u;
    // 0x21af80: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x21af80u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_21af84:
    // 0x21af84: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x21AF84u;
    {
        const bool branch_taken_0x21af84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af84) {
            ctx->pc = 0x21AFC8u;
            goto label_21afc8;
        }
    }
    ctx->pc = 0x21AF8Cu;
    // 0x21af8c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x21af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21af90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21af94: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_21af98:
    // 0x21af98: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21af98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x21af9c: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x21afa0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x21afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x21afa4: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x21afa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21afa8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x21afac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21afacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21afb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21afb4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x21afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x21afb8: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x21afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x21afbc: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x21afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x21afc0: 0x1020fff5  beqz        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x21AFC0u;
    {
        const bool branch_taken_0x21afc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFC0u;
            // 0x21afc4: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afc0) {
            ctx->pc = 0x21AF98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21af98;
        }
    }
    ctx->pc = 0x21AFC8u;
label_21afc8:
    // 0x21afc8: 0x500000b  bltz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AFC8u;
    {
        const bool branch_taken_0x21afc8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x21afc8) {
            ctx->pc = 0x21AFF8u;
            goto label_21aff8;
        }
    }
    ctx->pc = 0x21AFD0u;
    // 0x21afd0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x21afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21afd4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21afd8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x21afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_21afdc:
    // 0x21afdc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x21afe0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21afe4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x21afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x21afe8: 0x0  nop
    ctx->pc = 0x21afe8u;
    // NOP
    // 0x21afec: 0x0  nop
    ctx->pc = 0x21afecu;
    // NOP
    // 0x21aff0: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21AFF0u;
    {
        const bool branch_taken_0x21aff0 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x21aff0) {
            ctx->pc = 0x21AFDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21afdc;
        }
    }
    ctx->pc = 0x21AFF8u;
label_21aff8:
    // 0x21aff8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x21aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21affc: 0xc08e700  jal         func_239C00
    ctx->pc = 0x21AFFCu;
    SET_GPR_U32(ctx, 31, 0x21B004u);
    ctx->pc = 0x21B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFFCu;
            // 0x21b000: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239C00u;
    if (runtime->hasFunction(0x239C00u)) {
        auto targetFn = runtime->lookupFunction(0x239C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B004u; }
        if (ctx->pc != 0x21B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239C00_0x239c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B004u; }
        if (ctx->pc != 0x21B004u) { return; }
    }
    ctx->pc = 0x21B004u;
label_21b004:
    // 0x21b004: 0x962301d4  lhu         $v1, 0x1D4($s1)
    ctx->pc = 0x21b004u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x21b008: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B008u;
    {
        const bool branch_taken_0x21b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b008) {
            ctx->pc = 0x21B00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B008u;
            // 0x21b00c: 0x960301d4  lhu         $v1, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B020u;
            goto label_21b020;
        }
    }
    ctx->pc = 0x21B010u;
    // 0x21b010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b014: 0xc0895a0  jal         func_225680
    ctx->pc = 0x21B014u;
    SET_GPR_U32(ctx, 31, 0x21B01Cu);
    ctx->pc = 0x21B018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B014u;
            // 0x21b018: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225680u;
    if (runtime->hasFunction(0x225680u)) {
        auto targetFn = runtime->lookupFunction(0x225680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B01Cu; }
        if (ctx->pc != 0x21B01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225680_0x225680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B01Cu; }
        if (ctx->pc != 0x21B01Cu) { return; }
    }
    ctx->pc = 0x21B01Cu;
label_21b01c:
    // 0x21b01c: 0x960301d4  lhu         $v1, 0x1D4($s0)
    ctx->pc = 0x21b01cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21b020:
    // 0x21b020: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B020u;
    {
        const bool branch_taken_0x21b020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b020) {
            ctx->pc = 0x21B024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B020u;
            // 0x21b024: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B038u;
            goto label_21b038;
        }
    }
    ctx->pc = 0x21B028u;
    // 0x21b028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b02c: 0xc0895a0  jal         func_225680
    ctx->pc = 0x21B02Cu;
    SET_GPR_U32(ctx, 31, 0x21B034u);
    ctx->pc = 0x21B030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B02Cu;
            // 0x21b030: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225680u;
    if (runtime->hasFunction(0x225680u)) {
        auto targetFn = runtime->lookupFunction(0x225680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B034u; }
        if (ctx->pc != 0x21B034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225680_0x225680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B034u; }
        if (ctx->pc != 0x21B034u) { return; }
    }
    ctx->pc = 0x21B034u;
label_21b034:
    // 0x21b034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21b034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21b038:
    // 0x21b038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b040: 0x3e00008  jr          $ra
    ctx->pc = 0x21B040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B040u;
            // 0x21b044: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B048u;
    // 0x21b048: 0x0  nop
    ctx->pc = 0x21b048u;
    // NOP
    // 0x21b04c: 0x0  nop
    ctx->pc = 0x21b04cu;
    // NOP
    // 0x21b050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21b05c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21b060: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b064: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x21b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b068: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21b06c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21b070: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21b074: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21b078: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x21b078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x21b07c: 0xe7ac0034  swc1        $f12, 0x34($sp)
    ctx->pc = 0x21b07cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21b080: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x21b084: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x21b084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x21b088: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x21b088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21b08c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x21b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x21b090: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x21b090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x21b094: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x21b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x21b098: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x21b098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x21b09c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x21b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x21b0a0: 0xc08e678  jal         func_2399E0
    ctx->pc = 0x21B0A0u;
    SET_GPR_U32(ctx, 31, 0x21B0A8u);
    ctx->pc = 0x21B0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0A0u;
            // 0x21b0a4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2399E0u;
    if (runtime->hasFunction(0x2399E0u)) {
        auto targetFn = runtime->lookupFunction(0x2399E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0A8u; }
        if (ctx->pc != 0x21B0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002399E0_0x2399e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0A8u; }
        if (ctx->pc != 0x21B0A8u) { return; }
    }
    ctx->pc = 0x21B0A8u;
label_21b0a8:
    // 0x21b0a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b0ac: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x21b0acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x21b0b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B0B0u;
    {
        const bool branch_taken_0x21b0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b0b0) {
            ctx->pc = 0x21B0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0B0u;
            // 0x21b0b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B0C4u;
            goto label_21b0c4;
        }
    }
    ctx->pc = 0x21B0B8u;
    // 0x21b0b8: 0xc089518  jal         func_225460
    ctx->pc = 0x21B0B8u;
    SET_GPR_U32(ctx, 31, 0x21B0C0u);
    ctx->pc = 0x21B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0B8u;
            // 0x21b0bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225460u;
    if (runtime->hasFunction(0x225460u)) {
        auto targetFn = runtime->lookupFunction(0x225460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0C0u; }
        if (ctx->pc != 0x21B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225460_0x225460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0C0u; }
        if (ctx->pc != 0x21B0C0u) { return; }
    }
    ctx->pc = 0x21B0C0u;
label_21b0c0:
    // 0x21b0c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21b0c4:
    // 0x21b0c4: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x21b0c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x21b0c8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B0C8u;
    {
        const bool branch_taken_0x21b0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b0c8) {
            ctx->pc = 0x21B0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0C8u;
            // 0x21b0cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B0DCu;
            goto label_21b0dc;
        }
    }
    ctx->pc = 0x21B0D0u;
    // 0x21b0d0: 0xc089518  jal         func_225460
    ctx->pc = 0x21B0D0u;
    SET_GPR_U32(ctx, 31, 0x21B0D8u);
    ctx->pc = 0x21B0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0D0u;
            // 0x21b0d4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225460u;
    if (runtime->hasFunction(0x225460u)) {
        auto targetFn = runtime->lookupFunction(0x225460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0D8u; }
        if (ctx->pc != 0x21B0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225460_0x225460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B0D8u; }
        if (ctx->pc != 0x21B0D8u) { return; }
    }
    ctx->pc = 0x21B0D8u;
label_21b0d8:
    // 0x21b0d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b0dc:
    // 0x21b0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0E0u;
            // 0x21b0e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B0E8u;
    // 0x21b0e8: 0x0  nop
    ctx->pc = 0x21b0e8u;
    // NOP
    // 0x21b0ec: 0x0  nop
    ctx->pc = 0x21b0ecu;
    // NOP
}
