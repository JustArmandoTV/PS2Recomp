#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECE80
// Address: 0x1ece80 - 0x1ed000
void sub_001ECE80_0x1ece80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE80_0x1ece80");
#endif

    switch (ctx->pc) {
        case 0x1ecf20u: goto label_1ecf20;
        case 0x1ecf88u: goto label_1ecf88;
        default: break;
    }

    ctx->pc = 0x1ece80u;

    // 0x1ece80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ece80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ece84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1ece88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ece88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ece8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ece8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ece90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ece90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ece94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ece94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ece98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ece98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ece9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ecea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecea8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ecea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1eceac: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1eceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x1eceb0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1eceb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eceb4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1eceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x1eceb8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1eceb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecebc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ecebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ecec0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ECEC0u;
    {
        const bool branch_taken_0x1ecec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEC0u;
            // 0x1ecec4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecec0) {
            ctx->pc = 0x1ECEFCu;
            goto label_1ecefc;
        }
    }
    ctx->pc = 0x1ECEC8u;
    // 0x1ecec8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ececc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ececcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1eced0: 0x2463ac80  addiu       $v1, $v1, -0x5380
    ctx->pc = 0x1eced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
    // 0x1eced4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1eced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1eced8: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x1eced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x1ecedc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ecedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ecee0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ecee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1ecee4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x1ecee8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ecee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1eceec: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1eceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x1ecef0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ecef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ecef4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ecef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ecef8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ecef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ecefc:
    // 0x1ecefc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ecefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ecf00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf04: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x1ecf08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf0c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ecf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ecf10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecf10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf14: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1ecf18: 0xc07bd9c  jal         func_1EF670
    ctx->pc = 0x1ECF18u;
    SET_GPR_U32(ctx, 31, 0x1ECF20u);
    ctx->pc = 0x1ECF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF18u;
            // 0x1ecf1c: 0xa3a0005c  sb          $zero, 0x5C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF670u;
    if (runtime->hasFunction(0x1EF670u)) {
        auto targetFn = runtime->lookupFunction(0x1EF670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF20u; }
        if (ctx->pc != 0x1ECF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF670_0x1ef670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF20u; }
        if (ctx->pc != 0x1ECF20u) { return; }
    }
    ctx->pc = 0x1ECF20u;
label_1ecf20:
    // 0x1ecf20: 0x83a3005c  lb          $v1, 0x5C($sp)
    ctx->pc = 0x1ecf20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1ecf24: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ECF24u;
    {
        const bool branch_taken_0x1ecf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf24) {
            ctx->pc = 0x1ECF88u;
            goto label_1ecf88;
        }
    }
    ctx->pc = 0x1ECF2Cu;
    // 0x1ecf2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ecf30: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ecf30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1ecf34: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ecf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x1ecf38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ecf3c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ecf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x1ecf40: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ecf40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ecf44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ECF44u;
    {
        const bool branch_taken_0x1ecf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF44u;
            // 0x1ecf48: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf44) {
            ctx->pc = 0x1ECF74u;
            goto label_1ecf74;
        }
    }
    ctx->pc = 0x1ECF4Cu;
    // 0x1ecf4c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ecf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ecf50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ecf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ecf54: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
    // 0x1ecf58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ecf58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ecf5c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x1ecf60: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ecf60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ecf64: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
    // 0x1ecf68: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ecf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ecf6c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ecf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1ecf70: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ecf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ecf74:
    // 0x1ecf74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecf7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf80: 0xc07ba00  jal         func_1EE800
    ctx->pc = 0x1ECF80u;
    SET_GPR_U32(ctx, 31, 0x1ECF88u);
    ctx->pc = 0x1ECF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF80u;
            // 0x1ecf84: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE800u;
    if (runtime->hasFunction(0x1EE800u)) {
        auto targetFn = runtime->lookupFunction(0x1EE800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF88u; }
        if (ctx->pc != 0x1ECF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE800_0x1ee800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF88u; }
        if (ctx->pc != 0x1ECF88u) { return; }
    }
    ctx->pc = 0x1ECF88u;
label_1ecf88:
    // 0x1ecf88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ecf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ecf8c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ecf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1ecf90: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1ecf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1ecf94: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1ecf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1ecf98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ecf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1ecf9c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x1ecfa0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ecfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1ecfa4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ecfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x1ecfa8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ecfa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ecfac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ECFACu;
    {
        const bool branch_taken_0x1ecfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFACu;
            // 0x1ecfb0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfac) {
            ctx->pc = 0x1ECFDCu;
            goto label_1ecfdc;
        }
    }
    ctx->pc = 0x1ECFB4u;
    // 0x1ecfb4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ecfb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ecfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ecfbc: 0x2463acb0  addiu       $v1, $v1, -0x5350
    ctx->pc = 0x1ecfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945968));
    // 0x1ecfc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ecfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ecfc4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x1ecfc8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ecfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ecfcc: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x1ecfd0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ecfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1ecfd4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ecfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1ecfd8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ecfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ecfdc:
    // 0x1ecfdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ecfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecfe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ecfe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecfe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecfe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecfec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFF0u;
            // 0x1ecff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECFF8u;
    // 0x1ecff8: 0x0  nop
    ctx->pc = 0x1ecff8u;
    // NOP
    // 0x1ecffc: 0x0  nop
    ctx->pc = 0x1ecffcu;
    // NOP
}
