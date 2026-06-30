#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045C630
// Address: 0x45c630 - 0x45c7f0
void sub_0045C630_0x45c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C630_0x45c630");
#endif

    switch (ctx->pc) {
        case 0x45c678u: goto label_45c678;
        case 0x45c6acu: goto label_45c6ac;
        case 0x45c6c4u: goto label_45c6c4;
        case 0x45c6dcu: goto label_45c6dc;
        case 0x45c6f4u: goto label_45c6f4;
        case 0x45c714u: goto label_45c714;
        case 0x45c738u: goto label_45c738;
        case 0x45c74cu: goto label_45c74c;
        case 0x45c76cu: goto label_45c76c;
        case 0x45c780u: goto label_45c780;
        case 0x45c798u: goto label_45c798;
        case 0x45c7acu: goto label_45c7ac;
        case 0x45c7c0u: goto label_45c7c0;
        default: break;
    }

    ctx->pc = 0x45c630u;

    // 0x45c630: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x45c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x45c634: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x45c638: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x45c63c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x45c640: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x45c644: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45c644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45c648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45c64c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x45c650: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x45c650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45c658: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x45c658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c65c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45c660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45c664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45c668: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x45c668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x45c66c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45c670: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45C670u;
    SET_GPR_U32(ctx, 31, 0x45C678u);
    ctx->pc = 0x45C674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C670u;
            // 0x45c674: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C678u; }
        if (ctx->pc != 0x45C678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C678u; }
        if (ctx->pc != 0x45C678u) { return; }
    }
    ctx->pc = 0x45C678u;
label_45c678:
    // 0x45c678: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x45c678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x45c67c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x45c680: 0xc4810478  lwc1        $f1, 0x478($a0)
    ctx->pc = 0x45c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c684: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x45c684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x45c688: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c68c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c690: 0xc460047c  lwc1        $f0, 0x47C($v1)
    ctx->pc = 0x45c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c694: 0x24a5e308  addiu       $a1, $a1, -0x1CF8
    ctx->pc = 0x45c694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959880));
    // 0x45c698: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45c698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45c69c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x45c69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x45c6a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c6a4: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C6A4u;
    SET_GPR_U32(ctx, 31, 0x45C6ACu);
    ctx->pc = 0x45C6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C6A4u;
            // 0x45c6a8: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6ACu; }
        if (ctx->pc != 0x45C6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6ACu; }
        if (ctx->pc != 0x45C6ACu) { return; }
    }
    ctx->pc = 0x45C6ACu;
label_45c6ac:
    // 0x45c6ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c6b0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c6b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45c6b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c6b8: 0x24a5e2e8  addiu       $a1, $a1, -0x1D18
    ctx->pc = 0x45c6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959848));
    // 0x45c6bc: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C6BCu;
    SET_GPR_U32(ctx, 31, 0x45C6C4u);
    ctx->pc = 0x45C6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C6BCu;
            // 0x45c6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6C4u; }
        if (ctx->pc != 0x45C6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6C4u; }
        if (ctx->pc != 0x45C6C4u) { return; }
    }
    ctx->pc = 0x45C6C4u;
label_45c6c4:
    // 0x45c6c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c6c8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c6cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45c6ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c6d0: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45c6d4: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C6D4u;
    SET_GPR_U32(ctx, 31, 0x45C6DCu);
    ctx->pc = 0x45C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C6D4u;
            // 0x45c6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6DCu; }
        if (ctx->pc != 0x45C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6DCu; }
        if (ctx->pc != 0x45C6DCu) { return; }
    }
    ctx->pc = 0x45C6DCu;
label_45c6dc:
    // 0x45c6dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c6e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c6e4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x45c6e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c6e8: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x45c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    // 0x45c6ec: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C6ECu;
    SET_GPR_U32(ctx, 31, 0x45C6F4u);
    ctx->pc = 0x45C6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C6ECu;
            // 0x45c6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6F4u; }
        if (ctx->pc != 0x45C6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C6F4u; }
        if (ctx->pc != 0x45C6F4u) { return; }
    }
    ctx->pc = 0x45C6F4u;
label_45c6f4:
    // 0x45c6f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45c6f8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45c6f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c6fc: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x45c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x45c700: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c704: 0x8c5100a8  lw          $s1, 0xA8($v0)
    ctx->pc = 0x45c704u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x45c708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c70c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C70Cu;
    SET_GPR_U32(ctx, 31, 0x45C714u);
    ctx->pc = 0x45C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C70Cu;
            // 0x45c710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C714u; }
        if (ctx->pc != 0x45C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C714u; }
        if (ctx->pc != 0x45C714u) { return; }
    }
    ctx->pc = 0x45C714u;
