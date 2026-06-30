#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002989E0
// Address: 0x2989e0 - 0x298cc0
void sub_002989E0_0x2989e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002989E0_0x2989e0");
#endif

    switch (ctx->pc) {
        case 0x298b7cu: goto label_298b7c;
        case 0x298bf8u: goto label_298bf8;
        default: break;
    }

    ctx->pc = 0x2989e0u;

    // 0x2989e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2989e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2989e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2989e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2989e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2989ec: 0x27a9013c  addiu       $t1, $sp, 0x13C
    ctx->pc = 0x2989ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x2989f0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2989f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2989f4: 0x27a80138  addiu       $t0, $sp, 0x138
    ctx->pc = 0x2989f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2989f8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2989f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2989fc: 0x27be00c4  addiu       $fp, $sp, 0xC4
    ctx->pc = 0x2989fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x298a00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x298a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x298a04: 0x27b700c8  addiu       $s7, $sp, 0xC8
    ctx->pc = 0x298a04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x298a08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x298a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x298a0c: 0x27b600cc  addiu       $s6, $sp, 0xCC
    ctx->pc = 0x298a0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x298a10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x298a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x298a14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x298a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x298a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x298a1c: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x298a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x298a20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x298a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x298a24: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x298a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x298a28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x298a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x298a2c: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x298a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x298a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x298a34: 0x27b100b4  addiu       $s1, $sp, 0xB4
    ctx->pc = 0x298a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x298a38: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x298a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x298a3c: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x298a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x298a40: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x298a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x298a44: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x298a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x298a48: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x298a48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x298a4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x298a4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x298a50: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x298a50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x298a54: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x298a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x298a58: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x298a58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x298a5c: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x298a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x298a60: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x298a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x298a64: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x298a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x298a68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x298a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x298a6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x298a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x298a70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x298a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x298a74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x298a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x298a78: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x298a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x298a7c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x298a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x298a80: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x298a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x298a84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x298a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x298a88: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x298a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x298a8c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x298a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x298a90: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x298a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x298a94: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x298a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x298a98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x298a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x298a9c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x298a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x298aa0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x298aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x298aa4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x298aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x298aa8: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x298aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x298aac: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x298aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x298ab0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x298ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x298ab4: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x298ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x298ab8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x298ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x298abc: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x298abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x298ac0: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x298ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x298ac4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x298ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x298ac8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x298ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x298acc: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x298accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x298ad0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x298ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x298ad4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x298ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x298ad8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x298ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x298adc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x298adcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x298ae0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x298ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x298ae4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x298ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x298ae8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x298ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x298aec: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x298aecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x298af0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x298af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x298af4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x298af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x298af8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x298af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x298afc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x298afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x298b00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x298b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x298b04: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x298b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x298b08: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x298b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x298b0c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x298b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x298b10: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x298b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x298b14: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x298b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x298b18: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x298b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x298b1c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x298b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x298b20: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x298b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x298b24: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x298b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x298b28: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x298b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x298b2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x298b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x298b30: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x298b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x298b34: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x298b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x298b38: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x298b38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x298b3c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x298b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x298b40: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x298b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x298b44: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x298b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x298b48: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x298b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x298b4c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x298b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x298b50: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x298b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x298b54: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x298b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x298b58: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x298b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x298b5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x298b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x298b60: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x298b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x298b64: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x298b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x298b68: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x298b68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x298b6c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x298b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x298b70: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x298b70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x298b74: 0xc0a6330  jal         func_298CC0
    ctx->pc = 0x298B74u;
    SET_GPR_U32(ctx, 31, 0x298B7Cu);
    ctx->pc = 0x298B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298B74u;
            // 0x298b78: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298CC0u;
    if (runtime->hasFunction(0x298CC0u)) {
        auto targetFn = runtime->lookupFunction(0x298CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B7Cu; }
        if (ctx->pc != 0x298B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298CC0_0x298cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298B7Cu; }
        if (ctx->pc != 0x298B7Cu) { return; }
    }
    ctx->pc = 0x298B7Cu;
