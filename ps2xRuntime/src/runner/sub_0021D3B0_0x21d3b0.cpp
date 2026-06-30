#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D3B0
// Address: 0x21d3b0 - 0x21d600
void sub_0021D3B0_0x21d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D3B0_0x21d3b0");
#endif

    switch (ctx->pc) {
        case 0x21d454u: goto label_21d454;
        case 0x21d4ecu: goto label_21d4ec;
        case 0x21d568u: goto label_21d568;
        case 0x21d5d4u: goto label_21d5d4;
        default: break;
    }

    ctx->pc = 0x21d3b0u;

    // 0x21d3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d3b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21d3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d3bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d3c4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x21d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x21d3c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21d3cc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21d3d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21d3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d3d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21d3dc: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x21d3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x21d3e0: 0x2463e950  addiu       $v1, $v1, -0x16B0
    ctx->pc = 0x21d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961488));
    // 0x21d3e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d3e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21d3ec: 0x2442e840  addiu       $v0, $v0, -0x17C0
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x21d3f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21d3f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21d3f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21d3fc: 0x2463e800  addiu       $v1, $v1, -0x1800
    ctx->pc = 0x21d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961152));
    // 0x21d400: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21d400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21d404: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x21d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x21d408: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x21d408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x21d40c: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x21d40cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21d410: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x21d410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x21d414: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x21d414u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x21d418: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x21d418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x21d41c: 0x3c02324c  lui         $v0, 0x324C
    ctx->pc = 0x21d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12876 << 16));
    // 0x21d420: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x21d420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x21d424: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x21d424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21d428: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21d428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21d42c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x21d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x21d430: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x21d430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x21d434: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21d434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21d438: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x21d438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x21d43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d440: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x21d440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x21d444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d448: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x21d448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x21d44c: 0xc08727c  jal         func_21C9F0
    ctx->pc = 0x21D44Cu;
    SET_GPR_U32(ctx, 31, 0x21D454u);
    ctx->pc = 0x21D450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D44Cu;
            // 0x21d450: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C9F0u;
    if (runtime->hasFunction(0x21C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x21C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D454u; }
        if (ctx->pc != 0x21D454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021C9F0_0x21c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D454u; }
        if (ctx->pc != 0x21D454u) { return; }
    }
    ctx->pc = 0x21D454u;
label_21d454:
    // 0x21d454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d460: 0x3e00008  jr          $ra
    ctx->pc = 0x21D460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D460u;
            // 0x21d464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D468u;
    // 0x21d468: 0x0  nop
    ctx->pc = 0x21d468u;
    // NOP
    // 0x21d46c: 0x0  nop
    ctx->pc = 0x21d46cu;
    // NOP
    // 0x21d470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d480: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21D480u;
    {
        const bool branch_taken_0x21d480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d480) {
            ctx->pc = 0x21D484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D480u;
            // 0x21d484: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D4F0u;
            goto label_21d4f0;
        }
    }
    ctx->pc = 0x21D488u;
    // 0x21d488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d48c: 0x2442e840  addiu       $v0, $v0, -0x17C0
    ctx->pc = 0x21d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x21d490: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x21D490u;
    {
        const bool branch_taken_0x21d490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D490u;
            // 0x21d494: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d490) {
            ctx->pc = 0x21D4C4u;
            goto label_21d4c4;
        }
    }
    ctx->pc = 0x21D498u;
    // 0x21d498: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d49c: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x21d4a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D4A0u;
    {
        const bool branch_taken_0x21d4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4A0u;
            // 0x21d4a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4a0) {
            ctx->pc = 0x21D4C4u;
            goto label_21d4c4;
        }
    }
    ctx->pc = 0x21D4A8u;
    // 0x21d4a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d4ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21d4b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D4B0u;
    {
        const bool branch_taken_0x21d4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4B0u;
            // 0x21d4b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4b0) {
            ctx->pc = 0x21D4C4u;
            goto label_21d4c4;
        }
    }
    ctx->pc = 0x21D4B8u;
    // 0x21d4b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d4bc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21d4c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21d4c4:
    // 0x21d4c4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21d4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x21d4c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21d4c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21d4cc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D4CCu;
    {
        const bool branch_taken_0x21d4cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21d4cc) {
            ctx->pc = 0x21D4ECu;
            goto label_21d4ec;
        }
    }
    ctx->pc = 0x21D4D4u;
    // 0x21d4d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21d4d8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21d4d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d4dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21d4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4e4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21D4E4u;
    SET_GPR_U32(ctx, 31, 0x21D4ECu);
    ctx->pc = 0x21D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4E4u;
            // 0x21d4e8: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4ECu; }
        if (ctx->pc != 0x21D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4ECu; }
        if (ctx->pc != 0x21D4ECu) { return; }
    }
    ctx->pc = 0x21D4ECu;
