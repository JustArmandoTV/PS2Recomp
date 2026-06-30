#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267460
// Address: 0x267460 - 0x267b50
void sub_00267460_0x267460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267460_0x267460");
#endif

    switch (ctx->pc) {
        case 0x2674d0u: goto label_2674d0;
        case 0x2674e0u: goto label_2674e0;
        case 0x267508u: goto label_267508;
        case 0x267574u: goto label_267574;
        case 0x267578u: goto label_267578;
        case 0x2675fcu: goto label_2675fc;
        case 0x267600u: goto label_267600;
        case 0x26791cu: goto label_26791c;
        case 0x267968u: goto label_267968;
        default: break;
    }

    ctx->pc = 0x267460u;

    // 0x267460: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x267460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x267464: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x267464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267468: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x267468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26746c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267470: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267474: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x267474u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26747c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26747cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267484: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x267484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26748c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267490: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x267490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x267494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267498: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x267498u;
    {
        const bool branch_taken_0x267498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267498u;
            // 0x26749c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267498) {
            ctx->pc = 0x267A18u;
            goto label_267a18;
        }
    }
    ctx->pc = 0x2674A0u;
    // 0x2674a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2674a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2674a4: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2674A4u;
    {
        const bool branch_taken_0x2674a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2674A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2674A4u;
            // 0x2674a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674a4) {
            ctx->pc = 0x267600u;
            goto label_267600;
        }
    }
    ctx->pc = 0x2674ACu;
    // 0x2674ac: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2674ACu;
    {
        const bool branch_taken_0x2674ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2674ac) {
            ctx->pc = 0x267578u;
            goto label_267578;
        }
    }
    ctx->pc = 0x2674B4u;
    // 0x2674b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2674b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2674b8: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2674B8u;
    {
        const bool branch_taken_0x2674b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2674b8) {
            ctx->pc = 0x267508u;
            goto label_267508;
        }
    }
    ctx->pc = 0x2674C0u;
    // 0x2674c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2674C0u;
    {
        const bool branch_taken_0x2674c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674c0) {
            ctx->pc = 0x2674D0u;
            goto label_2674d0;
        }
    }
    ctx->pc = 0x2674C8u;
    // 0x2674c8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2674C8u;
    {
        const bool branch_taken_0x2674c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674c8) {
            ctx->pc = 0x267B18u;
            goto label_267b18;
        }
    }
    ctx->pc = 0x2674D0u;
label_2674d0:
    // 0x2674d0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2674d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2674d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2674d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2674d8: 0xc0999b0  jal         func_2666C0
    ctx->pc = 0x2674D8u;
    SET_GPR_U32(ctx, 31, 0x2674E0u);
    ctx->pc = 0x2674DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2674D8u;
            // 0x2674dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2666C0u;
    if (runtime->hasFunction(0x2666C0u)) {
        auto targetFn = runtime->lookupFunction(0x2666C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674E0u; }
        if (ctx->pc != 0x2674E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002666C0_0x2666c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674E0u; }
        if (ctx->pc != 0x2674E0u) { return; }
    }
    ctx->pc = 0x2674E0u;
