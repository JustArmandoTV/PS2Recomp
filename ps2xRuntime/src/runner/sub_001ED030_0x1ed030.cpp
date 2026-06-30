#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED030
// Address: 0x1ed030 - 0x1ed1d0
void sub_001ED030_0x1ed030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED030_0x1ed030");
#endif

    switch (ctx->pc) {
        case 0x1ed0ecu: goto label_1ed0ec;
        case 0x1ed158u: goto label_1ed158;
        default: break;
    }

    ctx->pc = 0x1ed030u;

    // 0x1ed030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ed030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ed034: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ed038: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ed038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ed03c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ed03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ed040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ed040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ed044: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ed044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed04c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ed04cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed054: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ed054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1ed058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed05c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ed05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed060: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ed060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x1ed064: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ed064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed068: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1ed068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed06c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ed070: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x1ed074: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ed074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ed078: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED078u;
    {
        const bool branch_taken_0x1ed078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED078u;
            // 0x1ed07c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed078) {
            ctx->pc = 0x1ED0B4u;
            goto label_1ed0b4;
        }
    }
    ctx->pc = 0x1ED080u;
    // 0x1ed080: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ed084: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ed084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ed088: 0x2463acb8  addiu       $v1, $v1, -0x5348
    ctx->pc = 0x1ed088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945976));
    // 0x1ed08c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ed08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ed090: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x1ed090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x1ed094: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ed094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ed098: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ed098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1ed09c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x1ed0a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ed0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1ed0a4: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x1ed0a8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ed0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ed0ac: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ed0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ed0b0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ed0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ed0b4:
    // 0x1ed0b4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ed0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1ed0b8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1ed0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ed0bc: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ed0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1ed0c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ed0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ed0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ed0c8: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x1ed0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x1ed0cc: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1ed0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x1ed0d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ed0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0d4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1ed0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1ed0d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ed0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0dc: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1ed0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x1ed0e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ed0e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0e4: 0xc07c364  jal         func_1F0D90
    ctx->pc = 0x1ED0E4u;
    SET_GPR_U32(ctx, 31, 0x1ED0ECu);
    ctx->pc = 0x1ED0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED0E4u;
            // 0x1ed0e8: 0xa3a00068  sb          $zero, 0x68($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED0ECu; }
        if (ctx->pc != 0x1ED0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED0ECu; }
        if (ctx->pc != 0x1ED0ECu) { return; }
    }
    ctx->pc = 0x1ED0ECu;
label_1ed0ec:
    // 0x1ed0ec: 0x83a30068  lb          $v1, 0x68($sp)
    ctx->pc = 0x1ed0ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed0f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1ED0F0u;
    {
        const bool branch_taken_0x1ed0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed0f0) {
            ctx->pc = 0x1ED158u;
            goto label_1ed158;
        }
    }
    ctx->pc = 0x1ED0F8u;
    // 0x1ed0f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ed0fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ed0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1ed100: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ed100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x1ed104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ed108: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ed108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
    // 0x1ed10c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ed10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ed110: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED110u;
    {
        const bool branch_taken_0x1ed110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED110u;
            // 0x1ed114: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed110) {
            ctx->pc = 0x1ED140u;
            goto label_1ed140;
        }
    }
    ctx->pc = 0x1ED118u;
    // 0x1ed118: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ed118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ed11c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ed11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ed120: 0x2442acc8  addiu       $v0, $v0, -0x5338
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945992));
    // 0x1ed124: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ed124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ed128: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed128u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
    // 0x1ed12c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ed12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ed130: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
    // 0x1ed134: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ed134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ed138: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ed138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1ed13c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ed13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ed140:
    // 0x1ed140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ed140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ed144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ed148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed14c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ed14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed150: 0xc07b99c  jal         func_1EE670
    ctx->pc = 0x1ED150u;
    SET_GPR_U32(ctx, 31, 0x1ED158u);
    ctx->pc = 0x1ED154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED150u;
            // 0x1ed154: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE670u;
    if (runtime->hasFunction(0x1EE670u)) {
        auto targetFn = runtime->lookupFunction(0x1EE670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED158u; }
        if (ctx->pc != 0x1ED158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE670_0x1ee670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED158u; }
        if (ctx->pc != 0x1ED158u) { return; }
    }
    ctx->pc = 0x1ED158u;
label_1ed158:
    // 0x1ed158: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ed158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ed15c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1ed160: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ed160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ed164: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1ed164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1ed168: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ed168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1ed16c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ed16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x1ed170: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ed170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1ed174: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x1ed178: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ed178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ed17c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED17Cu;
    {
        const bool branch_taken_0x1ed17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED17Cu;
            // 0x1ed180: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed17c) {
            ctx->pc = 0x1ED1ACu;
            goto label_1ed1ac;
        }
    }
    ctx->pc = 0x1ED184u;
    // 0x1ed184: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ed188: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ed188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ed18c: 0x2463acb0  addiu       $v1, $v1, -0x5350
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945968));
    // 0x1ed190: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ed190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ed194: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x1ed198: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ed198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ed19c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
    // 0x1ed1a0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1ed1a4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ed1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1ed1a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ed1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ed1ac:
    // 0x1ed1ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed1b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ed1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed1b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ed1b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed1b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed1bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1C4u;
            // 0x1ed1c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED1CCu;
    // 0x1ed1cc: 0x0  nop
    ctx->pc = 0x1ed1ccu;
    // NOP
}
