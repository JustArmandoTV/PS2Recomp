#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D8C0
// Address: 0x15d8c0 - 0x15dbd0
void sub_0015D8C0_0x15d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D8C0_0x15d8c0");
#endif

    switch (ctx->pc) {
        case 0x15d9a0u: goto label_15d9a0;
        case 0x15da30u: goto label_15da30;
        case 0x15da48u: goto label_15da48;
        case 0x15da50u: goto label_15da50;
        case 0x15da5cu: goto label_15da5c;
        case 0x15da74u: goto label_15da74;
        case 0x15da7cu: goto label_15da7c;
        case 0x15daacu: goto label_15daac;
        case 0x15dad0u: goto label_15dad0;
        case 0x15db2cu: goto label_15db2c;
        case 0x15db4cu: goto label_15db4c;
        case 0x15db54u: goto label_15db54;
        case 0x15db60u: goto label_15db60;
        case 0x15db70u: goto label_15db70;
        case 0x15dba8u: goto label_15dba8;
        case 0x15dbb0u: goto label_15dbb0;
        default: break;
    }

    ctx->pc = 0x15d8c0u;

    // 0x15d8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d8c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x15d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x15d8c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d8cc: 0x2463cad8  addiu       $v1, $v1, -0x3528
    ctx->pc = 0x15d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953688));
    // 0x15d8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d8d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15d8d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15d8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x15d8e4: 0xac508a08  sw          $s0, -0x75F8($v0)
    ctx->pc = 0x15d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937096), GPR_U32(ctx, 16));
    // 0x15d8e8: 0x2463caf0  addiu       $v1, $v1, -0x3510
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953712));
    // 0x15d8ec: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x15d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x15d8f0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x15d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x15d8f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8f8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x15d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x15d8fc: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x15d8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15d900: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x15d900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x15d904: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x15d904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x15d908: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x15d908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x15d90c: 0x3c023fb8  lui         $v0, 0x3FB8
    ctx->pc = 0x15d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16312 << 16));
    // 0x15d910: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x15d910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x15d914: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x15d914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x15d918: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x15d918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x15d91c: 0x3c023f55  lui         $v0, 0x3F55
    ctx->pc = 0x15d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16213 << 16));
    // 0x15d920: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x15d920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x15d924: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x15d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x15d928: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x15d92c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x15d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x15d930: 0x3c023f31  lui         $v0, 0x3F31
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16177 << 16));
    // 0x15d934: 0x3443c71c  ori         $v1, $v0, 0xC71C
    ctx->pc = 0x15d934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
    // 0x15d938: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x15d938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x15d93c: 0x24024e1f  addiu       $v0, $zero, 0x4E1F
    ctx->pc = 0x15d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19999));
    // 0x15d940: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x15d940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x15d944: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x15d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x15d948: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x15d948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x15d94c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x15d950: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x15d950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x15d954: 0x2463cc30  addiu       $v1, $v1, -0x33D0
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954032));
    // 0x15d958: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x15d958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x15d95c: 0x2442cc3c  addiu       $v0, $v0, -0x33C4
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954044));
    // 0x15d960: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x15d960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x15d964: 0xa0850078  sb          $a1, 0x78($a0)
    ctx->pc = 0x15d964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 5));
    // 0x15d968: 0xa0860079  sb          $a2, 0x79($a0)
    ctx->pc = 0x15d968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d96c: 0xa086007a  sb          $a2, 0x7A($a0)
    ctx->pc = 0x15d96cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d970: 0xa086007b  sb          $a2, 0x7B($a0)
    ctx->pc = 0x15d970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d974: 0xa086007c  sb          $a2, 0x7C($a0)
    ctx->pc = 0x15d974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d978: 0xa080007d  sb          $zero, 0x7D($a0)
    ctx->pc = 0x15d978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d97c: 0xa086007e  sb          $a2, 0x7E($a0)
    ctx->pc = 0x15d97cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d980: 0xa086007f  sb          $a2, 0x7F($a0)
    ctx->pc = 0x15d980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d984: 0xa0800080  sb          $zero, 0x80($a0)
    ctx->pc = 0x15d984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d988: 0xa0800081  sb          $zero, 0x81($a0)
    ctx->pc = 0x15d988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d98c: 0xa0800082  sb          $zero, 0x82($a0)
    ctx->pc = 0x15d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 130), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d990: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15d990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15d994: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x15d994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x15d998: 0xc05773c  jal         func_15DCF0
    ctx->pc = 0x15D998u;
    SET_GPR_U32(ctx, 31, 0x15D9A0u);
    ctx->pc = 0x15D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D998u;
            // 0x15d99c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DCF0u;
    if (runtime->hasFunction(0x15DCF0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9A0u; }
        if (ctx->pc != 0x15D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCF0_0x15dcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9A0u; }
        if (ctx->pc != 0x15D9A0u) { return; }
    }
    ctx->pc = 0x15D9A0u;
