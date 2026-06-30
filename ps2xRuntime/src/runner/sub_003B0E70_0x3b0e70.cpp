#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0E70
// Address: 0x3b0e70 - 0x3b13c0
void sub_003B0E70_0x3b0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0E70_0x3b0e70");
#endif

    switch (ctx->pc) {
        case 0x3b0ec0u: goto label_3b0ec0;
        case 0x3b10b4u: goto label_3b10b4;
        case 0x3b10e0u: goto label_3b10e0;
        case 0x3b10f0u: goto label_3b10f0;
        case 0x3b1104u: goto label_3b1104;
        case 0x3b1118u: goto label_3b1118;
        case 0x3b12b0u: goto label_3b12b0;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1368u: goto label_3b1368;
        default: break;
    }

    ctx->pc = 0x3b0e70u;

    // 0x3b0e70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3b0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3b0e74: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x3b0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x3b0e78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3b0e7c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3b0e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3b0e80: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b0e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3b0e84: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3b0e88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b0e8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b0e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b0e90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b0e90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b0e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b0e98: 0x26b40010  addiu       $s4, $s5, 0x10
    ctx->pc = 0x3b0e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x3b0e9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b0e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b0ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b0ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b0ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b0ea8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3b0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3b0eac: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x3b0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x3b0eb0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3b0eb4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3b0eb8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x3B0EB8u;
    SET_GPR_U32(ctx, 31, 0x3B0EC0u);
    ctx->pc = 0x3B0EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0EB8u;
            // 0x3b0ebc: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0EC0u; }
        if (ctx->pc != 0x3B0EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B0EC0u; }
        if (ctx->pc != 0x3B0EC0u) { return; }
    }
    ctx->pc = 0x3B0EC0u;
label_3b0ec0:
    // 0x3b0ec0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b0ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0ec8: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x3b0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x3b0ecc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3b0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x3b0ed0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b0ed4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x3b0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x3b0ed8: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x3b0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x3b0edc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b0ee0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3b0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3b0ee4: 0x8c850094  lw          $a1, 0x94($a0)
    ctx->pc = 0x3b0ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x3b0ee8: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x3b0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x3b0eec: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3b0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3b0ef0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b0ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3b0ef4: 0xae840014  sw          $a0, 0x14($s4)
    ctx->pc = 0x3b0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 4));
    // 0x3b0ef8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b0efc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3b0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3b0f00: 0x90850090  lbu         $a1, 0x90($a0)
    ctx->pc = 0x3b0f00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x3b0f04: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x3b0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3b0f08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b0f0c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3b0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b0f10: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3b0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x3b0f14: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b0f18: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x3b0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b0f1c: 0x5083003e  beql        $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3B0F1Cu;
    {
        const bool branch_taken_0x3b0f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b0f1c) {
            ctx->pc = 0x3B0F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0F1Cu;
            // 0x3b0f20: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1018u;
            goto label_3b1018;
        }
    }
    ctx->pc = 0x3B0F24u;
    // 0x3b0f24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b0f28: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3B0F28u;
    {
        const bool branch_taken_0x3b0f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b0f28) {
            ctx->pc = 0x3B1014u;
            goto label_3b1014;
        }
    }
    ctx->pc = 0x3B0F30u;
    // 0x3b0f30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b0f34: 0x5082001d  beql        $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B0F34u;
    {
        const bool branch_taken_0x3b0f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b0f34) {
            ctx->pc = 0x3B0F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0F34u;
            // 0x3b0f38: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0FACu;
            goto label_3b0fac;
        }
    }
    ctx->pc = 0x3B0F3Cu;
    // 0x3b0f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0f40: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0F40u;
    {
        const bool branch_taken_0x3b0f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b0f40) {
            ctx->pc = 0x3B0F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0F40u;
            // 0x3b0f44: 0x3c0242b4  lui         $v0, 0x42B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B0F50u;
            goto label_3b0f50;
        }
    }
    ctx->pc = 0x3B0F48u;
    // 0x3b0f48: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3B0F48u;
    {
        const bool branch_taken_0x3b0f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0F48u;
            // 0x3b0f4c: 0xa2a00370  sb          $zero, 0x370($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 880), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f48) {
            ctx->pc = 0x3B108Cu;
            goto label_3b108c;
        }
    }
    ctx->pc = 0x3B0F50u;
