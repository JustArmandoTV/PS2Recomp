#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9970
// Address: 0x2b9970 - 0x2b9af0
void sub_002B9970_0x2b9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9970_0x2b9970");
#endif

    switch (ctx->pc) {
        case 0x2b998cu: goto label_2b998c;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b9a00u: goto label_2b9a00;
        case 0x2b9a20u: goto label_2b9a20;
        case 0x2b9a80u: goto label_2b9a80;
        case 0x2b9a8cu: goto label_2b9a8c;
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9aa4u: goto label_2b9aa4;
        case 0x2b9ab0u: goto label_2b9ab0;
        case 0x2b9abcu: goto label_2b9abc;
        case 0x2b9ad4u: goto label_2b9ad4;
        default: break;
    }

    ctx->pc = 0x2b9970u;

    // 0x2b9970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9974: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b9978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b997c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2b997cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2b9980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9984: 0xc0ae78c  jal         func_2B9E30
    ctx->pc = 0x2B9984u;
    SET_GPR_U32(ctx, 31, 0x2B998Cu);
    ctx->pc = 0x2B9988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9984u;
            // 0x2b9988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9E30u;
    if (runtime->hasFunction(0x2B9E30u)) {
        auto targetFn = runtime->lookupFunction(0x2B9E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B998Cu; }
        if (ctx->pc != 0x2B998Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9E30_0x2b9e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B998Cu; }
        if (ctx->pc != 0x2B998Cu) { return; }
    }
    ctx->pc = 0x2B998Cu;
label_2b998c:
    // 0x2b998c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b998cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9990: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9994: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x2b9994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2b9998: 0x244225b8  addiu       $v0, $v0, 0x25B8
    ctx->pc = 0x2b9998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9656));
    // 0x2b999c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b999cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b99a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b99a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99a4: 0xc0ae788  jal         func_2B9E20
    ctx->pc = 0x2B99A4u;
    SET_GPR_U32(ctx, 31, 0x2B99ACu);
    ctx->pc = 0x2B99A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B99A4u;
            // 0x2b99a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9E20u;
    if (runtime->hasFunction(0x2B9E20u)) {
        auto targetFn = runtime->lookupFunction(0x2B9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B99ACu; }
        if (ctx->pc != 0x2B99ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9E20_0x2b9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B99ACu; }
        if (ctx->pc != 0x2B99ACu) { return; }
    }
    ctx->pc = 0x2B99ACu;
label_2b99ac:
    // 0x2b99ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b99acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b99b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b99b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b99b8: 0x24426620  addiu       $v0, $v0, 0x6620
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26144));
    // 0x2b99bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b99c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b99c4: 0x24426658  addiu       $v0, $v0, 0x6658
    ctx->pc = 0x2b99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26200));
    // 0x2b99c8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b99cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b99d0: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2b99d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2b99d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2b99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2b99d8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2B99D8u;
    SET_GPR_U32(ctx, 31, 0x2B99E0u);
    ctx->pc = 0x2B99DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B99D8u;
            // 0x2b99dc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B99E0u; }
        if (ctx->pc != 0x2B99E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B99E0u; }
        if (ctx->pc != 0x2B99E0u) { return; }
    }
    ctx->pc = 0x2B99E0u;
label_2b99e0:
    // 0x2b99e0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b99e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b99e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99e8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B99E8u;
    {
        const bool branch_taken_0x2b99e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B99E8u;
            // 0x2b99ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e8) {
            ctx->pc = 0x2B9A04u;
            goto label_2b9a04;
        }
    }
    ctx->pc = 0x2B99F0u;
    // 0x2b99f0: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x2b99f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b99f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b99f8: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2B99F8u;
    SET_GPR_U32(ctx, 31, 0x2B9A00u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A00u; }
        if (ctx->pc != 0x2B9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A00u; }
        if (ctx->pc != 0x2B9A00u) { return; }
    }
    ctx->pc = 0x2B9A00u;
label_2b9a00:
    // 0x2b9a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a04:
    // 0x2b9a04: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2b9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2b9a08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b9a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9a14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A14u;
            // 0x2b9a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9A1Cu;
    // 0x2b9a1c: 0x0  nop
    ctx->pc = 0x2b9a1cu;
    // NOP