label_2674e0:
    // 0x2674e0: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x2674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2674e4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2674e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2674e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2674E8u;
    {
        const bool branch_taken_0x2674e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674e8) {
            ctx->pc = 0x267500u;
            goto label_267500;
        }
    }
    ctx->pc = 0x2674F0u;
    // 0x2674f0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2674f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2674f4: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2674F4u;
    {
        const bool branch_taken_0x2674f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2674F4u;
            // 0x2674f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674f4) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x2674FCu;
    // 0x2674fc: 0x0  nop
    ctx->pc = 0x2674fcu;
    // NOP
label_267500:
    // 0x267500: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x267500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267504: 0x0  nop
    ctx->pc = 0x267504u;
    // NOP
label_267508:
    // 0x267508: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x267508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x26750c: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x26750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267510: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x267510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267514: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x267514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267518: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x267518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26751c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26751cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x267520: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x267520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x267524: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x267524u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x267528: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x267528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x26752c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26752cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267530: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x267530u;
    {
        const bool branch_taken_0x267530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267530) {
            ctx->pc = 0x267568u;
            goto label_267568;
        }
    }
    ctx->pc = 0x267538u;
    // 0x267538: 0x6410007  bgez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x267538u;
    {
        const bool branch_taken_0x267538 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x267538) {
            ctx->pc = 0x267558u;
            goto label_267558;
        }
    }
    ctx->pc = 0x267540u;
    // 0x267540: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x267540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x267544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x267544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267548: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x267548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26754c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x26754Cu;
    {
        const bool branch_taken_0x26754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26754Cu;
            // 0x267550: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26754c) {
            ctx->pc = 0x2674D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2674d0;
        }
    }
    ctx->pc = 0x267554u;
    // 0x267554: 0x0  nop
    ctx->pc = 0x267554u;
    // NOP
label_267558:
    // 0x267558: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26755c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x26755cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x267560: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x267560u;
    {
        const bool branch_taken_0x267560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267560u;
            // 0x267564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267560) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x267568u;
label_267568:
    // 0x267568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26756c: 0xc099a10  jal         func_266840
    ctx->pc = 0x26756Cu;
    SET_GPR_U32(ctx, 31, 0x267574u);
    ctx->pc = 0x267570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26756Cu;
            // 0x267570: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266840u;
    if (runtime->hasFunction(0x266840u)) {
        auto targetFn = runtime->lookupFunction(0x266840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267574u; }
        if (ctx->pc != 0x267574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266840_0x266840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267574u; }
        if (ctx->pc != 0x267574u) { return; }
    }
    ctx->pc = 0x267574u;
label_267574:
    // 0x267574: 0x0  nop
    ctx->pc = 0x267574u;
    // NOP
label_267578:
    // 0x267578: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x267578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x26757c: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x26757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267580: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x267580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x267584: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x267584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x267588: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x267588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26758c: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x26758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267590: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x267590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267594: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x267594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267598: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x267598u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x26759c: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x26759cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2675a0: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x2675a0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2675a4: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2675a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2675a8: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2675a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2675ac: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2675acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2675b0: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2675b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2675b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2675b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2675b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2675B8u;
    {
        const bool branch_taken_0x2675b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2675b8) {
            ctx->pc = 0x2675F0u;
            goto label_2675f0;
        }
    }
    ctx->pc = 0x2675C0u;
    // 0x2675c0: 0x1e400007  bgtz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2675C0u;
    {
        const bool branch_taken_0x2675c0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x2675c0) {
            ctx->pc = 0x2675E0u;
            goto label_2675e0;
        }
    }
    ctx->pc = 0x2675C8u;
    // 0x2675c8: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x2675c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x2675cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2675d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2675d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2675d4: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x2675D4u;
    {
        const bool branch_taken_0x2675d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675D4u;
            // 0x2675d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675d4) {
            ctx->pc = 0x267508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267508;
        }
    }
    ctx->pc = 0x2675DCu;
    // 0x2675dc: 0x0  nop
    ctx->pc = 0x2675dcu;
    // NOP
