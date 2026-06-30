#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249150
// Address: 0x249150 - 0x249240
void sub_00249150_0x249150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249150_0x249150");
#endif

    switch (ctx->pc) {
        case 0x249150u: goto label_249150;
        case 0x249154u: goto label_249154;
        case 0x249158u: goto label_249158;
        case 0x24915cu: goto label_24915c;
        case 0x249160u: goto label_249160;
        case 0x249164u: goto label_249164;
        case 0x249168u: goto label_249168;
        case 0x24916cu: goto label_24916c;
        case 0x249170u: goto label_249170;
        case 0x249174u: goto label_249174;
        case 0x249178u: goto label_249178;
        case 0x24917cu: goto label_24917c;
        case 0x249180u: goto label_249180;
        case 0x249184u: goto label_249184;
        case 0x249188u: goto label_249188;
        case 0x24918cu: goto label_24918c;
        case 0x249190u: goto label_249190;
        case 0x249194u: goto label_249194;
        case 0x249198u: goto label_249198;
        case 0x24919cu: goto label_24919c;
        case 0x2491a0u: goto label_2491a0;
        case 0x2491a4u: goto label_2491a4;
        case 0x2491a8u: goto label_2491a8;
        case 0x2491acu: goto label_2491ac;
        case 0x2491b0u: goto label_2491b0;
        case 0x2491b4u: goto label_2491b4;
        case 0x2491b8u: goto label_2491b8;
        case 0x2491bcu: goto label_2491bc;
        case 0x2491c0u: goto label_2491c0;
        case 0x2491c4u: goto label_2491c4;
        case 0x2491c8u: goto label_2491c8;
        case 0x2491ccu: goto label_2491cc;
        case 0x2491d0u: goto label_2491d0;
        case 0x2491d4u: goto label_2491d4;
        case 0x2491d8u: goto label_2491d8;
        case 0x2491dcu: goto label_2491dc;
        case 0x2491e0u: goto label_2491e0;
        case 0x2491e4u: goto label_2491e4;
        case 0x2491e8u: goto label_2491e8;
        case 0x2491ecu: goto label_2491ec;
        case 0x2491f0u: goto label_2491f0;
        case 0x2491f4u: goto label_2491f4;
        case 0x2491f8u: goto label_2491f8;
        case 0x2491fcu: goto label_2491fc;
        case 0x249200u: goto label_249200;
        case 0x249204u: goto label_249204;
        case 0x249208u: goto label_249208;
        case 0x24920cu: goto label_24920c;
        case 0x249210u: goto label_249210;
        case 0x249214u: goto label_249214;
        case 0x249218u: goto label_249218;
        case 0x24921cu: goto label_24921c;
        case 0x249220u: goto label_249220;
        case 0x249224u: goto label_249224;
        case 0x249228u: goto label_249228;
        case 0x24922cu: goto label_24922c;
        case 0x249230u: goto label_249230;
        case 0x249234u: goto label_249234;
        case 0x249238u: goto label_249238;
        case 0x24923cu: goto label_24923c;
        default: break;
    }

    ctx->pc = 0x249150u;

label_249150:
    // 0x249150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249154:
    // 0x249154: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x249154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249158:
    // 0x249158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24915c:
    // 0x24915c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x24915cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_249160:
    // 0x249160: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
label_249164:
    if (ctx->pc == 0x249164u) {
        ctx->pc = 0x249164u;
            // 0x249164: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x249168u;
        goto label_249168;
    }
    ctx->pc = 0x249160u;
    {
        const bool branch_taken_0x249160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249160u;
            // 0x249164: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249160) {
            ctx->pc = 0x249228u;
            goto label_249228;
        }
    }
    ctx->pc = 0x249168u;
label_249168:
    // 0x249168: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_24916c:
    if (ctx->pc == 0x24916Cu) {
        ctx->pc = 0x249170u;
        goto label_249170;
    }
    ctx->pc = 0x249168u;
    {
        const bool branch_taken_0x249168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x249168) {
            ctx->pc = 0x2491D0u;
            goto label_2491d0;
        }
    }
    ctx->pc = 0x249170u;
label_249170:
    // 0x249170: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_249174:
    // 0x249174: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_249178:
    if (ctx->pc == 0x249178u) {
        ctx->pc = 0x249178u;
            // 0x249178: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24917Cu;
        goto label_24917c;
    }
    ctx->pc = 0x249174u;
    {
        const bool branch_taken_0x249174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x249178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249174u;
            // 0x249178: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249174) {
            ctx->pc = 0x249190u;
            goto label_249190;
        }
    }
    ctx->pc = 0x24917Cu;
label_24917c:
    // 0x24917c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_249180:
    if (ctx->pc == 0x249180u) {
        ctx->pc = 0x249184u;
        goto label_249184;
    }
    ctx->pc = 0x24917Cu;
    {
        const bool branch_taken_0x24917c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x24917c) {
            ctx->pc = 0x249190u;
            goto label_249190;
        }
    }
    ctx->pc = 0x249184u;
label_249184:
    // 0x249184: 0x10000028  b           . + 4 + (0x28 << 2)
label_249188:
    if (ctx->pc == 0x249188u) {
        ctx->pc = 0x24918Cu;
        goto label_24918c;
    }
    ctx->pc = 0x249184u;
    {
        const bool branch_taken_0x249184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249184) {
            ctx->pc = 0x249228u;
            goto label_249228;
        }
    }
    ctx->pc = 0x24918Cu;
