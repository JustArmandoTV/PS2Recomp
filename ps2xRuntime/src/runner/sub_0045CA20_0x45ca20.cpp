#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045CA20
// Address: 0x45ca20 - 0x45cc00
void sub_0045CA20_0x45ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CA20_0x45ca20");
#endif

    switch (ctx->pc) {
        case 0x45ca68u: goto label_45ca68;
        case 0x45cab4u: goto label_45cab4;
        case 0x45caccu: goto label_45cacc;
        case 0x45cae4u: goto label_45cae4;
        case 0x45cafcu: goto label_45cafc;
        case 0x45cb1cu: goto label_45cb1c;
        case 0x45cb40u: goto label_45cb40;
        case 0x45cb54u: goto label_45cb54;
        case 0x45cb74u: goto label_45cb74;
        case 0x45cb88u: goto label_45cb88;
        case 0x45cba0u: goto label_45cba0;
        case 0x45cbb4u: goto label_45cbb4;
        case 0x45cbc8u: goto label_45cbc8;
        default: break;
    }

    ctx->pc = 0x45ca20u;

    // 0x45ca20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x45ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x45ca24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x45ca28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x45ca2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x45ca30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x45ca34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45ca38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45ca3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x45ca40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x45ca40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ca44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45ca48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x45ca48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ca4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45ca50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45ca54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ca58: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x45ca58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x45ca5c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45ca60: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45CA60u;
    SET_GPR_U32(ctx, 31, 0x45CA68u);
    ctx->pc = 0x45CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CA60u;
            // 0x45ca64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CA68u; }
        if (ctx->pc != 0x45CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CA68u; }
        if (ctx->pc != 0x45CA68u) { return; }
    }
    ctx->pc = 0x45CA68u;
label_45ca68:
    // 0x45ca68: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x45ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x45ca6c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x45ca70: 0xc4800450  lwc1        $f0, 0x450($a0)
    ctx->pc = 0x45ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ca74: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x45ca74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x45ca78: 0xc4620454  lwc1        $f2, 0x454($v1)
    ctx->pc = 0x45ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45ca7c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45ca80: 0x24a5e330  addiu       $a1, $a1, -0x1CD0
    ctx->pc = 0x45ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
    // 0x45ca84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45ca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ca88: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x45ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x45ca8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45ca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ca90: 0xc4810458  lwc1        $f1, 0x458($a0)
    ctx->pc = 0x45ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ca94: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x45ca98: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x45ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x45ca9c: 0xc460045c  lwc1        $f0, 0x45C($v1)
    ctx->pc = 0x45ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45caa0: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x45caa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x45caa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45caa8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x45caa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x45caac: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CAACu;
    SET_GPR_U32(ctx, 31, 0x45CAB4u);
    ctx->pc = 0x45CAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CAACu;
            // 0x45cab0: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CAB4u; }
        if (ctx->pc != 0x45CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CAB4u; }
        if (ctx->pc != 0x45CAB4u) { return; }
    }
    ctx->pc = 0x45CAB4u;
label_45cab4:
    // 0x45cab4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cab8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45cabc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45cabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cac0: 0x24a5e2e8  addiu       $a1, $a1, -0x1D18
    ctx->pc = 0x45cac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959848));
    // 0x45cac4: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CAC4u;
    SET_GPR_U32(ctx, 31, 0x45CACCu);
    ctx->pc = 0x45CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CAC4u;
            // 0x45cac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CACCu; }
        if (ctx->pc != 0x45CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CACCu; }
        if (ctx->pc != 0x45CACCu) { return; }
    }
    ctx->pc = 0x45CACCu;
label_45cacc:
    // 0x45cacc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45caccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cad0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45cad4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45cad4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cad8: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45cadc: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CADCu;
    SET_GPR_U32(ctx, 31, 0x45CAE4u);
    ctx->pc = 0x45CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CADCu;
            // 0x45cae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CAE4u; }
        if (ctx->pc != 0x45CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CAE4u; }
        if (ctx->pc != 0x45CAE4u) { return; }
    }
    ctx->pc = 0x45CAE4u;
label_45cae4:
    // 0x45cae4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cae8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45caec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x45caecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45caf0: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x45caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    // 0x45caf4: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CAF4u;
    SET_GPR_U32(ctx, 31, 0x45CAFCu);
    ctx->pc = 0x45CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CAF4u;
            // 0x45caf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CAFCu; }
        if (ctx->pc != 0x45CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CAFCu; }
        if (ctx->pc != 0x45CAFCu) { return; }
    }
    ctx->pc = 0x45CAFCu;
label_45cafc:
    // 0x45cafc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45cb00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45cb00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb04: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x45cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x45cb08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cb0c: 0x8c5100a0  lw          $s1, 0xA0($v0)
    ctx->pc = 0x45cb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x45cb10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45cb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb14: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CB14u;
    SET_GPR_U32(ctx, 31, 0x45CB1Cu);
    ctx->pc = 0x45CB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB14u;
            // 0x45cb18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB1Cu; }
        if (ctx->pc != 0x45CB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB1Cu; }
        if (ctx->pc != 0x45CB1Cu) { return; }
    }
    ctx->pc = 0x45CB1Cu;
