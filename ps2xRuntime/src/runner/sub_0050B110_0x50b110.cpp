#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B110
// Address: 0x50b110 - 0x50b1d0
void sub_0050B110_0x50b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B110_0x50b110");
#endif

    switch (ctx->pc) {
        case 0x50b110u: goto label_50b110;
        case 0x50b114u: goto label_50b114;
        case 0x50b118u: goto label_50b118;
        case 0x50b11cu: goto label_50b11c;
        case 0x50b120u: goto label_50b120;
        case 0x50b124u: goto label_50b124;
        case 0x50b128u: goto label_50b128;
        case 0x50b12cu: goto label_50b12c;
        case 0x50b130u: goto label_50b130;
        case 0x50b134u: goto label_50b134;
        case 0x50b138u: goto label_50b138;
        case 0x50b13cu: goto label_50b13c;
        case 0x50b140u: goto label_50b140;
        case 0x50b144u: goto label_50b144;
        case 0x50b148u: goto label_50b148;
        case 0x50b14cu: goto label_50b14c;
        case 0x50b150u: goto label_50b150;
        case 0x50b154u: goto label_50b154;
        case 0x50b158u: goto label_50b158;
        case 0x50b15cu: goto label_50b15c;
        case 0x50b160u: goto label_50b160;
        case 0x50b164u: goto label_50b164;
        case 0x50b168u: goto label_50b168;
        case 0x50b16cu: goto label_50b16c;
        case 0x50b170u: goto label_50b170;
        case 0x50b174u: goto label_50b174;
        case 0x50b178u: goto label_50b178;
        case 0x50b17cu: goto label_50b17c;
        case 0x50b180u: goto label_50b180;
        case 0x50b184u: goto label_50b184;
        case 0x50b188u: goto label_50b188;
        case 0x50b18cu: goto label_50b18c;
        case 0x50b190u: goto label_50b190;
        case 0x50b194u: goto label_50b194;
        case 0x50b198u: goto label_50b198;
        case 0x50b19cu: goto label_50b19c;
        case 0x50b1a0u: goto label_50b1a0;
        case 0x50b1a4u: goto label_50b1a4;
        case 0x50b1a8u: goto label_50b1a8;
        case 0x50b1acu: goto label_50b1ac;
        case 0x50b1b0u: goto label_50b1b0;
        case 0x50b1b4u: goto label_50b1b4;
        case 0x50b1b8u: goto label_50b1b8;
        case 0x50b1bcu: goto label_50b1bc;
        case 0x50b1c0u: goto label_50b1c0;
        case 0x50b1c4u: goto label_50b1c4;
        case 0x50b1c8u: goto label_50b1c8;
        case 0x50b1ccu: goto label_50b1cc;
        default: break;
    }

    ctx->pc = 0x50b110u;

label_50b110:
    // 0x50b110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50b114:
    // 0x50b114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50b118:
    // 0x50b118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50b11c:
    // 0x50b11c: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x50b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_50b120:
    // 0x50b120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50b124:
    // 0x50b124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50b124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50b128:
    // 0x50b128: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x50b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_50b12c:
    // 0x50b12c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x50b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50b130:
    // 0x50b130: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50b130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50b134:
    // 0x50b134: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x50b134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_50b138:
    // 0x50b138: 0x320f809  jalr        $t9
label_50b13c:
    if (ctx->pc == 0x50B13Cu) {
        ctx->pc = 0x50B13Cu;
            // 0x50b13c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x50B140u;
        goto label_50b140;
    }
    ctx->pc = 0x50B138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50B140u);
        ctx->pc = 0x50B13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B138u;
            // 0x50b13c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50B140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50B140u; }
            if (ctx->pc != 0x50B140u) { return; }
        }
        }
    }
    ctx->pc = 0x50B140u;
label_50b140:
    // 0x50b140: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x50b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_50b144:
    // 0x50b144: 0x8ca40550  lw          $a0, 0x550($a1)
    ctx->pc = 0x50b144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_50b148:
    // 0x50b148: 0x8ca30d6c  lw          $v1, 0xD6C($a1)
    ctx->pc = 0x50b148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_50b14c:
    // 0x50b14c: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x50b14cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_50b150:
    // 0x50b150: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x50b150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_50b154:
    // 0x50b154: 0x3884003a  xori        $a0, $a0, 0x3A
    ctx->pc = 0x50b154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)58);
label_50b158:
    // 0x50b158: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x50b158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_50b15c:
    // 0x50b15c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x50b15cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50b160:
    // 0x50b160: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50b160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50b164:
    // 0x50b164: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x50b164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_50b168:
    // 0x50b168: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_50b16c:
    if (ctx->pc == 0x50B16Cu) {
        ctx->pc = 0x50B16Cu;
            // 0x50b16c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x50B170u;
        goto label_50b170;
    }
    ctx->pc = 0x50B168u;
    {
        const bool branch_taken_0x50b168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b168) {
            ctx->pc = 0x50B16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B168u;
            // 0x50b16c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B1C4u;
            goto label_50b1c4;
        }
    }
    ctx->pc = 0x50B170u;
label_50b170:
    // 0x50b170: 0xc4a30dbc  lwc1        $f3, 0xDBC($a1)
    ctx->pc = 0x50b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50b174:
    // 0x50b174: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50b174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_50b178:
    // 0x50b178: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x50b178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_50b17c:
    // 0x50b17c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x50b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_50b180:
    // 0x50b180: 0x24c6f7d0  addiu       $a2, $a2, -0x830
    ctx->pc = 0x50b180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965200));
label_50b184:
    // 0x50b184: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x50b184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50b188:
    // 0x50b188: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x50b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50b18c:
    // 0x50b18c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x50b18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50b190:
    // 0x50b190: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x50b190u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50b194:
    // 0x50b194: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x50b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_50b198:
    // 0x50b198: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x50b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_50b19c:
    // 0x50b19c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x50b19cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_50b1a0:
    // 0x50b1a0: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x50b1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_50b1a4:
    // 0x50b1a4: 0x4600109c  madd.s      $f2, $f2, $f0
    ctx->pc = 0x50b1a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_50b1a8:
    // 0x50b1a8: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x50b1a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_50b1ac:
    // 0x50b1ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x50b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50b1b0:
    // 0x50b1b0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x50b1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50b1b4:
    // 0x50b1b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_50b1b8:
    if (ctx->pc == 0x50B1B8u) {
        ctx->pc = 0x50B1BCu;
        goto label_50b1bc;
    }
    ctx->pc = 0x50B1B4u;
    {
        const bool branch_taken_0x50b1b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50b1b4) {
            ctx->pc = 0x50B1C0u;
            goto label_50b1c0;
        }
    }
    ctx->pc = 0x50B1BCu;
label_50b1bc:
    // 0x50b1bc: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x50b1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_50b1c0:
    // 0x50b1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50b1c4:
    // 0x50b1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50b1c8:
    // 0x50b1c8: 0x3e00008  jr          $ra
label_50b1cc:
    if (ctx->pc == 0x50B1CCu) {
        ctx->pc = 0x50B1CCu;
            // 0x50b1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50B1D0u;
        goto label_fallthrough_0x50b1c8;
    }
    ctx->pc = 0x50B1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B1C8u;
            // 0x50b1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x50b1c8:
    ctx->pc = 0x50B1D0u;
}