label_2b9a20:
    // 0x2b9a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b9a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b9a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b9a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a34: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B9A34u;
    {
        const bool branch_taken_0x2b9a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A34u;
            // 0x2b9a38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a34) {
            ctx->pc = 0x2B9AD4u;
            goto label_2b9ad4;
        }
    }
    ctx->pc = 0x2B9A3Cu;
    // 0x2b9a3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9a40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9a44: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x2b9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2b9a48: 0x244225b8  addiu       $v0, $v0, 0x25B8
    ctx->pc = 0x2b9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9656));
    // 0x2b9a4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b9a50: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B9A50u;
    {
        const bool branch_taken_0x2b9a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A50u;
            // 0x2b9a54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a50) {
            ctx->pc = 0x2B9ABCu;
            goto label_2b9abc;
        }
    }
    ctx->pc = 0x2B9A58u;
    // 0x2b9a58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9a5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9a60: 0x24632530  addiu       $v1, $v1, 0x2530
    ctx->pc = 0x2b9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9520));
    // 0x2b9a64: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2b9a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2b9a68: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2b9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2b9a6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b9a70: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b9a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b9a74: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b9a78: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2B9A78u;
    SET_GPR_U32(ctx, 31, 0x2B9A80u);
    ctx->pc = 0x2B9A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A78u;
            // 0x2b9a7c: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A80u; }
        if (ctx->pc != 0x2B9A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A80u; }
        if (ctx->pc != 0x2B9A80u) { return; }
    }
    ctx->pc = 0x2B9A80u;
label_2b9a80:
    // 0x2b9a80: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2b9a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2b9a84: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x2B9A84u;
    SET_GPR_U32(ctx, 31, 0x2B9A8Cu);
    ctx->pc = 0x2B9A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A84u;
            // 0x2b9a88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A8Cu; }
        if (ctx->pc != 0x2B9A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A8Cu; }
        if (ctx->pc != 0x2B9A8Cu) { return; }
    }
    ctx->pc = 0x2B9A8Cu;
label_2b9a8c:
    // 0x2b9a8c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2b9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2b9a90: 0xc0ae6d4  jal         func_2B9B50
    ctx->pc = 0x2B9A90u;
    SET_GPR_U32(ctx, 31, 0x2B9A98u);
    ctx->pc = 0x2B9A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A90u;
            // 0x2b9a94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9B50u;
    if (runtime->hasFunction(0x2B9B50u)) {
        auto targetFn = runtime->lookupFunction(0x2B9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A98u; }
        if (ctx->pc != 0x2B9A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9B50_0x2b9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9A98u; }
        if (ctx->pc != 0x2B9A98u) { return; }
    }
    ctx->pc = 0x2B9A98u;
label_2b9a98:
    // 0x2b9a98: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2b9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2b9a9c: 0xc0ae6d4  jal         func_2B9B50
    ctx->pc = 0x2B9A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B9AA4u);
    ctx->pc = 0x2B9AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9A9Cu;
            // 0x2b9aa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9B50u;
    if (runtime->hasFunction(0x2B9B50u)) {
        auto targetFn = runtime->lookupFunction(0x2B9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AA4u; }
        if (ctx->pc != 0x2B9AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9B50_0x2b9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AA4u; }
        if (ctx->pc != 0x2B9AA4u) { return; }
    }
    ctx->pc = 0x2B9AA4u;
label_2b9aa4:
    // 0x2b9aa4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2b9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2b9aa8: 0xc0ae6bc  jal         func_2B9AF0
    ctx->pc = 0x2B9AA8u;
    SET_GPR_U32(ctx, 31, 0x2B9AB0u);
    ctx->pc = 0x2B9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AA8u;
            // 0x2b9aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AF0u;
    if (runtime->hasFunction(0x2B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AB0u; }
        if (ctx->pc != 0x2B9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9AF0_0x2b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AB0u; }
        if (ctx->pc != 0x2B9AB0u) { return; }
    }
    ctx->pc = 0x2B9AB0u;
label_2b9ab0:
    // 0x2b9ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ab4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B9AB4u;
    SET_GPR_U32(ctx, 31, 0x2B9ABCu);
    ctx->pc = 0x2B9AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AB4u;
            // 0x2b9ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9ABCu; }
        if (ctx->pc != 0x2B9ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9ABCu; }
        if (ctx->pc != 0x2B9ABCu) { return; }
    }
    ctx->pc = 0x2B9ABCu;
label_2b9abc:
    // 0x2b9abc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2b9abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2b9ac0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9ac0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b9ac4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9AC4u;
    {
        const bool branch_taken_0x2b9ac4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b9ac4) {
            ctx->pc = 0x2B9AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AC4u;
            // 0x2b9ac8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9AD8u;
            goto label_2b9ad8;
        }
    }
    ctx->pc = 0x2B9ACCu;
    // 0x2b9acc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B9ACCu;
    SET_GPR_U32(ctx, 31, 0x2B9AD4u);
    ctx->pc = 0x2B9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9ACCu;
            // 0x2b9ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AD4u; }
        if (ctx->pc != 0x2B9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9AD4u; }
        if (ctx->pc != 0x2B9AD4u) { return; }
    }
    ctx->pc = 0x2B9AD4u;
label_2b9ad4:
    // 0x2b9ad4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b9ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ad8:
    // 0x2b9ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AE4u;
            // 0x2b9ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9AECu;
    // 0x2b9aec: 0x0  nop
    ctx->pc = 0x2b9aecu;
    // NOP
}