label_15d9a0:
    // 0x15d9a0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x15d9a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x15d9a4: 0x5020001d  beql        $at, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x15D9A4u;
    {
        const bool branch_taken_0x15d9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d9a4) {
            ctx->pc = 0x15D9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9A4u;
            // 0x15d9a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15DA1Cu;
            goto label_15da1c;
        }
    }
    ctx->pc = 0x15D9ACu;
    // 0x15d9ac: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x15d9b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d9b4: 0x246325a0  addiu       $v1, $v1, 0x25A0
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9632));
    // 0x15d9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d9bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d9c0: 0x400008  jr          $v0
    ctx->pc = 0x15D9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D9C8u: goto label_15d9c8;
            case 0x15D9D4u: goto label_15d9d4;
            case 0x15D9E0u: goto label_15d9e0;
            case 0x15D9ECu: goto label_15d9ec;
            case 0x15D9F8u: goto label_15d9f8;
            case 0x15DA04u: goto label_15da04;
            case 0x15DA10u: goto label_15da10;
            case 0x15DA18u: goto label_15da18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D9C8u;
label_15d9c8:
    // 0x15d9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d9cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15D9CCu;
    {
        const bool branch_taken_0x15d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9CCu;
            // 0x15d9d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9cc) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15D9D4u;
label_15d9d4:
    // 0x15d9d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d9d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15D9D8u;
    {
        const bool branch_taken_0x15d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9D8u;
            // 0x15d9dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9d8) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15D9E0u;
label_15d9e0:
    // 0x15d9e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15D9E4u;
    {
        const bool branch_taken_0x15d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9E4u;
            // 0x15d9e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9e4) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15D9ECu;
label_15d9ec:
    // 0x15d9ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d9f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D9F0u;
    {
        const bool branch_taken_0x15d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9F0u;
            // 0x15d9f4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9f0) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15D9F8u;
label_15d9f8:
    // 0x15d9f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15d9fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15D9FCu;
    {
        const bool branch_taken_0x15d9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9FCu;
            // 0x15da00: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9fc) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15DA04u;
label_15da04:
    // 0x15da04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15da08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15DA08u;
    {
        const bool branch_taken_0x15da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA08u;
            // 0x15da0c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da08) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15DA10u;
label_15da10:
    // 0x15da10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15da14: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15da14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_15da18:
    // 0x15da18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15da18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15da1c:
    // 0x15da1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15da1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15da20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15da20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15da24: 0x3e00008  jr          $ra
    ctx->pc = 0x15DA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA24u;
            // 0x15da28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DA2Cu;
    // 0x15da2c: 0x0  nop
    ctx->pc = 0x15da2cu;
    // NOP
label_15da30:
    // 0x15da30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15da34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15da38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15da3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15da3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da40: 0xc0576f8  jal         func_15DBE0
    ctx->pc = 0x15DA40u;
    SET_GPR_U32(ctx, 31, 0x15DA48u);
    ctx->pc = 0x15DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA40u;
            // 0x15da44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBE0u;
    if (runtime->hasFunction(0x15DBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA48u; }
        if (ctx->pc != 0x15DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBE0_0x15dbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA48u; }
        if (ctx->pc != 0x15DA48u) { return; }
    }
    ctx->pc = 0x15DA48u;
label_15da48:
    // 0x15da48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15da4c: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_15da50:
    // 0x15da50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da54: 0xc040c00  jal         func_103000
    ctx->pc = 0x15DA54u;
    SET_GPR_U32(ctx, 31, 0x15DA5Cu);
    ctx->pc = 0x15DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA54u;
            // 0x15da58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103000u;
    if (runtime->hasFunction(0x103000u)) {
        auto targetFn = runtime->lookupFunction(0x103000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA5Cu; }
        if (ctx->pc != 0x15DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA5Cu; }
        if (ctx->pc != 0x15DA5Cu) { return; }
    }
    ctx->pc = 0x15DA5Cu;
label_15da5c:
    // 0x15da5c: 0x0  nop
    ctx->pc = 0x15da5cu;
    // NOP
    // 0x15da60: 0x0  nop
    ctx->pc = 0x15da60u;
    // NOP
    // 0x15da64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15DA64u;
    {
        const bool branch_taken_0x15da64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da64) {
            ctx->pc = 0x15DA50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15da50;
        }
    }
    ctx->pc = 0x15DA6Cu;
    // 0x15da6c: 0xc05b7c6  jal         func_16DF18
    ctx->pc = 0x15DA6Cu;
    SET_GPR_U32(ctx, 31, 0x15DA74u);
    ctx->pc = 0x16DF18u;
    if (runtime->hasFunction(0x16DF18u)) {
        auto targetFn = runtime->lookupFunction(0x16DF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA74u; }
        if (ctx->pc != 0x15DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DF18_0x16df18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA74u; }
        if (ctx->pc != 0x15DA74u) { return; }
    }
    ctx->pc = 0x15DA74u;
label_15da74:
    // 0x15da74: 0x92020079  lbu         $v0, 0x79($s0)
    ctx->pc = 0x15da74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x15da78: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15da78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_15da7c:
    // 0x15da7c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x15da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x15da80: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x15da84: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x15da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x15da88: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15da8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15da8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15da90: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15DA90u;
    {
        const bool branch_taken_0x15da90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da90) {
            ctx->pc = 0x15DA7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15da7c;
        }
    }
    ctx->pc = 0x15DA98u;
    // 0x15da98: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x15da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15da9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15daa0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x15daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x15daa4: 0xc0a8744  jal         func_2A1D10
    ctx->pc = 0x15DAA4u;
    SET_GPR_U32(ctx, 31, 0x15DAACu);
    ctx->pc = 0x15DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAA4u;
            // 0x15daa8: 0x8c4489f0  lw          $a0, -0x7610($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D10u;
    if (runtime->hasFunction(0x2A1D10u)) {
        auto targetFn = runtime->lookupFunction(0x2A1D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAACu; }
        if (ctx->pc != 0x15DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1D10_0x2a1d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAACu; }
        if (ctx->pc != 0x15DAACu) { return; }
    }
    ctx->pc = 0x15DAACu;
label_15daac:
    // 0x15daac: 0x9224007e  lbu         $a0, 0x7E($s1)
    ctx->pc = 0x15daacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 126)));
    // 0x15dab0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x15dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x15dab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15dab8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x15dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x15dabc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15dabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15dac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dac8: 0x3e00008  jr          $ra
    ctx->pc = 0x15DAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAC8u;
            // 0x15dacc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DAD0u;
label_15dad0:
    // 0x15dad0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15dad4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15dad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15dadc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15dae0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15dae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15dae8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15dae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15daec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15daf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15daf4: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x15daf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15daf8: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x15daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x15dafc: 0x8c470050  lw          $a3, 0x50($v0)
    ctx->pc = 0x15dafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x15db00: 0x9ce20008  lwu         $v0, 0x8($a3)
    ctx->pc = 0x15db00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15db04: 0x9ce30004  lwu         $v1, 0x4($a3)
    ctx->pc = 0x15db04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15db08: 0x9ce50000  lwu         $a1, 0x0($a3)
    ctx->pc = 0x15db08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15db0c: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x15db0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x15db10: 0x9ce2000c  lwu         $v0, 0xC($a3)
    ctx->pc = 0x15db10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15db14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15db18: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x15db18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15db1c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15db20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15db24: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x15DB24u;
    SET_GPR_U32(ctx, 31, 0x15DB2Cu);
    ctx->pc = 0x15DB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB24u;
            // 0x15db28: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF60u;
    if (runtime->hasFunction(0x15CF60u)) {
        auto targetFn = runtime->lookupFunction(0x15CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB2Cu; }
        if (ctx->pc != 0x15DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF60_0x15cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB2Cu; }
        if (ctx->pc != 0x15DB2Cu) { return; }
    }
    ctx->pc = 0x15DB2Cu;
label_15db2c:
    // 0x15db2c: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x15db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x15db30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15db34: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15db38: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x15db38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15db3c: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x15db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x15db40: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x15db40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15db44: 0xc0573cc  jal         func_15CF30
    ctx->pc = 0x15DB44u;
    SET_GPR_U32(ctx, 31, 0x15DB4Cu);
    ctx->pc = 0x15DB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB44u;
            // 0x15db48: 0xffa20060  sd          $v0, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF30u;
    if (runtime->hasFunction(0x15CF30u)) {
        auto targetFn = runtime->lookupFunction(0x15CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB4Cu; }
        if (ctx->pc != 0x15DB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF30_0x15cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB4Cu; }
        if (ctx->pc != 0x15DB4Cu) { return; }
    }
    ctx->pc = 0x15DB4Cu;
label_15db4c:
    // 0x15db4c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x15DB4Cu;
    SET_GPR_U32(ctx, 31, 0x15DB54u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB54u; }
        if (ctx->pc != 0x15DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB54u; }
        if (ctx->pc != 0x15DB54u) { return; }
    }
    ctx->pc = 0x15DB54u;