label_21d4ec:
    // 0x21d4ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d4f0:
    // 0x21d4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21D4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4F8u;
            // 0x21d4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D500u;
    // 0x21d500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d514: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x21D514u;
    {
        const bool branch_taken_0x21d514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D514u;
            // 0x21d518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d514) {
            ctx->pc = 0x21D5D4u;
            goto label_21d5d4;
        }
    }
    ctx->pc = 0x21D51Cu;
    // 0x21d51c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21d520: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x21d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x21d524: 0x2463e800  addiu       $v1, $v1, -0x1800
    ctx->pc = 0x21d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961152));
    // 0x21d528: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21D528u;
    {
        const bool branch_taken_0x21d528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D528u;
            // 0x21d52c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d528) {
            ctx->pc = 0x21D568u;
            goto label_21d568;
        }
    }
    ctx->pc = 0x21D530u;
    // 0x21d530: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x21d534: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21d538: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21d538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21d53c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D53Cu;
    {
        const bool branch_taken_0x21d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d53c) {
            ctx->pc = 0x21D568u;
            goto label_21d568;
        }
    }
    ctx->pc = 0x21D544u;
    // 0x21d544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21d548: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x21d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x21d54c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21d550: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21d554: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x21d554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x21d558: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x21d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x21d55c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x21d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x21d560: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21D560u;
    SET_GPR_U32(ctx, 31, 0x21D568u);
    ctx->pc = 0x21D564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D560u;
            // 0x21d564: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D568u; }
        if (ctx->pc != 0x21D568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D568u; }
        if (ctx->pc != 0x21D568u) { return; }
    }
    ctx->pc = 0x21D568u;
label_21d568:
    // 0x21d568: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21D568u;
    {
        const bool branch_taken_0x21d568 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d568) {
            ctx->pc = 0x21D56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D568u;
            // 0x21d56c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D5B0u;
            goto label_21d5b0;
        }
    }
    ctx->pc = 0x21D570u;
    // 0x21d570: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d574: 0x2442e840  addiu       $v0, $v0, -0x17C0
    ctx->pc = 0x21d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x21d578: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x21D578u;
    {
        const bool branch_taken_0x21d578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D578u;
            // 0x21d57c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d578) {
            ctx->pc = 0x21D5ACu;
            goto label_21d5ac;
        }
    }
    ctx->pc = 0x21D580u;
    // 0x21d580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d584: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x21d588: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D588u;
    {
        const bool branch_taken_0x21d588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D588u;
            // 0x21d58c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d588) {
            ctx->pc = 0x21D5ACu;
            goto label_21d5ac;
        }
    }
    ctx->pc = 0x21D590u;
    // 0x21d590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d594: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21d598: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D598u;
    {
        const bool branch_taken_0x21d598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D598u;
            // 0x21d59c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d598) {
            ctx->pc = 0x21D5ACu;
            goto label_21d5ac;
        }
    }
    ctx->pc = 0x21D5A0u;
    // 0x21d5a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21d5a4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21d5a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21d5ac:
    // 0x21d5ac: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_21d5b0:
    // 0x21d5b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21d5b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21d5b4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D5B4u;
    {
        const bool branch_taken_0x21d5b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21d5b4) {
            ctx->pc = 0x21D5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5B4u;
            // 0x21d5b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D5D8u;
            goto label_21d5d8;
        }
    }
    ctx->pc = 0x21D5BCu;
    // 0x21d5bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21d5c0: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x21d5c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21d5c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21d5c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5cc: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21D5CCu;
    SET_GPR_U32(ctx, 31, 0x21D5D4u);
    ctx->pc = 0x21D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5CCu;
            // 0x21d5d0: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D5D4u; }
        if (ctx->pc != 0x21D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D5D4u; }
        if (ctx->pc != 0x21D5D4u) { return; }
    }
    ctx->pc = 0x21D5D4u;
label_21d5d4:
    // 0x21d5d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21d5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d5d8:
    // 0x21d5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5E4u;
            // 0x21d5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D5ECu;
    // 0x21d5ec: 0x0  nop
    ctx->pc = 0x21d5ecu;
    // NOP
    // 0x21d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5F0u;
            // 0x21d5f4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D5F8u;
    // 0x21d5f8: 0x0  nop
    ctx->pc = 0x21d5f8u;
    // NOP
    // 0x21d5fc: 0x0  nop
    ctx->pc = 0x21d5fcu;
    // NOP
}