label_45c714:
    // 0x45c714: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45c714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c718: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x45c718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x45c71c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x45C71Cu;
    {
        const bool branch_taken_0x45c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c71c) {
            ctx->pc = 0x45C720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C71Cu;
            // 0x45c720: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C754u;
            goto label_45c754;
        }
    }
    ctx->pc = 0x45C724u;
    // 0x45c724: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c728: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c72c: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45c730: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C730u;
    SET_GPR_U32(ctx, 31, 0x45C738u);
    ctx->pc = 0x45C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C730u;
            // 0x45c734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C738u; }
        if (ctx->pc != 0x45C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C738u; }
        if (ctx->pc != 0x45C738u) { return; }
    }
    ctx->pc = 0x45C738u;
label_45c738:
    // 0x45c738: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c73c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45c73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c744: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C744u;
    SET_GPR_U32(ctx, 31, 0x45C74Cu);
    ctx->pc = 0x45C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C744u;
            // 0x45c748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C74Cu; }
        if (ctx->pc != 0x45C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C74Cu; }
        if (ctx->pc != 0x45C74Cu) { return; }
    }
    ctx->pc = 0x45C74Cu;
label_45c74c:
    // 0x45c74c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45C74Cu;
    {
        const bool branch_taken_0x45c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C74Cu;
            // 0x45c750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c74c) {
            ctx->pc = 0x45C784u;
            goto label_45c784;
        }
    }
    ctx->pc = 0x45C754u;
label_45c754:
    // 0x45c754: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c758: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x45c75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c760: 0x8c5100a8  lw          $s1, 0xA8($v0)
    ctx->pc = 0x45c760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x45c764: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C764u;
    SET_GPR_U32(ctx, 31, 0x45C76Cu);
    ctx->pc = 0x45C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C764u;
            // 0x45c768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C76Cu; }
        if (ctx->pc != 0x45C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C76Cu; }
        if (ctx->pc != 0x45C76Cu) { return; }
    }
    ctx->pc = 0x45C76Cu;
label_45c76c:
    // 0x45c76c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45c770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c778: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C778u;
    SET_GPR_U32(ctx, 31, 0x45C780u);
    ctx->pc = 0x45C77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C778u;
            // 0x45c77c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C780u; }
        if (ctx->pc != 0x45C780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C780u; }
        if (ctx->pc != 0x45C780u) { return; }
    }
    ctx->pc = 0x45C780u;
label_45c780:
    // 0x45c780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c784:
    // 0x45c784: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x45c784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45c788: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45c788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c78c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c790: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C790u;
    SET_GPR_U32(ctx, 31, 0x45C798u);
    ctx->pc = 0x45C794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C790u;
            // 0x45c794: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C798u; }
        if (ctx->pc != 0x45C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C798u; }
        if (ctx->pc != 0x45C798u) { return; }
    }
    ctx->pc = 0x45C798u;
label_45c798:
    // 0x45c798: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x45c798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x45c79c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45c79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c7a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c7a4: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C7A4u;
    SET_GPR_U32(ctx, 31, 0x45C7ACu);
    ctx->pc = 0x45C7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C7A4u;
            // 0x45c7a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C7ACu; }
        if (ctx->pc != 0x45C7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C7ACu; }
        if (ctx->pc != 0x45C7ACu) { return; }
    }
    ctx->pc = 0x45C7ACu;
label_45c7ac:
    // 0x45c7ac: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x45c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x45c7b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c7b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45c7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c7b8: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C7B8u;
    SET_GPR_U32(ctx, 31, 0x45C7C0u);
    ctx->pc = 0x45C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C7B8u;
            // 0x45c7bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C7C0u; }
        if (ctx->pc != 0x45C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C7C0u; }
        if (ctx->pc != 0x45C7C0u) { return; }
    }
    ctx->pc = 0x45C7C0u;
label_45c7c0:
    // 0x45c7c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45c7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45c7c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45c7c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45c7c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45c7c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45c7cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45c7ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c7d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45c7d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c7d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45c7d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45c7d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45c7dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45c7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45c7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x45C7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45C7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C7E8u;
            // 0x45c7ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45C7F0u;
}
