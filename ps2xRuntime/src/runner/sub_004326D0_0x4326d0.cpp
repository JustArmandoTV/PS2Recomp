#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004326D0
// Address: 0x4326d0 - 0x432760
void sub_004326D0_0x4326d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004326D0_0x4326d0");
#endif

    switch (ctx->pc) {
        case 0x4326f0u: goto label_4326f0;
        case 0x432700u: goto label_432700;
        case 0x43273cu: goto label_43273c;
        default: break;
    }

    ctx->pc = 0x4326d0u;

    // 0x4326d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4326d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4326d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4326d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4326d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4326d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4326dc: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x4326dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4326e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4326E0u;
    {
        const bool branch_taken_0x4326e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4326E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4326E0u;
            // 0x4326e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4326e0) {
            ctx->pc = 0x4326F8u;
            goto label_4326f8;
        }
    }
    ctx->pc = 0x4326E8u;
    // 0x4326e8: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x4326E8u;
    SET_GPR_U32(ctx, 31, 0x4326F0u);
    ctx->pc = 0x4326ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4326E8u;
            // 0x4326ec: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4326F0u; }
        if (ctx->pc != 0x4326F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4326F0u; }
        if (ctx->pc != 0x4326F0u) { return; }
    }
    ctx->pc = 0x4326F0u;
label_4326f0:
    // 0x4326f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4326F0u;
    {
        const bool branch_taken_0x4326f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4326F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4326F0u;
            // 0x4326f4: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4326f0) {
            ctx->pc = 0x43272Cu;
            goto label_43272c;
        }
    }
    ctx->pc = 0x4326F8u;
label_4326f8:
    // 0x4326f8: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x4326F8u;
    SET_GPR_U32(ctx, 31, 0x432700u);
    ctx->pc = 0x4326FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4326F8u;
            // 0x4326fc: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432700u; }
        if (ctx->pc != 0x432700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432700u; }
        if (ctx->pc != 0x432700u) { return; }
    }
    ctx->pc = 0x432700u;
label_432700:
    // 0x432700: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x432700u;
    {
        const bool branch_taken_0x432700 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x432700) {
            ctx->pc = 0x432704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432700u;
            // 0x432704: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432728u;
            goto label_432728;
        }
    }
    ctx->pc = 0x432708u;
    // 0x432708: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x432708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x43270c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x432710: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x432710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x432714: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x432714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x432718: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x432718u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x43271c: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x43271Cu;
    {
        const bool branch_taken_0x43271c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x43271c) {
            ctx->pc = 0x432720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43271Cu;
            // 0x432720: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x43272Cu;
            goto label_43272c;
        }
    }
    ctx->pc = 0x432724u;
    // 0x432724: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x432724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_432728:
    // 0x432728: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x432728u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_43272c:
    // 0x43272c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x43272Cu;
    {
        const bool branch_taken_0x43272c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43272c) {
            ctx->pc = 0x432730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43272Cu;
            // 0x432730: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432748u;
            goto label_432748;
        }
    }
    ctx->pc = 0x432734u;
    // 0x432734: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x432734u;
    SET_GPR_U32(ctx, 31, 0x43273Cu);
    ctx->pc = 0x432738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432734u;
            // 0x432738: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43273Cu; }
        if (ctx->pc != 0x43273Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43273Cu; }
        if (ctx->pc != 0x43273Cu) { return; }
    }
    ctx->pc = 0x43273Cu;
label_43273c:
    // 0x43273c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x43273cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x432740: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x432740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x432744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x432744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_432748:
    // 0x432748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43274c: 0x3e00008  jr          $ra
    ctx->pc = 0x43274Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43274Cu;
            // 0x432750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432754u;
    // 0x432754: 0x0  nop
    ctx->pc = 0x432754u;
    // NOP
    // 0x432758: 0x0  nop
    ctx->pc = 0x432758u;
    // NOP
    // 0x43275c: 0x0  nop
    ctx->pc = 0x43275cu;
    // NOP
}