label_3b0f50:
    // 0x3b0f50: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3b0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3b0f54: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x3b0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x3b0f58: 0x24637e10  addiu       $v1, $v1, 0x7E10
    ctx->pc = 0x3b0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32272));
    // 0x3b0f5c: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3b0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3b0f60: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3b0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3b0f64: 0xa2820070  sb          $v0, 0x70($s4)
    ctx->pc = 0x3b0f64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0f68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3b0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b0f6c: 0xa2830071  sb          $v1, 0x71($s4)
    ctx->pc = 0x3b0f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0f70: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3b0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3b0f74: 0xa2820072  sb          $v0, 0x72($s4)
    ctx->pc = 0x3b0f74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0f78: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3b0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0f7c: 0xa2830073  sb          $v1, 0x73($s4)
    ctx->pc = 0x3b0f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0f80: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3b0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b0f84: 0xa2820074  sb          $v0, 0x74($s4)
    ctx->pc = 0x3b0f84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0f88: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b0f8c: 0xa2830075  sb          $v1, 0x75($s4)
    ctx->pc = 0x3b0f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0f90: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x3b0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3b0f94: 0xa2820076  sb          $v0, 0x76($s4)
    ctx->pc = 0x3b0f94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0f98: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x3b0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3b0f9c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3b0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3b0fa0: 0xa2830077  sb          $v1, 0x77($s4)
    ctx->pc = 0x3b0fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0fa4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3B0FA4u;
    {
        const bool branch_taken_0x3b0fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0FA4u;
            // 0x3b0fa8: 0xa2820078  sb          $v0, 0x78($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0fa4) {
            ctx->pc = 0x3B108Cu;
            goto label_3b108c;
        }
    }
    ctx->pc = 0x3B0FACu;
label_3b0fac:
    // 0x3b0fac: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3b0facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3b0fb0: 0x3c0542aa  lui         $a1, 0x42AA
    ctx->pc = 0x3b0fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17066 << 16));
    // 0x3b0fb4: 0x24847e80  addiu       $a0, $a0, 0x7E80
    ctx->pc = 0x3b0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32384));
    // 0x3b0fb8: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3b0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3b0fbc: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x3b0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3b0fc0: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x3b0fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x3b0fc4: 0x2408004e  addiu       $t0, $zero, 0x4E
    ctx->pc = 0x3b0fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3b0fc8: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x3b0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
    // 0x3b0fcc: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x3b0fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3b0fd0: 0xae85001c  sw          $a1, 0x1C($s4)
    ctx->pc = 0x3b0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 5));
    // 0x3b0fd4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3b0fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3b0fd8: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x3b0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    // 0x3b0fdc: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x3b0fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3b0fe0: 0xa2830070  sb          $v1, 0x70($s4)
    ctx->pc = 0x3b0fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0fe4: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x3b0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3b0fe8: 0xa2820071  sb          $v0, 0x71($s4)
    ctx->pc = 0x3b0fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0fec: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3b0fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3b0ff0: 0xa2880072  sb          $t0, 0x72($s4)
    ctx->pc = 0x3b0ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 8));
    // 0x3b0ff4: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x3b0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3b0ff8: 0xa2870073  sb          $a3, 0x73($s4)
    ctx->pc = 0x3b0ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 115), (uint8_t)GPR_U32(ctx, 7));
    // 0x3b0ffc: 0xa2860074  sb          $a2, 0x74($s4)
    ctx->pc = 0x3b0ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 6));
    // 0x3b1000: 0xa2850075  sb          $a1, 0x75($s4)
    ctx->pc = 0x3b1000u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 117), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b1004: 0xa2840076  sb          $a0, 0x76($s4)
    ctx->pc = 0x3b1004u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 118), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b1008: 0xa2830077  sb          $v1, 0x77($s4)
    ctx->pc = 0x3b1008u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b100c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3B100Cu;
    {
        const bool branch_taken_0x3b100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B100Cu;
            // 0x3b1010: 0xa2820078  sb          $v0, 0x78($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b100c) {
            ctx->pc = 0x3B108Cu;
            goto label_3b108c;
        }
    }
    ctx->pc = 0x3B1014u;