label_2675e0:
    // 0x2675e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2675e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2675e4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2675e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2675e8: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x2675E8u;
    {
        const bool branch_taken_0x2675e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2675E8u;
            // 0x2675ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675e8) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x2675F0u;
label_2675f0:
    // 0x2675f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2675f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2675f4: 0xc099a5c  jal         func_266970
    ctx->pc = 0x2675F4u;
    SET_GPR_U32(ctx, 31, 0x2675FCu);
    ctx->pc = 0x2675F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2675F4u;
            // 0x2675f8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266970u;
    if (runtime->hasFunction(0x266970u)) {
        auto targetFn = runtime->lookupFunction(0x266970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2675FCu; }
        if (ctx->pc != 0x2675FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266970_0x266970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2675FCu; }
        if (ctx->pc != 0x2675FCu) { return; }
    }
    ctx->pc = 0x2675FCu;
label_2675fc:
    // 0x2675fc: 0x0  nop
    ctx->pc = 0x2675fcu;
    // NOP
label_267600:
    // 0x267600: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x267600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x267604: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x267604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x267608: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x267608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x26760c: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x26760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x267610: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x267610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x267614: 0xc4460014  lwc1        $f6, 0x14($v0)
    ctx->pc = 0x267614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x267618: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x267618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26761c: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x26761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x267620: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x267620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267624: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x267624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267628: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x267628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26762c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x26762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267630: 0x46062201  sub.s       $f8, $f4, $f6
    ctx->pc = 0x267630u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x267634: 0x46070241  sub.s       $f9, $f0, $f7
    ctx->pc = 0x267634u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x267638: 0x46023901  sub.s       $f4, $f7, $f2
    ctx->pc = 0x267638u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x26763c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x26763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x267640: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x267640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267644: 0x46013081  sub.s       $f2, $f6, $f1
    ctx->pc = 0x267644u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x267648: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x267648u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x26764c: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x26764cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x267650: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x267650u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x267654: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x267654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x267658: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x267658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x26765c: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x26765cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x267660: 0x4601481d  msub.s      $f0, $f9, $f1
    ctx->pc = 0x267660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x267664: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x267664u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x267668: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x267668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x26766c: 0x4604401d  msub.s      $f0, $f8, $f4
    ctx->pc = 0x26766cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x267670: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x267670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x267674: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x267674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x267678: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x267678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26767c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x26767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267680: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x267680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267684: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x267684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x267688: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x267688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26768c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x26768cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x267690: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x267690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x267694: 0x46005032  c.eq.s      $f10, $f0
    ctx->pc = 0x267694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267698: 0x45000085  bc1f        . + 4 + (0x85 << 2)
    ctx->pc = 0x267698u;
    {
        const bool branch_taken_0x267698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267698u;
            // 0x26769c: 0x2a410002  slti        $at, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267698) {
            ctx->pc = 0x2678B0u;
            goto label_2678b0;
        }
    }
    ctx->pc = 0x2676A0u;
    // 0x2676a0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2676A0u;
    {
        const bool branch_taken_0x2676a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2676a0) {
            ctx->pc = 0x2676C0u;
            goto label_2676c0;
        }
    }
    ctx->pc = 0x2676A8u;
    // 0x2676a8: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x2676a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x2676ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2676b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2676b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2676b4: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x2676B4u;
    {
        const bool branch_taken_0x2676b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2676B4u;
            // 0x2676b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676b4) {
            ctx->pc = 0x267578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267578;
        }
    }
    ctx->pc = 0x2676BCu;
    // 0x2676bc: 0x0  nop
    ctx->pc = 0x2676bcu;
    // NOP
