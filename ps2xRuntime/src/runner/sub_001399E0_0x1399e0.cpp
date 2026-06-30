#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001399E0
// Address: 0x1399e0 - 0x139b20
void sub_001399E0_0x1399e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001399E0_0x1399e0");
#endif

    switch (ctx->pc) {
        case 0x139a30u: goto label_139a30;
        case 0x139a58u: goto label_139a58;
        case 0x139abcu: goto label_139abc;
        case 0x139ae4u: goto label_139ae4;
        default: break;
    }

    ctx->pc = 0x1399e0u;

    // 0x1399e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1399e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1399e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1399e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1399e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1399e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1399ec: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1399ECu;
    {
        const bool branch_taken_0x1399ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1399F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1399ECu;
            // 0x1399f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399ec) {
            ctx->pc = 0x139A38u;
            goto label_139a38;
        }
    }
    ctx->pc = 0x1399F4u;
    // 0x1399f4: 0x24026008  addiu       $v0, $zero, 0x6008
    ctx->pc = 0x1399f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24584));
    // 0x1399f8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1399f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1399fc: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x1399fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x139a00: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x139a04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x139a08: 0x24844f10  addiu       $a0, $a0, 0x4F10
    ctx->pc = 0x139a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    // 0x139a0c: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x139a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x139a10: 0x24a54bc0  addiu       $a1, $a1, 0x4BC0
    ctx->pc = 0x139a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19392));
    // 0x139a14: 0xa7a2002e  sh          $v0, 0x2E($sp)
    ctx->pc = 0x139a14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x139a18: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x139a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x139a24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a28: 0xc05680c  jal         func_15A030
    ctx->pc = 0x139A28u;
    SET_GPR_U32(ctx, 31, 0x139A30u);
    ctx->pc = 0x139A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139A28u;
            // 0x139a2c: 0xa7a0002a  sh          $zero, 0x2A($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    if (runtime->hasFunction(0x15A030u)) {
        auto targetFn = runtime->lookupFunction(0x15A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A30u; }
        if (ctx->pc != 0x139A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A030_0x15a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A30u; }
        if (ctx->pc != 0x139A30u) { return; }
    }
    ctx->pc = 0x139A30u;
label_139a30:
    // 0x139a30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x139A30u;
    {
        const bool branch_taken_0x139a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a30) {
            ctx->pc = 0x139A58u;
            goto label_139a58;
        }
    }
    ctx->pc = 0x139A38u;
label_139a38:
    // 0x139a38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x139a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a40: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a48: 0x24844f10  addiu       $a0, $a0, 0x4F10
    ctx->pc = 0x139a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    // 0x139a4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a50: 0xc05680c  jal         func_15A030
    ctx->pc = 0x139A50u;
    SET_GPR_U32(ctx, 31, 0x139A58u);
    ctx->pc = 0x139A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139A50u;
            // 0x139a54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    if (runtime->hasFunction(0x15A030u)) {
        auto targetFn = runtime->lookupFunction(0x15A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A58u; }
        if (ctx->pc != 0x139A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A030_0x15a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A58u; }
        if (ctx->pc != 0x139A58u) { return; }
    }
    ctx->pc = 0x139A58u;
label_139a58:
    // 0x139a58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x139a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x139a5c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x139a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x139a60: 0x90454f2c  lbu         $a1, 0x4F2C($v0)
    ctx->pc = 0x139a60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20268)));
    // 0x139a64: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x139a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x139a68: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x139a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x139a6c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x139a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x139a70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x139a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x139a74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x139a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x139a78: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x139A78u;
    {
        const bool branch_taken_0x139a78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x139A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A78u;
            // 0x139a7c: 0xa0434f2c  sb          $v1, 0x4F2C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 20268), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a78) {
            ctx->pc = 0x139AC4u;
            goto label_139ac4;
        }
    }
    ctx->pc = 0x139A80u;
    // 0x139a80: 0x24026009  addiu       $v0, $zero, 0x6009
    ctx->pc = 0x139a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24585));
    // 0x139a84: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139a88: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x139a88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x139a8c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x139a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x139a90: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x139a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x139a94: 0x24844f40  addiu       $a0, $a0, 0x4F40
    ctx->pc = 0x139a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    // 0x139a98: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x139a98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x139a9c: 0x24a54c40  addiu       $a1, $a1, 0x4C40
    ctx->pc = 0x139a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19520));
    // 0x139aa0: 0xa7a2002e  sh          $v0, 0x2E($sp)
    ctx->pc = 0x139aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x139aa4: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x139aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x139aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x139ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab4: 0xc05680c  jal         func_15A030
    ctx->pc = 0x139AB4u;
    SET_GPR_U32(ctx, 31, 0x139ABCu);
    ctx->pc = 0x139AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139AB4u;
            // 0x139ab8: 0xa7a0002a  sh          $zero, 0x2A($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    if (runtime->hasFunction(0x15A030u)) {
        auto targetFn = runtime->lookupFunction(0x15A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139ABCu; }
        if (ctx->pc != 0x139ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A030_0x15a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139ABCu; }
        if (ctx->pc != 0x139ABCu) { return; }
    }
    ctx->pc = 0x139ABCu;
label_139abc:
    // 0x139abc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x139ABCu;
    {
        const bool branch_taken_0x139abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139abc) {
            ctx->pc = 0x139AE4u;
            goto label_139ae4;
        }
    }
    ctx->pc = 0x139AC4u;
label_139ac4:
    // 0x139ac4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139ac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139acc: 0x24844f40  addiu       $a0, $a0, 0x4F40
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    // 0x139ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x139ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139adc: 0xc05680c  jal         func_15A030
    ctx->pc = 0x139ADCu;
    SET_GPR_U32(ctx, 31, 0x139AE4u);
    ctx->pc = 0x139AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139ADCu;
            // 0x139ae0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    if (runtime->hasFunction(0x15A030u)) {
        auto targetFn = runtime->lookupFunction(0x15A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139AE4u; }
        if (ctx->pc != 0x139AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A030_0x15a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139AE4u; }
        if (ctx->pc != 0x139AE4u) { return; }
    }
    ctx->pc = 0x139AE4u;
label_139ae4:
    // 0x139ae4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139ae8: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x139ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x139aec: 0x90664f5c  lbu         $a2, 0x4F5C($v1)
    ctx->pc = 0x139aecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20316)));
    // 0x139af0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139af4: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x139af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x139af8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x139af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x139afc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139b00: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x139b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x139b04: 0xa0644f5c  sb          $a0, 0x4F5C($v1)
    ctx->pc = 0x139b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20316), (uint8_t)GPR_U32(ctx, 4));
    // 0x139b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139b10: 0x3e00008  jr          $ra
    ctx->pc = 0x139B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B10u;
            // 0x139b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139B18u;
    // 0x139b18: 0x0  nop
    ctx->pc = 0x139b18u;
    // NOP
    // 0x139b1c: 0x0  nop
    ctx->pc = 0x139b1cu;
    // NOP
}