label_3b1014:
    // 0x3b1014: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x3b1014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3b1018:
    // 0x3b1018: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3b1018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3b101c: 0x3c0542aa  lui         $a1, 0x42AA
    ctx->pc = 0x3b101cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17066 << 16));
    // 0x3b1020: 0x24847ef0  addiu       $a0, $a0, 0x7EF0
    ctx->pc = 0x3b1020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
    // 0x3b1024: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3b1024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3b1028: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x3b1028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3b102c: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3b102cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x3b1030: 0x2408004e  addiu       $t0, $zero, 0x4E
    ctx->pc = 0x3b1030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3b1034: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x3b1034u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
    // 0x3b1038: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x3b1038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3b103c: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x3b103cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x3b1040: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x3b1040u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
    // 0x3b1044: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x3b1044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x3b1048: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x3b1048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
    // 0x3b104c: 0xae85001c  sw          $a1, 0x1C($s4)
    ctx->pc = 0x3b104cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 5));
    // 0x3b1050: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3b1050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3b1054: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x3b1054u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    // 0x3b1058: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x3b1058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3b105c: 0xa2830070  sb          $v1, 0x70($s4)
    ctx->pc = 0x3b105cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b1060: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x3b1060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3b1064: 0xa2820071  sb          $v0, 0x71($s4)
    ctx->pc = 0x3b1064u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b1068: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3b1068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3b106c: 0xa2880072  sb          $t0, 0x72($s4)
    ctx->pc = 0x3b106cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 8));
    // 0x3b1070: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x3b1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3b1074: 0xa2870073  sb          $a3, 0x73($s4)
    ctx->pc = 0x3b1074u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 115), (uint8_t)GPR_U32(ctx, 7));
    // 0x3b1078: 0xa2860074  sb          $a2, 0x74($s4)
    ctx->pc = 0x3b1078u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 6));
    // 0x3b107c: 0xa2850075  sb          $a1, 0x75($s4)
    ctx->pc = 0x3b107cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 117), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b1080: 0xa2840076  sb          $a0, 0x76($s4)
    ctx->pc = 0x3b1080u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 118), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b1084: 0xa2830077  sb          $v1, 0x77($s4)
    ctx->pc = 0x3b1084u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b1088: 0xa2820078  sb          $v0, 0x78($s4)
    ctx->pc = 0x3b1088u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 120), (uint8_t)GPR_U32(ctx, 2));
label_3b108c:
    // 0x3b108c: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x3b108cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3b1090: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3b1090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3b1094: 0x3c1e00af  lui         $fp, 0xAF
    ctx->pc = 0x3b1094u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)175 << 16));
    // 0x3b1098: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3b1098u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b109c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b109cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b10a0: 0x27de0e80  addiu       $fp, $fp, 0xE80
    ctx->pc = 0x3b10a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 3712));
    // 0x3b10a4: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x3b10a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b10a8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3b10a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b10ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b10acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b10b0: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x3b10b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_3b10b4:
    // 0x3b10b4: 0x8fd30004  lw          $s3, 0x4($fp)
    ctx->pc = 0x3b10b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3b10b8: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x3b10b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3b10bc: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x3b10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3b10c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b10c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b10c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b10c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b10c8: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x3b10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x3b10cc: 0xa220009c  sb          $zero, 0x9C($s1)
    ctx->pc = 0x3b10ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b10d0: 0xa220009d  sb          $zero, 0x9D($s1)
    ctx->pc = 0x3b10d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b10d4: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x3b10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x3b10d8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B10D8u;
    SET_GPR_U32(ctx, 31, 0x3B10E0u);
    ctx->pc = 0x3B10DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B10D8u;
            // 0x3b10dc: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B10E0u; }
        if (ctx->pc != 0x3B10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B10E0u; }
        if (ctx->pc != 0x3B10E0u) { return; }
    }
    ctx->pc = 0x3B10E0u;