label_15db54:
    // 0x15db54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15db54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db58: 0xc0576fc  jal         func_15DBF0
    ctx->pc = 0x15DB58u;
    SET_GPR_U32(ctx, 31, 0x15DB60u);
    ctx->pc = 0x15DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB58u;
            // 0x15db5c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBF0u;
    if (runtime->hasFunction(0x15DBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB60u; }
        if (ctx->pc != 0x15DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBF0_0x15dbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB60u; }
        if (ctx->pc != 0x15DB60u) { return; }
    }
    ctx->pc = 0x15DB60u;
label_15db60:
    // 0x15db60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15db64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15db64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db68: 0xc04f674  jal         func_13D9D0
    ctx->pc = 0x15DB68u;
    SET_GPR_U32(ctx, 31, 0x15DB70u);
    ctx->pc = 0x15DB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB68u;
            // 0x15db6c: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB70u; }
        if (ctx->pc != 0x15DB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB70u; }
        if (ctx->pc != 0x15DB70u) { return; }
    }
    ctx->pc = 0x15DB70u;
label_15db70:
    // 0x15db70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15db74: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15db78: 0xdc445800  ld          $a0, 0x5800($v0)
    ctx->pc = 0x15db78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 22528)));
    // 0x15db7c: 0xfc71cea0  sd          $s1, -0x3160($v1)
    ctx->pc = 0x15db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954656), GPR_U64(ctx, 17));
    // 0x15db80: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15db84: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x15db88: 0xfc64cea8  sd          $a0, -0x3158($v1)
    ctx->pc = 0x15db88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954664), GPR_U64(ctx, 4));
    // 0x15db8c: 0xfc51d000  sd          $s1, -0x3000($v0)
    ctx->pc = 0x15db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294955008), GPR_U64(ctx, 17));
    // 0x15db90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15db94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15db98: 0xdc455808  ld          $a1, 0x5808($v0)
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22536)));
    // 0x15db9c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x15dba0: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x15DBA0u;
    SET_GPR_U32(ctx, 31, 0x15DBA8u);
    ctx->pc = 0x15DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBA0u;
            // 0x15dba4: 0xfc45d008  sd          $a1, -0x2FF8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294955016), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBA8u; }
        if (ctx->pc != 0x15DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBA8u; }
        if (ctx->pc != 0x15DBA8u) { return; }
    }
    ctx->pc = 0x15DBA8u;
label_15dba8:
    // 0x15dba8: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x15DBA8u;
    SET_GPR_U32(ctx, 31, 0x15DBB0u);
    ctx->pc = 0x15DBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBA8u;
            // 0x15dbac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBB0u; }
        if (ctx->pc != 0x15DBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBB0u; }
        if (ctx->pc != 0x15DBB0u) { return; }
    }
    ctx->pc = 0x15DBB0u;
label_15dbb0:
    // 0x15dbb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15dbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15dbb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15dbb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15dbb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15dbb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dbbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15dbbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dbc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x15DBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBC4u;
            // 0x15dbc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DBCCu;
    // 0x15dbcc: 0x0  nop
    ctx->pc = 0x15dbccu;
    // NOP
}