label_2676c0:
    // 0x2676c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2676c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676c4: 0xe68a0020  swc1        $f10, 0x20($s4)
    ctx->pc = 0x2676c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x2676c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2676c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2676cc: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x2676ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x2676d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2676d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2676d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2676d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2676d8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2676d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2676dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2676dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2676e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2676e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2676e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2676e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2676e8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2676e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2676ec: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2676ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2676f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2676f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2676f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2676f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2676f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2676f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2676fc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2676fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267700: 0x46001105  abs.s       $f4, $f2
    ctx->pc = 0x267700u;
    ctx->f[4] = FPU_ABS_S(ctx->f[2]);
    // 0x267704: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x267704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267708: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x267708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26770c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x26770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x267710: 0x460010c5  abs.s       $f3, $f2
    ctx->pc = 0x267710u;
    ctx->f[3] = FPU_ABS_S(ctx->f[2]);
    // 0x267714: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x267714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267718: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x267718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26771c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267720: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x267720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x267724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x267728: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x267728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x26772c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26772Cu;
    {
        const bool branch_taken_0x26772c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26772Cu;
            // 0x267730: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26772c) {
            ctx->pc = 0x267740u;
            goto label_267740;
        }
    }
    ctx->pc = 0x267734u;
    // 0x267734: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x267734u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x267738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x267738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26773c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267740:
    // 0x267740: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x267740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267744: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x267744u;
    {
        const bool branch_taken_0x267744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x267744) {
            ctx->pc = 0x267750u;
            goto label_267750;
        }
    }
    ctx->pc = 0x26774Cu;
    // 0x26774c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x26774cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_267750:
    // 0x267750: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x267750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x267754: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x267754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x267758: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x267758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26775c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x26775cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x267760: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x267760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x267764: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x267764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x267768: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x267768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26776c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x26776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267770: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x267770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x267774: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x267774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x267778: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x267778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26777c: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x26777cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x267780: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x267780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x267784: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x267784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267788: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x267788u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26778c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26778cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x267790: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x267790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267794: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x267794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267798: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x267798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26779c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26779cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2677a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2677a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2677a4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2677a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677a8: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x2677a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2677ac: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x2677acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2677b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2677B0u;
    {
        const bool branch_taken_0x2677b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2677B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677B0u;
            // 0x2677b4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677b0) {
            ctx->pc = 0x2677D8u;
            goto label_2677d8;
        }
    }
    ctx->pc = 0x2677B8u;
    // 0x2677b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2677b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2677bc: 0x0  nop
    ctx->pc = 0x2677bcu;
    // NOP
    // 0x2677c0: 0x46010116  rsqrt.s     $f4, $f0, $f1
    ctx->pc = 0x2677c0u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2677c4: 0x0  nop
    ctx->pc = 0x2677c4u;
    // NOP
    // 0x2677c8: 0x0  nop
    ctx->pc = 0x2677c8u;
    // NOP
    // 0x2677cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2677CCu;
    {
        const bool branch_taken_0x2677cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677cc) {
            ctx->pc = 0x2677D8u;
            goto label_2677d8;
        }
    }
    ctx->pc = 0x2677D4u;
    // 0x2677d4: 0x0  nop
    ctx->pc = 0x2677d4u;
    // NOP