label_3b10e0:
    // 0x3b10e0: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x3b10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x3b10e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b10e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b10e8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B10E8u;
    SET_GPR_U32(ctx, 31, 0x3B10F0u);
    ctx->pc = 0x3B10ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B10E8u;
            // 0x3b10ec: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B10F0u; }
        if (ctx->pc != 0x3B10F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B10F0u; }
        if (ctx->pc != 0x3B10F0u) { return; }
    }
    ctx->pc = 0x3B10F0u;
label_3b10f0:
    // 0x3b10f0: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x3b10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x3b10f4: 0x26640440  addiu       $a0, $s3, 0x440
    ctx->pc = 0x3b10f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
    // 0x3b10f8: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x3b10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x3b10fc: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3B10FCu;
    SET_GPR_U32(ctx, 31, 0x3B1104u);
    ctx->pc = 0x3B1100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B10FCu;
            // 0x3b1100: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1104u; }
        if (ctx->pc != 0x3B1104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1104u; }
        if (ctx->pc != 0x3B1104u) { return; }
    }
    ctx->pc = 0x3B1104u;
label_3b1104:
    // 0x3b1104: 0x84420050  lh          $v0, 0x50($v0)
    ctx->pc = 0x3b1104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x3b1108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b1108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b110c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3b110cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1110: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3b1110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x3b1114: 0x0  nop
    ctx->pc = 0x3b1114u;
    // NOP
label_3b1118:
    // 0x3b1118: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x3b1118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x3b111c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x3b111cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x3b1120: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b1124: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x3b1124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x3b1128: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3b1128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b112c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x3b112cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x3b1130: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x3b1130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x3b1134: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x3b1134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x3b1138: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B1138u;
    {
        const bool branch_taken_0x3b1138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B113Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1138u;
            // 0x3b113c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1138) {
            ctx->pc = 0x3B1118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b1118;
        }
    }
    ctx->pc = 0x3B1140u;
    // 0x3b1140: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x3b1140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x3b1144: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x3B1144u;
    {
        const bool branch_taken_0x3b1144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1144) {
            ctx->pc = 0x3B1338u;
            goto label_3b1338;
        }
    }
    ctx->pc = 0x3B114Cu;
    // 0x3b114c: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x3b114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x3b1150: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x3B1150u;
    {
        const bool branch_taken_0x3b1150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1150) {
            ctx->pc = 0x3B1338u;
            goto label_3b1338;
        }
    }
    ctx->pc = 0x3B1158u;
    // 0x3b1158: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b1158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b115c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b1160: 0x8e97000c  lw          $s7, 0xC($s4)
    ctx->pc = 0x3b1160u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3b1164: 0x8e930010  lw          $s3, 0x10($s4)
    ctx->pc = 0x3b1164u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3b1168: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x3b1168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x3b116c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B116Cu;
    {
        const bool branch_taken_0x3b116c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B116Cu;
            // 0x3b1170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b116c) {
            ctx->pc = 0x3B11B0u;
            goto label_3b11b0;
        }
    }
    ctx->pc = 0x3B1174u;
    // 0x3b1174: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b1174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1178: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B1178u;
    {
        const bool branch_taken_0x3b1178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1178) {
            ctx->pc = 0x3B11B0u;
            goto label_3b11b0;
        }
    }
    ctx->pc = 0x3B1180u;
    // 0x3b1180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b1180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b1184: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1184u;
    {
        const bool branch_taken_0x3b1184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1184) {
            ctx->pc = 0x3B1198u;
            goto label_3b1198;
        }
    }
    ctx->pc = 0x3B118Cu;
    // 0x3b118c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B118Cu;
    {
        const bool branch_taken_0x3b118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b118c) {
            ctx->pc = 0x3B11E0u;
            goto label_3b11e0;
        }
    }
    ctx->pc = 0x3B1194u;
    // 0x3b1194: 0x0  nop
    ctx->pc = 0x3b1194u;
    // NOP