label_45cb1c:
    // 0x45cb1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45cb1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb20: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x45cb20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x45cb24: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x45CB24u;
    {
        const bool branch_taken_0x45cb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cb24) {
            ctx->pc = 0x45CB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB24u;
            // 0x45cb28: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CB5Cu;
            goto label_45cb5c;
        }
    }
    ctx->pc = 0x45CB2Cu;
    // 0x45cb2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cb30: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45cb34: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45cb38: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CB38u;
    SET_GPR_U32(ctx, 31, 0x45CB40u);
    ctx->pc = 0x45CB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB38u;
            // 0x45cb3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB40u; }
        if (ctx->pc != 0x45CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB40u; }
        if (ctx->pc != 0x45CB40u) { return; }
    }
    ctx->pc = 0x45CB40u;
label_45cb40:
    // 0x45cb40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cb44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45cb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45cb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb4c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CB4Cu;
    SET_GPR_U32(ctx, 31, 0x45CB54u);
    ctx->pc = 0x45CB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB4Cu;
            // 0x45cb50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB54u; }
        if (ctx->pc != 0x45CB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB54u; }
        if (ctx->pc != 0x45CB54u) { return; }
    }
    ctx->pc = 0x45CB54u;
label_45cb54:
    // 0x45cb54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45CB54u;
    {
        const bool branch_taken_0x45cb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB54u;
            // 0x45cb58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cb54) {
            ctx->pc = 0x45CB8Cu;
            goto label_45cb8c;
        }
    }
    ctx->pc = 0x45CB5Cu;
label_45cb5c:
    // 0x45cb5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cb60: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x45cb64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45cb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb68: 0x8c5100a0  lw          $s1, 0xA0($v0)
    ctx->pc = 0x45cb68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x45cb6c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CB6Cu;
    SET_GPR_U32(ctx, 31, 0x45CB74u);
    ctx->pc = 0x45CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB6Cu;
            // 0x45cb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB74u; }
        if (ctx->pc != 0x45CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB74u; }
        if (ctx->pc != 0x45CB74u) { return; }
    }
    ctx->pc = 0x45CB74u;
label_45cb74:
    // 0x45cb74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45cb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45cb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45cb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb80: 0xc123944  jal         func_48E510
    ctx->pc = 0x45CB80u;
    SET_GPR_U32(ctx, 31, 0x45CB88u);
    ctx->pc = 0x45CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB80u;
            // 0x45cb84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB88u; }
        if (ctx->pc != 0x45CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CB88u; }
        if (ctx->pc != 0x45CB88u) { return; }
    }
    ctx->pc = 0x45CB88u;
label_45cb88:
    // 0x45cb88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45cb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45cb8c:
    // 0x45cb8c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x45cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45cb90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45cb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45cb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cb98: 0xc123654  jal         func_48D950
    ctx->pc = 0x45CB98u;
    SET_GPR_U32(ctx, 31, 0x45CBA0u);
    ctx->pc = 0x45CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CB98u;
            // 0x45cb9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CBA0u; }
        if (ctx->pc != 0x45CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CBA0u; }
        if (ctx->pc != 0x45CBA0u) { return; }
    }
    ctx->pc = 0x45CBA0u;
label_45cba0:
    // 0x45cba0: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x45cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x45cba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45cba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45cba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cbac: 0xc123654  jal         func_48D950
    ctx->pc = 0x45CBACu;
    SET_GPR_U32(ctx, 31, 0x45CBB4u);
    ctx->pc = 0x45CBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CBACu;
            // 0x45cbb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CBB4u; }
        if (ctx->pc != 0x45CBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CBB4u; }
        if (ctx->pc != 0x45CBB4u) { return; }
    }
    ctx->pc = 0x45CBB4u;
label_45cbb4:
    // 0x45cbb4: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x45cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x45cbb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45cbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cbbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45cbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cbc0: 0xc123654  jal         func_48D950
    ctx->pc = 0x45CBC0u;
    SET_GPR_U32(ctx, 31, 0x45CBC8u);
    ctx->pc = 0x45CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CBC0u;
            // 0x45cbc4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CBC8u; }
        if (ctx->pc != 0x45CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CBC8u; }
        if (ctx->pc != 0x45CBC8u) { return; }
    }
    ctx->pc = 0x45CBC8u;
label_45cbc8:
    // 0x45cbc8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45cbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45cbcc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45cbccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45cbd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45cbd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45cbd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45cbd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45cbd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45cbd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45cbdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45cbdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45cbe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45cbe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45cbe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45cbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45cbe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45cbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45cbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45cbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45cbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x45CBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45CBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CBF0u;
            // 0x45cbf4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45CBF8u;
    // 0x45cbf8: 0x0  nop
    ctx->pc = 0x45cbf8u;
    // NOP
    // 0x45cbfc: 0x0  nop
    ctx->pc = 0x45cbfcu;
    // NOP
}