label_2677d8:
    // 0x2677d8: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x2677d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
    // 0x2677dc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2677dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2677e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2677e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2677e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2677e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2677e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2677e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2677ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2677ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2677f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2677f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2677f4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2677f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2677f8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2677f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2677fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2677fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x267800: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x267800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x267804: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x267804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267808: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x267808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x26780c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x26780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x267810: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x267810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267814: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x267814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x267818: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x267818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x26781c: 0x8ea40068  lw          $a0, 0x68($s5)
    ctx->pc = 0x26781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x267820: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x267820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x267824: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x267824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x267828: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x267828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26782c: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x26782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267830: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x267830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267834: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x267834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267838: 0x46003185  abs.s       $f6, $f6
    ctx->pc = 0x267838u;
    ctx->f[6] = FPU_ABS_S(ctx->f[6]);
    // 0x26783c: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x26783cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x267840: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x267840u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x267844: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x267844u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
    // 0x267848: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x267848u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x26784c: 0x46052900  add.s       $f4, $f5, $f5
    ctx->pc = 0x26784cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x267850: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x267850u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x267854: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x267854u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[3] = ctx->f[5] / ctx->f[3];
    // 0x267858: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x267858u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26785c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x26785cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x267860: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x267860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x267864: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x267864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x267868: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x267868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26786c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x26786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267870: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x267870u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x267874: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x267874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x267878: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x267878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x26787c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267880: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x267880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267884: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x267884u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x267888: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x267888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x26788c: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x26788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x267890: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x267890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267894: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x267894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267898: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x267898u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26789c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x26789cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x2678a0: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x2678a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2678a4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2678A4u;
    {
        const bool branch_taken_0x2678a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2678A4u;
            // 0x2678a8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678a4) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x2678ACu;
    // 0x2678ac: 0x0  nop
    ctx->pc = 0x2678acu;
    // NOP
label_2678b0:
    // 0x2678b0: 0x460a0032  c.eq.s      $f0, $f10
    ctx->pc = 0x2678b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2678b4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2678B4u;
    {
        const bool branch_taken_0x2678b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2678B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2678B4u;
            // 0x2678b8: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678b4) {
            ctx->pc = 0x2678E0u;
            goto label_2678e0;
        }
    }
    ctx->pc = 0x2678BCu;
    // 0x2678bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2678bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2678c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2678c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2678c4: 0x0  nop
    ctx->pc = 0x2678c4u;
    // NOP
    // 0x2678c8: 0x46000a96  rsqrt.s     $f10, $f1, $f0
    ctx->pc = 0x2678c8u;
    ctx->f[10] = 1.0f / sqrtf(ctx->f[1]);
    // 0x2678cc: 0x0  nop
    ctx->pc = 0x2678ccu;
    // NOP
    // 0x2678d0: 0x0  nop
    ctx->pc = 0x2678d0u;
    // NOP
    // 0x2678d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2678D4u;
    {
        const bool branch_taken_0x2678d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2678d4) {
            ctx->pc = 0x2678E0u;
            goto label_2678e0;
        }
    }
    ctx->pc = 0x2678DCu;
    // 0x2678dc: 0x0  nop
    ctx->pc = 0x2678dcu;
    // NOP
label_2678e0:
    // 0x2678e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2678e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678e4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2678e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2678e8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2678e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2678ec: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2678ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2678f0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2678f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2678f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2678f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2678f8: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2678f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2678fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2678fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x267900: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x267900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267904: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x267904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x267908: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x267908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x26790c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267910: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x267910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x267914: 0xc099b04  jal         func_266C10
    ctx->pc = 0x267914u;
    SET_GPR_U32(ctx, 31, 0x26791Cu);
    ctx->pc = 0x267918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267914u;
            // 0x267918: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (runtime->hasFunction(0x266C10u)) {
        auto targetFn = runtime->lookupFunction(0x266C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26791Cu; }
        if (ctx->pc != 0x26791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C10_0x266c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26791Cu; }
        if (ctx->pc != 0x26791Cu) { return; }
    }
    ctx->pc = 0x26791Cu;
label_26791c:
    // 0x26791c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267920: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x267920u;
    {
        const bool branch_taken_0x267920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267920) {
            ctx->pc = 0x267A18u;
            goto label_267a18;
        }
    }
    ctx->pc = 0x267928u;
    // 0x267928: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x267928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x26792c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x26792cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x267930: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x267930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267934: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x267934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x267938: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x267938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26793c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x26793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x267940: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x267940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267944: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x267944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x267948: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x267948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26794c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x26794cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x267950: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x267950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267954: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x267954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x267958: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x267958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x26795c: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x26795cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x267960: 0xc09e844  jal         func_27A110
    ctx->pc = 0x267960u;
    SET_GPR_U32(ctx, 31, 0x267968u);
    ctx->pc = 0x267964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267960u;
            // 0x267964: 0x24a70020  addiu       $a3, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A110u;
    if (runtime->hasFunction(0x27A110u)) {
        auto targetFn = runtime->lookupFunction(0x27A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267968u; }
        if (ctx->pc != 0x267968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A110_0x27a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267968u; }
        if (ctx->pc != 0x267968u) { return; }
    }
    ctx->pc = 0x267968u;