label_3b1198:
    // 0x3b1198: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x3b1198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x3b119c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B119Cu;
    {
        const bool branch_taken_0x3b119c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b119c) {
            ctx->pc = 0x3B11E0u;
            goto label_3b11e0;
        }
    }
    ctx->pc = 0x3B11A4u;
    // 0x3b11a4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x3b11a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B11A8u;
    {
        const bool branch_taken_0x3b11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B11A8u;
            // 0x3b11ac: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11a8) {
            ctx->pc = 0x3B11E0u;
            goto label_3b11e0;
        }
    }
    ctx->pc = 0x3B11B0u;
label_3b11b0:
    // 0x3b11b0: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x3b11b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x3b11b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B11B4u;
    {
        const bool branch_taken_0x3b11b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b11b4) {
            ctx->pc = 0x3B11C8u;
            goto label_3b11c8;
        }
    }
    ctx->pc = 0x3B11BCu;
    // 0x3b11bc: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3b11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3b11c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b11c4: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x3b11c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_3b11c8:
    // 0x3b11c8: 0x32c30002  andi        $v1, $s6, 0x2
    ctx->pc = 0x3b11c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x3b11cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B11CCu;
    {
        const bool branch_taken_0x3b11cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b11cc) {
            ctx->pc = 0x3B11E0u;
            goto label_3b11e0;
        }
    }
    ctx->pc = 0x3B11D4u;
    // 0x3b11d4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3b11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x3b11d8: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x3b11d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3b11dc: 0x0  nop
    ctx->pc = 0x3b11dcu;
    // NOP