label_24918c:
    // 0x24918c: 0x0  nop
    ctx->pc = 0x24918cu;
    // NOP
label_249190:
    // 0x249190: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x249190u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_249194:
    // 0x249194: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x249194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_249198:
    // 0x249198: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x249198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_24919c:
    // 0x24919c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2491a0:
    // 0x2491a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2491a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2491a4:
    // 0x2491a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2491a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2491a8:
    // 0x2491a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2491a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2491ac:
    // 0x2491ac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2491acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2491b0:
    // 0x2491b0: 0x8c6316d0  lw          $v1, 0x16D0($v1)
    ctx->pc = 0x2491b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5840)));
label_2491b4:
    // 0x2491b4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2491b8:
    if (ctx->pc == 0x2491B8u) {
        ctx->pc = 0x2491B8u;
            // 0x2491b8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x2491BCu;
        goto label_2491bc;
    }
    ctx->pc = 0x2491B4u;
    {
        const bool branch_taken_0x2491b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491B4u;
            // 0x2491b8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491b4) {
            ctx->pc = 0x249228u;
            goto label_249228;
        }
    }
    ctx->pc = 0x2491BCu;
label_2491bc:
    // 0x2491bc: 0x60f809  jalr        $v1
label_2491c0:
    if (ctx->pc == 0x2491C0u) {
        ctx->pc = 0x2491C4u;
        goto label_2491c4;
    }
    ctx->pc = 0x2491BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2491C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2491C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2491C4u; }
            if (ctx->pc != 0x2491C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2491C4u;
label_2491c4:
    // 0x2491c4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2491c8:
    if (ctx->pc == 0x2491C8u) {
        ctx->pc = 0x2491CCu;
        goto label_2491cc;
    }
    ctx->pc = 0x2491C4u;
    {
        const bool branch_taken_0x2491c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2491c4) {
            ctx->pc = 0x249228u;
            goto label_249228;
        }
    }
    ctx->pc = 0x2491CCu;
label_2491cc:
    // 0x2491cc: 0x0  nop
    ctx->pc = 0x2491ccu;
    // NOP
label_2491d0:
    // 0x2491d0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2491d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2491d4:
    // 0x2491d4: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x2491d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2491d8:
    // 0x2491d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2491dc:
    if (ctx->pc == 0x2491DCu) {
        ctx->pc = 0x2491DCu;
            // 0x2491dc: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x2491E0u;
        goto label_2491e0;
    }
    ctx->pc = 0x2491D8u;
    {
        const bool branch_taken_0x2491d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2491DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491D8u;
            // 0x2491dc: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491d8) {
            ctx->pc = 0x2491E8u;
            goto label_2491e8;
        }
    }
    ctx->pc = 0x2491E0u;
label_2491e0:
    // 0x2491e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2491e4:
    if (ctx->pc == 0x2491E4u) {
        ctx->pc = 0x2491E4u;
            // 0x2491e4: 0xe48d001c  swc1        $f13, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->pc = 0x2491E8u;
        goto label_2491e8;
    }
    ctx->pc = 0x2491E0u;
    {
        const bool branch_taken_0x2491e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491E0u;
            // 0x2491e4: 0xe48d001c  swc1        $f13, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491e0) {
            ctx->pc = 0x2491F0u;
            goto label_2491f0;
        }
    }
    ctx->pc = 0x2491E8u;
label_2491e8:
    // 0x2491e8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2491e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2491ec:
    // 0x2491ec: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2491ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_2491f0:
    // 0x2491f0: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x2491f0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2491f4:
    // 0x2491f4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2491f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2491f8:
    // 0x2491f8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2491f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2491fc:
    // 0x2491fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2491fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_249200:
    // 0x249200: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_249204:
    // 0x249204: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x249204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_249208:
    // 0x249208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24920c:
    // 0x24920c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x24920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_249210:
    // 0x249210: 0x8c6316d0  lw          $v1, 0x16D0($v1)
    ctx->pc = 0x249210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5840)));
label_249214:
    // 0x249214: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_249218:
    if (ctx->pc == 0x249218u) {
        ctx->pc = 0x24921Cu;
        goto label_24921c;
    }
    ctx->pc = 0x249214u;
    {
        const bool branch_taken_0x249214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249214) {
            ctx->pc = 0x249228u;
            goto label_249228;
        }
    }
    ctx->pc = 0x24921Cu;
label_24921c:
    // 0x24921c: 0x60f809  jalr        $v1
label_249220:
    if (ctx->pc == 0x249220u) {
        ctx->pc = 0x249224u;
        goto label_249224;
    }
    ctx->pc = 0x24921Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249224u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x249224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249224u; }
            if (ctx->pc != 0x249224u) { return; }
        }
        }
    }
    ctx->pc = 0x249224u;
label_249224:
    // 0x249224: 0x0  nop
    ctx->pc = 0x249224u;
    // NOP
label_249228:
    // 0x249228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24922c:
    // 0x24922c: 0x3e00008  jr          $ra
label_249230:
    if (ctx->pc == 0x249230u) {
        ctx->pc = 0x249230u;
            // 0x249230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x249234u;
        goto label_249234;
    }
    ctx->pc = 0x24922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24922Cu;
            // 0x249230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249234u;
label_249234:
    // 0x249234: 0x0  nop
    ctx->pc = 0x249234u;
    // NOP
label_249238:
    // 0x249238: 0x0  nop
    ctx->pc = 0x249238u;
    // NOP
label_24923c:
    // 0x24923c: 0x0  nop
    ctx->pc = 0x24923cu;
    // NOP
}
