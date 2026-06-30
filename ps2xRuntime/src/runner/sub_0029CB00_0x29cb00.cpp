#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CB00
// Address: 0x29cb00 - 0x29cc00
void sub_0029CB00_0x29cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CB00_0x29cb00");
#endif

    switch (ctx->pc) {
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cbb8u: goto label_29cbb8;
        default: break;
    }

    ctx->pc = 0x29cb00u;

    // 0x29cb00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29cb04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29cb08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29cb0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29cb10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29cb10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29cb18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29cb18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29cb20: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x29CB20u;
    {
        const bool branch_taken_0x29cb20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB20u;
            // 0x29cb24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb20) {
            ctx->pc = 0x29CB48u;
            goto label_29cb48;
        }
    }
    ctx->pc = 0x29CB28u;
    // 0x29cb28: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29cb2c: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x29cb2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29cb30: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CB30u;
    {
        const bool branch_taken_0x29cb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb30) {
            ctx->pc = 0x29CB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB30u;
            // 0x29cb34: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CB4Cu;
            goto label_29cb4c;
        }
    }
    ctx->pc = 0x29CB38u;
    // 0x29cb38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29cb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb3c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29cb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29CB40u;
    {
        const bool branch_taken_0x29cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB40u;
            // 0x29cb44: 0x3c118000  lui         $s1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb40) {
            ctx->pc = 0x29CB80u;
            goto label_29cb80;
        }
    }
    ctx->pc = 0x29CB48u;
label_29cb48:
    // 0x29cb48: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x29cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_29cb4c:
    // 0x29cb4c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x29cb50: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29cb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x29cb54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CB54u;
    {
        const bool branch_taken_0x29cb54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB54u;
            // 0x29cb58: 0x29043  sra         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb54) {
            ctx->pc = 0x29CB64u;
            goto label_29cb64;
        }
    }
    ctx->pc = 0x29CB5Cu;
    // 0x29cb5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29cb60: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x29cb60u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_29cb64:
    // 0x29cb64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29cb68: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x29cb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29cb6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29cb70: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29CB70u;
    SET_GPR_U32(ctx, 31, 0x29CB78u);
    ctx->pc = 0x29CB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB70u;
            // 0x29cb74: 0x2532818  mult        $a1, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB78u; }
        if (ctx->pc != 0x29CB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB78u; }
        if (ctx->pc != 0x29CB78u) { return; }
    }
    ctx->pc = 0x29CB78u;
label_29cb78:
    // 0x29cb78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29cb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29cb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cb80:
    // 0x29cb80: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29cb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb88: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x29cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29cb8c: 0xc0a8448  jal         func_2A1120
    ctx->pc = 0x29CB8Cu;
    SET_GPR_U32(ctx, 31, 0x29CB94u);
    ctx->pc = 0x29CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB8Cu;
            // 0x29cb90: 0x533018  mult        $a2, $v0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB94u; }
        if (ctx->pc != 0x29CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB94u; }
        if (ctx->pc != 0x29CB94u) { return; }
    }
    ctx->pc = 0x29CB94u;
label_29cb94:
    // 0x29cb94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29cb98: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29cb9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29cba0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29cba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29cba4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x29cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29cba8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x29cbac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x29cbb0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29CBB0u;
    SET_GPR_U32(ctx, 31, 0x29CBB8u);
    ctx->pc = 0x29CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CBB0u;
            // 0x29cbb4: 0x2623018  mult        $a2, $s3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBB8u; }
        if (ctx->pc != 0x29CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBB8u; }
        if (ctx->pc != 0x29CBB8u) { return; }
    }
    ctx->pc = 0x29CBB8u;
label_29cbb8:
    // 0x29cbb8: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x29cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x29cbbc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x29cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x29cbc0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x29cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29cbc4: 0x2511825  or          $v1, $s2, $s1
    ctx->pc = 0x29cbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x29cbc8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x29cbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x29cbcc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29cbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29cbd0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x29cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x29cbd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29cbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cbd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29cbd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cbdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29cbdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cbe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29cbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cbe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29cbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cbe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29cbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cbec: 0x3e00008  jr          $ra
    ctx->pc = 0x29CBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CBECu;
            // 0x29cbf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CBF4u;
    // 0x29cbf4: 0x0  nop
    ctx->pc = 0x29cbf4u;
    // NOP
    // 0x29cbf8: 0x0  nop
    ctx->pc = 0x29cbf8u;
    // NOP
    // 0x29cbfc: 0x0  nop
    ctx->pc = 0x29cbfcu;
    // NOP
}