label_3b11e0:
    // 0x3b11e0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b11e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b11e4: 0xa6570004  sh          $s7, 0x4($s2)
    ctx->pc = 0x3b11e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x3b11e8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3b11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b11ec: 0xa6530006  sh          $s3, 0x6($s2)
    ctx->pc = 0x3b11ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x3b11f0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3b11f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b11f4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b11f8: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x3b11f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x3b11fc: 0xa6430090  sh          $v1, 0x90($s2)
    ctx->pc = 0x3b11fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1200: 0xa643008c  sh          $v1, 0x8C($s2)
    ctx->pc = 0x3b1200u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 140), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1204: 0x8205004f  lb          $a1, 0x4F($s0)
    ctx->pc = 0x3b1204u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x3b1208: 0x92030051  lbu         $v1, 0x51($s0)
    ctx->pc = 0x3b1208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x3b120c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b120cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b1210: 0xa643008e  sh          $v1, 0x8E($s2)
    ctx->pc = 0x3b1210u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1214: 0x8203004f  lb          $v1, 0x4F($s0)
    ctx->pc = 0x3b1214u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x3b1218: 0xa6430092  sh          $v1, 0x92($s2)
    ctx->pc = 0x3b1218u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b121c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x3b121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1220: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x3b1220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x3b1224: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x3b1224u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3b1228: 0x70431818  mult1       $v1, $v0, $v1
    ctx->pc = 0x3b1228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b122c: 0xa643009c  sh          $v1, 0x9C($s2)
    ctx->pc = 0x3b122cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 156), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1230: 0xa6430098  sh          $v1, 0x98($s2)
    ctx->pc = 0x3b1230u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1234: 0x8205004f  lb          $a1, 0x4F($s0)
    ctx->pc = 0x3b1234u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x3b1238: 0x92030051  lbu         $v1, 0x51($s0)
    ctx->pc = 0x3b1238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x3b123c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b123cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b1240: 0xa643009a  sh          $v1, 0x9A($s2)
    ctx->pc = 0x3b1240u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1244: 0x8203004f  lb          $v1, 0x4F($s0)
    ctx->pc = 0x3b1244u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x3b1248: 0xa643009e  sh          $v1, 0x9E($s2)
    ctx->pc = 0x3b1248u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 158), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b124c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x3b124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1250: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x3b1250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x3b1254: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x3b1254u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x3b1258: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x3b1258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b125c: 0xa64300a8  sh          $v1, 0xA8($s2)
    ctx->pc = 0x3b125cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1260: 0xa64300a4  sh          $v1, 0xA4($s2)
    ctx->pc = 0x3b1260u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1264: 0x82050050  lb          $a1, 0x50($s0)
    ctx->pc = 0x3b1264u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3b1268: 0x92030051  lbu         $v1, 0x51($s0)
    ctx->pc = 0x3b1268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x3b126c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b1270: 0xa64300a6  sh          $v1, 0xA6($s2)
    ctx->pc = 0x3b1270u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 166), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1274: 0x82030050  lb          $v1, 0x50($s0)
    ctx->pc = 0x3b1274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3b1278: 0xa64300aa  sh          $v1, 0xAA($s2)
    ctx->pc = 0x3b1278u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b127c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x3b127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b1280: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x3b1280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x3b1284: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x3b1284u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x3b1288: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x3b1288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b128c: 0xa64200b4  sh          $v0, 0xB4($s2)
    ctx->pc = 0x3b128cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 180), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b1290: 0xa64200b0  sh          $v0, 0xB0($s2)
    ctx->pc = 0x3b1290u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b1294: 0x82030050  lb          $v1, 0x50($s0)
    ctx->pc = 0x3b1294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3b1298: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x3b1298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x3b129c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b12a0: 0xa64200b2  sh          $v0, 0xB2($s2)
    ctx->pc = 0x3b12a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 178), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b12a4: 0x82020050  lb          $v0, 0x50($s0)
    ctx->pc = 0x3b12a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3b12a8: 0xc040180  jal         func_100600
    ctx->pc = 0x3B12A8u;
    SET_GPR_U32(ctx, 31, 0x3B12B0u);
    ctx->pc = 0x3B12ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B12A8u;
            // 0x3b12ac: 0xa64200b6  sh          $v0, 0xB6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B12B0u; }
        if (ctx->pc != 0x3B12B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B12B0u; }
        if (ctx->pc != 0x3B12B0u) { return; }
    }
    ctx->pc = 0x3B12B0u;
label_3b12b0:
    // 0x3b12b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B12B0u;
    {
        const bool branch_taken_0x3b12b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b12b0) {
            ctx->pc = 0x3B12E0u;
            goto label_3b12e0;
        }
    }
    ctx->pc = 0x3B12B8u;
    // 0x3b12b8: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x3b12b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b12bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3b12bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b12c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b12c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b12c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b12c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b12c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b12c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b12cc: 0x26470074  addiu       $a3, $s2, 0x74
    ctx->pc = 0x3b12ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x3b12d0: 0x26480088  addiu       $t0, $s2, 0x88
    ctx->pc = 0x3b12d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x3b12d4: 0xc1109e0  jal         func_442780
    ctx->pc = 0x3B12D4u;
    SET_GPR_U32(ctx, 31, 0x3B12DCu);
    ctx->pc = 0x3B12D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B12D4u;
            // 0x3b12d8: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B12DCu; }
        if (ctx->pc != 0x3B12DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B12DCu; }
        if (ctx->pc != 0x3B12DCu) { return; }
    }
    ctx->pc = 0x3B12DCu;
label_3b12dc:
    // 0x3b12dc: 0x0  nop
    ctx->pc = 0x3b12dcu;
    // NOP
label_3b12e0:
    // 0x3b12e0: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x3b12e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x3b12e4: 0xc040180  jal         func_100600
    ctx->pc = 0x3B12E4u;
    SET_GPR_U32(ctx, 31, 0x3B12ECu);
    ctx->pc = 0x3B12E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B12E4u;
            // 0x3b12e8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B12ECu; }
        if (ctx->pc != 0x3B12ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B12ECu; }
        if (ctx->pc != 0x3B12ECu) { return; }
    }
    ctx->pc = 0x3B12ECu;