label_298b7c:
    // 0x298b7c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x298b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298b84: 0x0  nop
    ctx->pc = 0x298b84u;
    // NOP
    // 0x298b88: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x298b88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298b8c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x298B8Cu;
    {
        const bool branch_taken_0x298b8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298b8c) {
            ctx->pc = 0x298BE0u;
            goto label_298be0;
        }
    }
    ctx->pc = 0x298B94u;
    // 0x298b94: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x298b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x298b98: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x298b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x298b9c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x298b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x298ba0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x298ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x298ba4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x298ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x298ba8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x298ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x298bac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x298bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x298bb0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x298bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x298bb4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x298bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x298bb8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x298bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x298bbc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x298bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x298bc0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x298bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x298bc4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x298bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x298bc8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x298bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x298bcc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x298bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x298bd0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x298bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x298bd4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x298bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x298bd8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x298BD8u;
    {
        const bool branch_taken_0x298bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298BD8u;
            // 0x298bdc: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bd8) {
            ctx->pc = 0x298C88u;
            goto label_298c88;
        }
    }
    ctx->pc = 0x298BE0u;
label_298be0:
    // 0x298be0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x298be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x298be4: 0x4601a303  div.s       $f12, $f20, $f1
    ctx->pc = 0x298be4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[1];
    // 0x298be8: 0x0  nop
    ctx->pc = 0x298be8u;
    // NOP
    // 0x298bec: 0x0  nop
    ctx->pc = 0x298becu;
    // NOP
    // 0x298bf0: 0xc0a66c4  jal         func_299B10
    ctx->pc = 0x298BF0u;
    SET_GPR_U32(ctx, 31, 0x298BF8u);
    ctx->pc = 0x299B10u;
    if (runtime->hasFunction(0x299B10u)) {
        auto targetFn = runtime->lookupFunction(0x299B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298BF8u; }
        if (ctx->pc != 0x298BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299B10_0x299b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298BF8u; }
        if (ctx->pc != 0x298BF8u) { return; }
    }
    ctx->pc = 0x298BF8u;
label_298bf8:
    // 0x298bf8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x298bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298bfc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x298bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c00: 0xe6a00090  swc1        $f0, 0x90($s5)
    ctx->pc = 0x298c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
    // 0x298c04: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x298c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c08: 0xe6a00080  swc1        $f0, 0x80($s5)
    ctx->pc = 0x298c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 128), bits); }
    // 0x298c0c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x298c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c10: 0xe6a00084  swc1        $f0, 0x84($s5)
    ctx->pc = 0x298c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
    // 0x298c14: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x298c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c18: 0xe6a00088  swc1        $f0, 0x88($s5)
    ctx->pc = 0x298c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
    // 0x298c1c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x298c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c20: 0xe6a0008c  swc1        $f0, 0x8C($s5)
    ctx->pc = 0x298c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
    // 0x298c24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x298c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c28: 0xe6a00050  swc1        $f0, 0x50($s5)
    ctx->pc = 0x298c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 80), bits); }
    // 0x298c2c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x298c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c30: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x298c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x298c34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x298c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c38: 0xe6a00058  swc1        $f0, 0x58($s5)
    ctx->pc = 0x298c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x298c3c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x298c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c40: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x298c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x298c44: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x298c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c48: 0xe6a00060  swc1        $f0, 0x60($s5)
    ctx->pc = 0x298c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
    // 0x298c4c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x298c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c50: 0xe6a00064  swc1        $f0, 0x64($s5)
    ctx->pc = 0x298c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x298c54: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x298c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c58: 0xe6a00068  swc1        $f0, 0x68($s5)
    ctx->pc = 0x298c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x298c5c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x298c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c60: 0xe6a0006c  swc1        $f0, 0x6C($s5)
    ctx->pc = 0x298c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x298c64: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x298c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c68: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x298c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x298c6c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x298c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c70: 0xe6a00074  swc1        $f0, 0x74($s5)
    ctx->pc = 0x298c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    // 0x298c74: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x298c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c78: 0xe6a00078  swc1        $f0, 0x78($s5)
    ctx->pc = 0x298c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
    // 0x298c7c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x298c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c80: 0xe6a0007c  swc1        $f0, 0x7C($s5)
    ctx->pc = 0x298c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
    // 0x298c84: 0x0  nop
    ctx->pc = 0x298c84u;
    // NOP
label_298c88:
    // 0x298c88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x298c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298c8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x298c8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298c90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x298c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298c94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x298c94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298c98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x298c98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298c9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x298c9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298ca0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x298ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298ca4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x298ca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298ca8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x298ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298cac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x298cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298cb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x298cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x298CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298CB4u;
            // 0x298cb8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298CBCu;
    // 0x298cbc: 0x0  nop
    ctx->pc = 0x298cbcu;
    // NOP
}