label_267968:
    // 0x267968: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x267968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x26796c: 0xc7ae0090  lwc1        $f14, 0x90($sp)
    ctx->pc = 0x26796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x267970: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x267970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x267974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267978: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x267978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26797c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x26797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267980: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x267980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267984: 0xc4670010  lwc1        $f7, 0x10($v1)
    ctx->pc = 0x267984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x267988: 0xc4660014  lwc1        $f6, 0x14($v1)
    ctx->pc = 0x267988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26798c: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x26798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x267990: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x267990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267994: 0x460172c2  mul.s       $f11, $f14, $f1
    ctx->pc = 0x267994u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x267998: 0x46007282  mul.s       $f10, $f14, $f0
    ctx->pc = 0x267998u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x26799c: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x26799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2679a0: 0xc464001c  lwc1        $f4, 0x1C($v1)
    ctx->pc = 0x2679a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2679a4: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x2679a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2679a8: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x2679a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2679ac: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2679acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2679b0: 0x460769c2  mul.s       $f7, $f13, $f7
    ctx->pc = 0x2679b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x2679b4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x2679b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2679b8: 0x46066982  mul.s       $f6, $f13, $f6
    ctx->pc = 0x2679b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[13], ctx->f[6]);
    // 0x2679bc: 0x46097242  mul.s       $f9, $f14, $f9
    ctx->pc = 0x2679bcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x2679c0: 0x46056942  mul.s       $f5, $f13, $f5
    ctx->pc = 0x2679c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[5]);
    // 0x2679c4: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x2679c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x2679c8: 0x46046902  mul.s       $f4, $f13, $f4
    ctx->pc = 0x2679c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x2679cc: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2679ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2679d0: 0x46075ac0  add.s       $f11, $f11, $f7
    ctx->pc = 0x2679d0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x2679d4: 0x46035ac0  add.s       $f11, $f11, $f3
    ctx->pc = 0x2679d4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[3]);
    // 0x2679d8: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2679d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2679dc: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x2679dcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x2679e0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2679e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2679e4: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x2679e4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x2679e8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2679e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2679ec: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x2679ecu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2679f0: 0x46025280  add.s       $f10, $f10, $f2
    ctx->pc = 0x2679f0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[2]);
    // 0x2679f4: 0xe68b0010  swc1        $f11, 0x10($s4)
    ctx->pc = 0x2679f4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x2679f8: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x2679f8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2679fc: 0xe68a0014  swc1        $f10, 0x14($s4)
    ctx->pc = 0x2679fcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x267a00: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x267a00u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x267a04: 0xe6890018  swc1        $f9, 0x18($s4)
    ctx->pc = 0x267a04u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x267a08: 0xe688001c  swc1        $f8, 0x1C($s4)
    ctx->pc = 0x267a08u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x267a0c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x267A0Cu;
    {
        const bool branch_taken_0x267a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A0Cu;
            // 0x267a10: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a0c) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x267A14u;
    // 0x267a14: 0x0  nop
    ctx->pc = 0x267a14u;
    // NOP
label_267a18:
    // 0x267a18: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x267a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x267a1c: 0xc4460014  lwc1        $f6, 0x14($v0)
    ctx->pc = 0x267a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x267a20: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x267a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x267a24: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x267a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x267a28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x267a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267a2c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x267a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267a30: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x267a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267a34: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x267a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267a38: 0x46062201  sub.s       $f8, $f4, $f6
    ctx->pc = 0x267a38u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x267a3c: 0x46070281  sub.s       $f10, $f0, $f7
    ctx->pc = 0x267a3cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x267a40: 0x46023901  sub.s       $f4, $f7, $f2
    ctx->pc = 0x267a40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x267a44: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x267a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x267a48: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x267a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267a4c: 0x46013081  sub.s       $f2, $f6, $f1
    ctx->pc = 0x267a4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x267a50: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x267a50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x267a54: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x267a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x267a58: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x267a58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x267a5c: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x267a5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x267a60: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x267a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x267a64: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x267a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x267a68: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x267a68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x267a6c: 0x4601501d  msub.s      $f0, $f10, $f1
    ctx->pc = 0x267a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
    // 0x267a70: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x267a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x267a74: 0x4602501a  mula.s      $f10, $f2
    ctx->pc = 0x267a74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x267a78: 0x4604401d  msub.s      $f0, $f8, $f4
    ctx->pc = 0x267a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x267a7c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x267a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x267a80: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x267a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x267a84: 0xc7a90080  lwc1        $f9, 0x80($sp)
    ctx->pc = 0x267a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x267a88: 0xc7ab0084  lwc1        $f11, 0x84($sp)
    ctx->pc = 0x267a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x267a8c: 0xc7aa0088  lwc1        $f10, 0x88($sp)
    ctx->pc = 0x267a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x267a90: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x267a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267a94: 0xc4480034  lwc1        $f8, 0x34($v0)
    ctx->pc = 0x267a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x267a98: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x267a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x267a9c: 0xc4460030  lwc1        $f6, 0x30($v0)
    ctx->pc = 0x267a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x267aa0: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x267aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267aa4: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x267aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x267aa8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x267aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x267aac: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x267aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x267ab0: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x267ab0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x267ab4: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x267ab4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x267ab8: 0x460b39c2  mul.s       $f7, $f7, $f11
    ctx->pc = 0x267ab8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x267abc: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x267abcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x267ac0: 0x460b5842  mul.s       $f1, $f11, $f11
    ctx->pc = 0x267ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x267ac4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x267ac4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x267ac8: 0x46072818  adda.s      $f5, $f7
    ctx->pc = 0x267ac8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x267acc: 0x460a18dc  madd.s      $f3, $f3, $f10
    ctx->pc = 0x267accu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
    // 0x267ad0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x267ad0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x267ad4: 0x460a505c  madd.s      $f1, $f10, $f10
    ctx->pc = 0x267ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x267ad8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x267ad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267adc: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x267adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x267ae0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x267ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267ae4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x267AE4u;
    {
        const bool branch_taken_0x267ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267AE4u;
            // 0x267ae8: 0x2a410003  slti        $at, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ae4) {
            ctx->pc = 0x267B20u;
            goto label_267b20;
        }
    }
    ctx->pc = 0x267AECu;
    // 0x267aec: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x267AECu;
    {
        const bool branch_taken_0x267aec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x267aec) {
            ctx->pc = 0x267B08u;
            goto label_267b08;
        }
    }
    ctx->pc = 0x267AF4u;
    // 0x267af4: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x267af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x267af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x267af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267afc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x267afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x267b00: 0x1000febf  b           . + 4 + (-0x141 << 2)
    ctx->pc = 0x267B00u;
    {
        const bool branch_taken_0x267b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B00u;
            // 0x267b04: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b00) {
            ctx->pc = 0x267600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_267600;
        }
    }
    ctx->pc = 0x267B08u;
label_267b08:
    // 0x267b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267b0c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x267b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x267b10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x267B10u;
    {
        const bool branch_taken_0x267b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B10u;
            // 0x267b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b10) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x267B18u;
label_267b18:
    // 0x267b18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267B18u;
    {
        const bool branch_taken_0x267b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B18u;
            // 0x267b1c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b18) {
            ctx->pc = 0x267B28u;
            goto label_267b28;
        }
    }
    ctx->pc = 0x267B20u;
label_267b20:
    // 0x267b20: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x267b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x267b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267b28:
    // 0x267b28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x267b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267b2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267b30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267b34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267b44: 0x3e00008  jr          $ra
    ctx->pc = 0x267B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B44u;
            // 0x267b48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267B4Cu;
    // 0x267b4c: 0x0  nop
    ctx->pc = 0x267b4cu;
    // NOP
}