label_3b12ec:
    // 0x3b12ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b12ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b12f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B12F0u;
    {
        const bool branch_taken_0x3b12f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b12f0) {
            ctx->pc = 0x3B1320u;
            goto label_3b1320;
        }
    }
    ctx->pc = 0x3B12F8u;
    // 0x3b12f8: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x3b12f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b12fc: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x3b12fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b1300: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b1300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1304: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b1304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1308: 0x26470078  addiu       $a3, $s2, 0x78
    ctx->pc = 0x3b1308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x3b130c: 0x26480088  addiu       $t0, $s2, 0x88
    ctx->pc = 0x3b130cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x3b1310: 0xc1109e0  jal         func_442780
    ctx->pc = 0x3B1310u;
    SET_GPR_U32(ctx, 31, 0x3B1318u);
    ctx->pc = 0x3B1314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1310u;
            // 0x3b1314: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1318u; }
        if (ctx->pc != 0x3B1318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1318u; }
        if (ctx->pc != 0x3B1318u) { return; }
    }
    ctx->pc = 0x3B1318u;
label_3b1318:
    // 0x3b1318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b1318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b131c: 0x0  nop
    ctx->pc = 0x3b131cu;
    // NOP
label_3b1320:
    // 0x3b1320: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x3b1320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
    // 0x3b1324: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3b1324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b1328: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3b132c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B132Cu;
    {
        const bool branch_taken_0x3b132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B132Cu;
            // 0x3b1330: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b132c) {
            ctx->pc = 0x3B1368u;
            goto label_3b1368;
        }
    }
    ctx->pc = 0x3B1334u;
    // 0x3b1334: 0x0  nop
    ctx->pc = 0x3b1334u;
    // NOP
label_3b1338:
    // 0x3b1338: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b133c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x3b133cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b1340: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b1340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3b1344: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3b1344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3b1348: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x3b1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x3b134c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b1350: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b1350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3b1354: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3b1354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3b1358: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B1358u;
    SET_GPR_U32(ctx, 31, 0x3B1360u);
    ctx->pc = 0x3B135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1358u;
            // 0x3b135c: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1360u; }
        if (ctx->pc != 0x3B1360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1360u; }
        if (ctx->pc != 0x3B1360u) { return; }
    }
    ctx->pc = 0x3B1360u;
label_3b1360:
    // 0x3b1360: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B1360u;
    SET_GPR_U32(ctx, 31, 0x3B1368u);
    ctx->pc = 0x3B1364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1360u;
            // 0x3b1364: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1368u; }
        if (ctx->pc != 0x3B1368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1368u; }
        if (ctx->pc != 0x3B1368u) { return; }
    }
    ctx->pc = 0x3B1368u;
label_3b1368:
    // 0x3b1368: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3b1368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b136c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b136cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3b1370: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x3b1370u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x3b1374: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3b1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3b1378: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x3b1378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b137c: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x3B137Cu;
    {
        const bool branch_taken_0x3b137c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B137Cu;
            // 0x3b1380: 0x263100b8  addiu       $s1, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b137c) {
            ctx->pc = 0x3B10B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b10b4;
        }
    }
    ctx->pc = 0x3B1384u;
    // 0x3b1384: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b1384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b1388: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3b1388u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b138c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b138cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b1390: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b1390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b1394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b1394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b1398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b1398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b139c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b139cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b13a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b13a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b13a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b13a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b13a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b13a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b13ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B13ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B13B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B13ACu;
            // 0x3b13b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B13B4u;
    // 0x3b13b4: 0x0  nop
    ctx->pc = 0x3b13b4u;
    // NOP
    // 0x3b13b8: 0x0  nop
    ctx->pc = 0x3b13b8u;
    // NOP
    // 0x3b13bc: 0x0  nop
    ctx->pc = 0x3b13bcu;
    // NOP
}
